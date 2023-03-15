# Copyright (c) 2023 James Cook

i686-w64-mingw32-gcc -c -Wall -Werror -fpic libmyfloat.c
i686-w64-mingw32-gcc -shared -o libmyfloat.dll libmyfloat.o
i686-w64-mingw32-gcc -L. -Wall -o main_test.exe main.c -lmyfloat
# You will only need to do this once:
# export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
# ./main_test
