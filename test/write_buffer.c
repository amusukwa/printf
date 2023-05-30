#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * write_buffer_1024 - calls on a buffer of 1024 bytes
 * @buffer:array of charachers
 * @size: size of the buffer
 * Return:
 */
int main(void)
{
 char buffer[100];
 int size;
 int fd;
if (buffer[size] == 1024)
write(fd, &buffer, strlen(buffer));
close(fd);

return (0);
}
