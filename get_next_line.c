/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:19:47 by pauladretta       #+#    #+#             */
/*   Updated: 2024/11/21 13:20:11 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char * get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE]; 
    read(fd, buffer, 4);
    buffer[4] = '\0';
    return (buffer);
}