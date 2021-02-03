/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taemkim <taemkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:41:23 by taemkim           #+#    #+#             */
/*   Updated: 2021/02/03 14:59:55 by taemkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*new;
	size_t	i;

	if (!(new = malloc(size * num)))
		return (NULL);
	i = 0;
	while (i < size * num)
		*(new + i++) = 0;
	return (new);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	if (!dest || !src)
		return (0);
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strlcpy(new, s + start, len + 1);
	return (new);
}

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*n_str;

	len = 0;
	while (str[len])
		len++;
	n_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(n_str))
		return (NULL);
	i = 0;
	while (str[i])
	{
		n_str[i] = str[i];
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}

char	*ft_strchr(const char *source, int c)
{
	char	chr;
	int		i;

	chr = (unsigned char)c;
	i = 0;
	while (source[i] != '\0')
	{
		if (source[i] == chr)
			return ((char *)source + i);
		i++;
	}
	if (source[i] == chr)
		return ((char *)source + i);
	return (0);
}
