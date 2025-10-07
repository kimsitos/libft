/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:19:10 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/07 22:34:03 by stcozaci         ###   ########.fr       */
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
	end = ft_strlen(s) - 1;
	while (ft_strchr(s1, set[start]))
	{
		printf("...");
		start++;
	}
	while (ft_strrchr(s1, set[end]))
	{
		printf(":");
		end--;
	}
	str = malloc(sizeof(char) * (end - start));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[start], end - start);
	return (str);
}

#include <stdio.h>

int main()
{
	char *s1 = "1234hello1234";
	char *s2 = "1234";
	printf("%s\n", ft_strtrim(s1, s2));
	return 0;
}
