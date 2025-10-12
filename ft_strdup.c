/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:00:39 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:48:40 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!temp)
		return (0);
	while (s[i])
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	printf("%s\n", temp);
	return (temp);
}

//#include <stdio.h>
//
//int main(void)
//{
//	const char *s = "hello world";
//	char *res = ft_strdup(s);
//	printf("%s\n", res);
//	free(res);
//	return 0;
//}
