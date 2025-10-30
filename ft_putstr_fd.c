/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:16:14 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/30 22:42:07 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	slen;
	size_t	total;
	ssize_t	pdone;

	if (!s || fd < 0)
		return ;
	slen = ft_strlen(s);
	total = 0;
	while (slen - total > WRITE_MAX)
	{
		pdone = write(fd, s + total, WRITE_MAX);
		if (pdone < 0)
			return ;
		total += (size_t)pdone;
	}
	if (slen > total)
		write(fd, s + total, slen - total);
}
