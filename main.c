# include "get_next_line.h"


int main ()
{

    char * line;
    int fd = open("./file", O_RDONLY);
    if (fd == -1)
    {
        write(1, "error opening file\n", 20);
        return (1);
    }
    printf("fd = %d\n", fd);

    while(1)
    {
        line = get_next_line(fd);
        // break;
        if (line == NULL)
            break;
        printf("%s", line);
    }
    close(fd);
    return (0);
}