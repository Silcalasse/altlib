#include <syscall.h>

void main(void) {
	syscall(1, 0, (long)"Hello!\n", 7);
	syscall(1, 0, (long)"Hello!!!\n", 9);
}
