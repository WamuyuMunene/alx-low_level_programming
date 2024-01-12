#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c 
gcc -Wall -pedantic -Werror -Wextra -c ../0x05-pointers_arrays_strings/*.c
gcc -Wall -pedantic -Werror -Wextra -c ../0x06-pointers_arrays_strings/*.c
gcc -Wall -pedantic -Werror -Wextra -c ../0x07-pointers_arrays_strings/*.c
gcc -Wall -pedantic -Werror -Wextra -c ../0x02-functions_nested_loops/*.c
gcc -Wall -pedantic -Werror -Wextra -c ../0x04-more_functions_nested_loops/*.c
gcc -Wall -pedantic -Werror -Wextra -c ../0x01-variables_if_else_while/*.c

ar rc liball.a *.o \
../0x05-pointers_arrays_strings/*.o \
../0x06-pointers_arrays_strings/*.o \
../0x07-pointers_arrays_strings/*.o \
../0x02-functions_nested_loops/*.o \
../0x04-more_functions_nested_loops/*.o \
../0x01-variables_if_else_while/*.o
