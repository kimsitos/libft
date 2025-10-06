/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:51:11 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/06 11:17:18 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big[0])
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while ((small[j] && big[i + j] == small[j]) && (i + j) <= size)
			j++;
		if (!small[j])
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
