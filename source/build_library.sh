# Copyright (c) 2023 James Cook

gcc -c -Wall -Werror -fpic libmyfloat.c
gcc -shared -o libmyfloat.dylib libmyfloat.o

gcc -c -Wall -Werror -fpic libmycomplex.c
gcc -shared -o libmycomplex.dylib libmycomplex.o

gcc -L. -Wall -o main_test main.c -lmyfloat
# You will only need to do this once:
# export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
./main_test
