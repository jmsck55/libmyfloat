rem Copyright (c) 2023 James Cook
rem Uses Strawberry Perl, from https://strawberryperl.com/

gcc -c -Wall -Werror -fpic libmyfloat.c
gcc -shared -o libmyfloat.dll libmyfloat.o

gcc -c -Wall -Werror -fpic libmycomplex.c
gcc -shared -o libmycomplex.dll libmycomplex.o

gcc -L. -Wall -o test_main.exe main.c -lmyfloat
test_main.exe
pause

gcc -L. -Wall -o test_complex.exe complex_main.c -lmyfloat -lmycomplex
test_complex.exe
pause