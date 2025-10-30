/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:18:39 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/30 22:51:27 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	count;
	char	cc;

	cc = (char)c;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			count = i + 1;
		i++;
	}
	if (cc == '\0')
		return ((char *)s + i);
	if (count == 0)
		return (NULL);
	return ((char *)s + (count - 1));
}
