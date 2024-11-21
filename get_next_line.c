/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:19:47 by pauladretta       #+#    #+#             */
/*   Updated: 2024/11/21 16:06:21 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (dstsize == 0)
	{
		return (src_length);
	}
	while (src[i] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}
char *detele_all_after_newline(char *read_line)
{
    int i;
    size_t len;
    char * line;
    
    if (ft_isin(read_line, '\n'))
    {
        len = 0;
        i = 0;
        while(read_line != NULL && read_line[i] != '\0')
        {
            len++;
            i++;
            if (read_line[i] == '\n')
                break;
        }
        line = malloc(sizeof(char) * (len + 1));
        ft_strlcpy(line, read_line,len + 2);
        free(read_line);
    }
    else 
        line = read_line;
    return(line);
}
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
static char	*ft_strcpy(char *goal, const char *start)
{
	char	*temp;

	temp = goal;
	while (*start != '\0')
		*temp++ = *start++;
	*temp = '\0';
	return (goal);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	char	*result;

	s1_len = 0;
	s2_len = 0;
	if (s1 == (NULL) && s2 == (NULL))
		return (NULL);
	if (s1 != (NULL))
		s1_len = ft_strlen(s1);
	if (s2 != (NULL))
		s2_len = ft_strlen(s2);
	total_len = (s1_len + s2_len) + 1;
	result = malloc(total_len * sizeof(char));
	if (result == (NULL))
		return (NULL);
	if (s1 != NULL)
		ft_strcpy(result, s1);
	if (s2 != NULL)
		ft_strcpy(result + s1_len, s2);
	return (result);
}

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
    static char buffer[BUFFER_SIZE + 1]; 
    char *read_line = malloc(sizeof(char) * 1);
    read_line[0] = '\0';
    while(1)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read == 0)
        {
            return (NULL);
        }
        buffer[bytes_read] = '\0';
        read_line = ft_strjoin_gnl(read_line, buffer);
        int return_value = ft_isin(buffer, '\n');
        if (return_value == 1)//das heisst new line wurde gefunden
        {
            break;
        }
    }
    
    return (read_line);
}

char * get_next_line(int fd)
{
    char * line;
    line = get_buffer(fd);
    line = detele_all_after_newline(line);
    

    return (line);
}