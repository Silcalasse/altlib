#include <types.h>

#pragma once

#define SYS_READ 0
#define SYS_WRITE 1
#define SYS_OPEN 2
#define SYS_CLOSE 3

#define SYS_EXIT 60

ssize_t read(int fd, void* buf, size_t count);
ssize_t write(int fd, void* buf, size_t count);
int open(const char* path, int flags);
int close(int fd);

[[noreturn]] void exit(int exit_code);
