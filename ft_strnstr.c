/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:26:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/09/30 16:55:29 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *small, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(!big) return (0);
	while (big[i] || i < len)
	{
		j = 0;
		while (big[i + j] == small[j] && (j + i) < len)
			j++;
		if (!small[j]) return (&big[i]);
		i++;
	}
	return (0);
}
