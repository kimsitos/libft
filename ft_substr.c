/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:42:33 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/09 15:14:27 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*temp;
	size_t	j;

	i = 0;
	temp = malloc((len + 1) * sizeof(char));
	j = 0;
	if (!temp)
		return (0);
	while (s[i] && i < start)
		i++;
	while (s[i + j] && j < len)
	{
		temp[j] = s[i + j];
		j++;
	}
	temp[j] = 0;
	return (temp);
}
