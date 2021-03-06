#include "apue.h"

int
main(int argc, char *argv[])
{
    int fd;
    long len;
    if (argc != 2) {
        err_quit("usage: %s file", argv[0]);
    }

    if ((fd = open(argv[1], O_RDONLY)) < 0) {
        err_sys("open file %s fail", argv[1]);
    }

	if ((len = lseek(fd, 0, SEEK_END)) == -1) {
        err_sys("cannot seek");
    }

    printf("file size: %ld bytes\n", len);

	exit(0);
}
