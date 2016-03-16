//od -bc filename
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>

#define BUF_SIZE 8192

int main(int argc, char* argv[]) {

    int input_fd;    /* Input file descriptor */
    ssize_t ret_in;    /* Number of bytes returned by read()*/
    char buffer[BUF_SIZE];      /* Character buffer */
    off_t offset, input_off;   /* OffsetValue */

    /* Are src name arguments missing */
    if(argc != 2){
        printf ("Usage: cp file1 ");
        return 1;
    }

    /* Create input file descriptor */
    input_fd = open (argv [1], O_RDONLY);
    if (input_fd == -1) {
            perror ("open");
            return 2;
    }

    /* Get offset from user snd read from that point */
    printf("Enter offset : ");
    scanf("%d",&input_off);
    offset = lseek(input_fd,input_off,SEEK_SET);

    while((ret_in = read (input_fd, &buffer, BUF_SIZE)) > 0){
        printf("%s",buffer);
    }
    /* Close file descriptors */
    close (input_fd);
    return (EXIT_SUCCESS);
}
