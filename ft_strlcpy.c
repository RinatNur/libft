/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheat <jheat@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 23:47:50 by jheat             #+#    #+#             */
/*   Updated: 2020/05/31 13:40:03 by jheat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		src_len;
	size_t		len;

	if (!src)
		return (0);
	src_len = ft_strlen(src);
	if (size)
	{
		if (src_len >= size)
			len = size - 1;
		else
			len = src_len;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (src_len);
}
