#include <system.h>
#include <syscall.h>

ssize_t read(int fd, void* buf, size_t length) {
	return syscall(SYS_READ, fd, buf, length);
}

ssize_t write(int fd, void* buf, size_t length) {
	return syscall(SYS_WRITE, fd, buf, length);
}

int open(const char* path, int flags) {
	return syscall(SYS_OPEN, path, flags);
}

int close(int fd) {
	return syscall(SYS_CLOSE, fd);
}

[[noreturn]] void exit(int exit_code) {
	(void)syscall(SYS_EXIT, exit_code);

	__builtin_unreachable();
}
