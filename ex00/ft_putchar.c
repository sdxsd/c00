#include <unistd.h>

void ft_putchar(char c);

// The function to print a character to stdout
// ft_putchar is supplied a character as an argument hereforth referred to within the function as 'c'
// The function then calls the system call write prototyped as ssize_t write(int fd, const void *buffer, size_t count); 
// The first argument to write is the file descriptor where the file is written to, in UNIX operating systems such as macOS everything is a file. The most common output is stdout, which you see on your terminal with every command
// stdout or standard output has a file descriptor of 1, in comparison, stderror or standard error has a file descriptor value of 2
// The first arguments specifies that the output should be written to standard output
// The next argument &c, references the value of the character passed as an argument to ft_putchar.
// The final argument is how many bytes to write, since a character is only 1 byte long, the value 1 is used.  

void ft_putchar(char c) {
	write(1, &c, 1);
}
