/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:15:51 by pauladretta       #+#    #+#             */
/*   Updated: 2024/11/23 12:15:54 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"


int main ()
{

    char * line;
    int fd = open("./file", O_RDWR);
    if (fd == -1)
    {
        write(1, "error opening file\n", 20);
        return (1);
    }

    while(1)
    {
        line = get_next_line(fd);
        // break;
        if (line == NULL)
            break;
        printf("%s", line);
        // break;
    }
    close(fd);
    return (0);
}