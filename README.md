# ft_printf

This project implements a custom version of the `printf()` function from the C standard library.

## Objective

The objective of this project is to create a function named `ft_printf()` with the following prototype:

```c
int ft_printf(const char *format, ...);
```

## Key Features

- Handle conversions: `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`
- Implement basic formatting for characters, strings, pointers, and integers
- Produce output similar to the original `printf()` function
- Maintain code structure and extensibility for future enhancements

## Implemented Conversions

- `%c`: Prints a single character
- `%s`: Prints a string
- `%p`: Prints a pointer in hexadecimal format
- `%d`, `%i`: Prints decimal numbers
- `%u`: Prints unsigned decimal numbers
- `%x`: Prints numbers in hexadecimal lowercase format
- `%X`: Prints numbers in hexadecimal uppercase format
- `%%`: Prints a percent sign

## Knowledge Gained

- Deeper understanding of printf()
- Variadic functions in C
- Testing and debugging
- Accurate parsing of function parameters
