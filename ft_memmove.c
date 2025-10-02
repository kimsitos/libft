/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:34 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/02 13:48:11 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*temsrc;
	size_t		srclen;

	temsrc = src;
	srclen = ft_strlen(temsrc);
	while(n || srclen)
	{
		ft_memset(&dest[srclen], temsrc[srclen], 1);
		srclen--;
		n--;
	}
	return(dest);
}
