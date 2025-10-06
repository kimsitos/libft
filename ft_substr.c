/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:42:33 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/06 17:13:54 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char		*temp;

	i = 0;
	temp = malloc(len);
	if(!temp)
	{
		printf("upsi");
		return (0);
	}
	printf("a lo mejor aqui\n");
	while (temp)
	{
		printf("casi casi\n");
		temp[i] = s[start + i];
		i++;
	}
	return (temp);
}

#include <stdio.h>

int	main()
{
	char	*s1 = "hola mundo";
	char	*s2 = "nope";
	printf("Antes string 1 = %s\n", s1);
	printf("Antes string 2 = %s\n", s2);
	s2 = ft_substr(s1, 2, 5);
	printf("despues string 1 = %s\n", s1);
	printf("despues string 2 = %s\n", s2);
	return 0;
}
