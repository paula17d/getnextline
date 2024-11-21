/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:19:47 by pauladretta       #+#    #+#             */
/*   Updated: 2024/11/21 14:11:19 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char * get_next_line(int fd)
{

    
    int bytes_read;
    static char buffer[BUFFER_SIZE]; 
    bytes_read = read(fd, buffer, BUFFER_SIZE - 1);
    if (bytes_read == 0)
    {
        return (NULL);
    }
    buffer[BUFFER_SIZE - 1] = '\0';
    
    return (buffer);
}