#!/bin/bash
wget -P /tmp https://github.com/arthurdamm/holbertonschool-low_level_programming/blob/master/0x17-dynamic_libraries/libwinner.so
export LD_PRELOAD=/tmp/libwinner.so
