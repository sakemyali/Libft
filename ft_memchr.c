/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:15:53 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/30 21:16:32 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*sup;
	unsigned char		uc;

	i = 0;
	sup = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (sup[i] == uc)
			return ((void *)&(sup[i]));
		i++;
	}
	return (NULL);
}
