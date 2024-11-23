/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:15:35 by pauladretta       #+#    #+#             */
/*   Updated: 2024/11/23 12:15:39 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*get_buffer(char buffer[], int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*detele_all_after_newline(char *read_line);
int		ft_isin(char *string, char a);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strcpy(char *goal, const char *start);
char	*strcpy_til_newline(char *buffer);

#endif
