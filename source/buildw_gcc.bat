rem Copyright (c) 2023 James Cook
rem Uses Strawberry Perl, from https://strawberryperl.com/
gcc -c -Wall -Werror -fpic libmyfloat.c
gcc -shared -o libmyfloat.dll libmyfloat.o
gcc -L. -Wall -o main_test.exe main.c -lmyfloat
main_test.exe
pause