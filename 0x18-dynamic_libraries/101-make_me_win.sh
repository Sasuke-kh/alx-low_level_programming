#!/bin/bash
wget -P /tmp https://github.com/alx-tools/0x18.c/blob/master/gm
export LD_PRELOAD=/tmp/libgiga.so
