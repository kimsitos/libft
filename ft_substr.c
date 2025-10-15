/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:42:33 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/15 14:42:58 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
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
//	char *s = ft_substr("", 0, 0);
//	printf("%s\n", s);
//	return 0;
//}
