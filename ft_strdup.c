/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:00:39 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/07 14:52:18 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*temp;

	temp = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!temp)
		return (0);
	while (*s)
	{
		*temp = *s;
		temp++;
		s++;
	}
	*temp = '\0';
	return (temp);
}
