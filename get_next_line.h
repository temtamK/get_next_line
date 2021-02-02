/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taemkim <taemkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:39:21 by taemkim           #+#    #+#             */
/*   Updated: 2021/02/02 19:04:16 by taemkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

# include <unistd.h>
# include <stdlib.h>

char	*ft_strnew(size_t size);
void	ft_strdel(char **str);
int		ft_new_line(char **s, char **line, int fd, int ret);
int		get_next_line(const int fd, char **line);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *source, int c);

#endif
