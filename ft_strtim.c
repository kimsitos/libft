/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:19:10 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/08 00:27:06 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] &&ft_strchr(set, s1[start]))
	{
		printf(".");
		start++;
	}
	while (s1[end] &&ft_strrchr(set, s1[end]))
	{
		printf(":");
		end--;
	}
	printf("%ld", (end - start + 1));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}

#include <stdio.h>

int main()
{
	char *s1 = "1243hello1234";
	char *s2 = "1234";
	printf("%s\n", ft_strtrim(s1, s2));
	return 0;
}
