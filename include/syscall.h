#define syscall(id, ...) SYSCALL_N(id, __VA_ARGS__, 0, 0, 0, 0, 0, 0)
#define SYSCALL_N(id, a1, a2, a3, a4, a5, a6, ...) SYSCALL(id, a1, a2, a3, a4, a5, a6)

extern long SYSCALL(long id, long arg1, long arg2, long arg3, long arg4, long arg5, long arg6);
