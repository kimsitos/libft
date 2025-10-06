/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:00:39 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/06 16:13:22 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*temp;

	temp = malloc(ft_strlen(s));
	if (!temp)
		return (0);
	while(*s)
	{
		*temp = *s;
		temp++;
		s++;
	}
	return (temp);
}

#include <stdio.h>

int main()
{
	char *s1 = "hello world";
	char *s2 = "nope";
	printf("Antes string 1 = %s\n", s1);
	printf("Antes string 2 = %s\n", s2);
	s2 = ft_strdup(s1);
	printf("Despues string 1 = %s\n", s1);
	printf("Despues string 1 = %s\n", s1);
	return 0;
}
