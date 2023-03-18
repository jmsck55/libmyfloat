# Copyright (c) 2023 James Cook

gcc -c -Wall -Werror -fpic libmyfloat.c
gcc -shared -o libmyfloat.dylib libmyfloat.o

gcc -c -Wall -Werror -fpic libmycomplex.c
gcc -shared -o libmycomplex.dylib libmycomplex.o

gcc -L. -Wall -o test_main main.c -lmyfloat
# You will only need to do this once:
# export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
./test_main

gcc -L. -Wall -o test_complex complex_main.c -lmyfloat -lmycomplex
./test_complex
