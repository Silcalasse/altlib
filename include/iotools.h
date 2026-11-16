#include <types.h>

#ifndef IOTOOLS
#define IOTOOLS

//Writes thee buffer to the file descriptor
//Returns bytes successfully written, if any, all out errors are negative
//For other errors read from fd2
ssize_t fputs(char* buf, size_t size, int fd);

//puts a single char

int putchar(char c, int fd);

//same as fputs save for checks size internally
ssize_t fput(char* buf, int fd);
//same as fput except it appends a newline character
ssize_t put(char* buf, int fd);
//same as put except for only to fd1
ssize_t print(char* buf);
//same as print but doesn't append a newline characteR
ssize_t fprint(char* buf);

//Reads into the buffer from the fd
//returns the bytes succesfully read, and negative values are errors
//other errores are written to fd2
ssize_t fgets(char* buf, size_t size, int fd);

#endif
