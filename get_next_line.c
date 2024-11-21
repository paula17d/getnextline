/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:19:47 by pauladretta       #+#    #+#             */
/*   Updated: 2024/11/21 14:25:52 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

int ft_isin(char * string, char a)
{
	int i;

	if (string == NULL)
	{
		return (0);
	}

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == a)
		{
			return (1);
		}
		i++;
	}
	return(0);
}

char * get_buffer(int fd)
{
    int bytes_read;
    static char buffer[BUFFER_SIZE]; 
    bytes_read = read(fd, buffer, BUFFER_SIZE - 1);
    if (bytes_read == 0)
    {
        return (NULL);
    }
   int return_value = ft_isin(buffer, '\n');
   if (return_value == 1)//das heisst new line wurde gefunden
   {
    
   }
   
    buffer[BUFFER_SIZE - 1] = '\0';
    
    return (buffer);
}

char * get_next_line(int fd)
{
    char * line;
    line = get_buffer(fd);
    

    return (line);
}