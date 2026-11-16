#include <iotools.h>
#include <system.h>
#include <string.h>

int putchar(char c, int fd) {
	write(fd, &c, 1);
	return 0;
}

ssize_t fputs(char* buf, size_t size, int fd) {
	return write(fd, buf, size);
}

ssize_t fput(char* buf, int fd) {
	int len = strlen(buf);

	return fputs(buf, len, fd);
}

ssize_t put(char* buf, int fd) {
	fput(buf, fd);
	putchar('\n', fd);

	return 1;
}

ssize_t print(char* buf) {
	put(buf, 0);
	return 1;
}

ssize_t fprint(char* buf) {
	fput(buf, 0);
	return 1;
}
