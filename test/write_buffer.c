#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <fcntl.h>

/**
 * write_buffer_1024 - calls on a buffer of 1024 bytes
 * @buffer:array of charachers
 * @size: size of the buffer
 * Return:
 */
int main(void)
{
char buffer[1024];
int size = 1024;
int fd;
fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
if (fd == -1) {
perror("Error opening file");
return 1;
}

if (write(fd, buffer, size) == -1) {
perror("Error writing to file");
close(fd);
return 1;
}
if (close(fd) == -1) {
perror("Error closing file");
return 1;
}

return (0);
}
