gcc -Wall -pedantic -Werror -Wextra -c \ 
alx-low_level_programming/0x05-pointers_arrays_strings/*.c \
alx-low_level_programming/0x06-pointers_arrays_strings/*.c \
alx-low_level_programming/0x07-pointers_arrays_strings/*.c \
alx-low_level_programming/0x02-functions_nested_loops/*c \
alx-low_level_programming/0x04-more_functions_nested_loops/*.c \
alx-low_level_programming/0x01-variables_if_else_while/*.c

ar rc liball.a *.o
