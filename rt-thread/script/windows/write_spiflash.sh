#!/bin/sh

../tools/sunxi-tools/sunxi-fel -p spiflash-write 0x00000000 ../f1c100s_spl/boot.bin
../tools/sunxi-tools/sunxi-fel -p spiflash-write 0x00100000 rtthread.bin
