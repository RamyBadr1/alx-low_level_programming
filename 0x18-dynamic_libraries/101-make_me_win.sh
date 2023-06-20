#!/bin/bash
wget -P ../ https://github.com/arthurdamm/holbertonschool-low_level_programming/blob/master/0x17-dynamic_libraries/libwinner.so
export LD_PRELOAD=../libwinner.so
