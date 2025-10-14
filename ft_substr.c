/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:42:33 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 20:12:18 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	j;

	if (start >= ft_strlen(s))
		return (malloc(sizeof(char)));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (!s[0])
		return (malloc(sizeof(char)));
	temp = malloc((len + 1) * sizeof(char));
	j = 0;
	if (!temp)
		return (temp);
	while (s[start + j] && j < len)
	{
		temp[j] = s[start + j];
		j++;
	}
	temp[j] = 0;
	return (temp);
}

//#include <stdio.h>
//
//int main(void)
//{
//	char *s = ft_substr("hello world", 6, 10);
//	printf("%s\n", s);
//	return 0;
//}