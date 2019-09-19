import os
import sys

from SCons.Script import *

envs = []

def GetCurrentDir():
    conscript = File('SConscript')
    fn = conscript.rfile()
    name = fn.name
    path = os.path.dirname(fn.abspath)
    return path

def FindEnv(name):
    for e in envs:
        if e['name'] == name:
            return e
    return None

def MakeEnvironment(name, **parameters):
    if FindEnv(name) != None:
        return False
    env = Environment()
    for k in parameters:
        env[k] = parameters[k]
    envs.append({
        'name':  name,
        'env':   env,
        'files': [],
        'target': ''
    })
    return True

def AppendSrc(name, files, path=None):
    env = FindEnv(name)
    if env is None:
        return False
    env['files'].append(files)
    if path != None:
        includes = []
        for f in path:
            includes.append(os.path.abspath(f))
        print(includes)
        env['env'].AppendUnique(CPPPATH = includes)
    return True

def PrependENVPath(name, path):
    env = FindEnv(name)
    if env is None:
        return False
    env['env'].PrependENVPath('PATH', path)
    return True

def TargetBuilder(name, ext=None):
    env = FindEnv(name)
    if env is None:
        return False
    if ext is None:
        env['env'].Program(env['name'], env['files'])
        env['target'] = env['name']
    else:
        env['env'].Program(env['name'] + '.' + ext, env['files'])
        env['target'] = env['name'] + '.' + ext, env['files']
    return True

def TargetAddPostAction(name, action):
    env = FindEnv(name)
    if env is None:
        return False
    env['env'].AddPostAction(env['target'], action)
    return True

def TargetClean(name, cl):
    env = FindEnv(name)
    if env is None:
        return False
    print(cl)
    env['env'].Clean(env['target'], cl)
    return True
