#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

 #include <fcntl.h>
  #include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

# define  BUFFER_SIZE  8
char * get_next_line(int fd);
#endif
