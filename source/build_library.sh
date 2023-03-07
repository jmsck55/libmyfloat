
gcc -c -Wall -Werror -fpic libmyfloat32.c
gcc -shared -o libmyfloat32.dylib libmyfloat32.o
gcc -L. -Wall -o main_test main.c -lmyfloat32
# export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
./main_test
