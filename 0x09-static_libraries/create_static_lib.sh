gcc -Wall -pedantic -Werror -Wextra -c \
*.c \ 
../0x05-pointers_arrays_strings/*.c \
../0x06-pointers_arrays_strings/*.c \
../0x07-pointers_arrays_strings/*.c \
../0x02-functions_nested_loops/*.c \
../0x04-more_functions_nested_loops/*.c \
../0x01-variables_if_else_while/*.c

ar rc liball.a *.o
