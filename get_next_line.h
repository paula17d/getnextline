#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

 #include <fcntl.h>
  #include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
# include <stdlib.h> 

# define  BUFFER_SIZE  1000
size_t	ft_strlen(const char *str);
char * get_next_line(int fd);
char * get_buffer(int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char *detele_all_after_newline(char *read_line);
int ft_isin(char * string, char a);
char	*ft_strjoin_gnl(char *s1, char *s2);
static char	*ft_strcpy(char *goal, const char *start);

#endif
