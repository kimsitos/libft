/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:49:14 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 16:02:56 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{	
	char dest[] = "viva la vida";
	printf("BEFORE: %s\n", dest);
	ft_strlcpy(dest, "", 7);
	printf("AFTER: %s\n", dest);
	return 0;
}*/