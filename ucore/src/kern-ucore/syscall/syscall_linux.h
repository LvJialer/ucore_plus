#include <types.h>

machine_word_t syscall_linux_read(machine_word_t args[]);
machine_word_t syscall_linux_write(machine_word_t args[]);
machine_word_t syscall_linux_readv(machine_word_t args[]);
machine_word_t syscall_linux_writev(machine_word_t args[]);
machine_word_t syscall_linux_open(machine_word_t args[]);
machine_word_t syscall_linux_close(machine_word_t args[]);
machine_word_t syscall_linux_stat(machine_word_t args[]);
machine_word_t syscall_linux_lstat(machine_word_t args[]);
machine_word_t syscall_linux_fstat(machine_word_t args[]);
machine_word_t syscall_linux_seek(machine_word_t args[]);

machine_word_t syscall_linux_select(machine_word_t args[]);

machine_word_t syscall_linux_dup(machine_word_t args[]);
machine_word_t syscall_linux_dup2(machine_word_t args[]);

machine_word_t syscall_linux_mount(machine_word_t args[]);
machine_word_t syscall_linux_umount(machine_word_t args[]);

machine_word_t syscall_linux_socket(machine_word_t args[]);
machine_word_t syscall_linux_connect(machine_word_t args[]);
machine_word_t syscall_linux_bind(machine_word_t args[]);
machine_word_t syscall_linux_listen(machine_word_t args[]);
machine_word_t syscall_linux_accept(machine_word_t args[]);
machine_word_t syscall_linux_getsockname(machine_word_t args[]);
machine_word_t syscall_linux_getpeername(machine_word_t args[]);
machine_word_t syscall_linux_sendto(machine_word_t args[]);
machine_word_t syscall_linux_recvfrom(machine_word_t args[]);
machine_word_t syscall_linux_setsockopt(machine_word_t args[]);
machine_word_t syscall_linux_getsockopt(machine_word_t args[]);

machine_word_t syscall_linux_gettimeofday(machine_word_t args[]);
machine_word_t syscall_linux_times(machine_word_t args[]);

machine_word_t syscall_linux_setsid(machine_word_t args[]);

machine_word_t syscall_linux_getuid(machine_word_t args[]);
machine_word_t syscall_linux_setuid(machine_word_t args[]);
machine_word_t syscall_linux_getgid(machine_word_t args[]);
machine_word_t syscall_linux_setgid(machine_word_t args[]);
machine_word_t syscall_linux_geteuid(machine_word_t args[]);
machine_word_t syscall_linux_getegid(machine_word_t args[]);
machine_word_t syscall_linux_setgroups(machine_word_t args[]);

machine_word_t syscall_linux_uname(machine_word_t args[]);

#ifndef __UCORE_64__
machine_word_t syscall_linux_stat64(machine_word_t args[]);
machine_word_t syscall_linux_lstat64(machine_word_t args[]);
machine_word_t syscall_linux_fstat64(machine_word_t args[]);
#endif
