/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:11:32 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:50:31 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!temp)
		return (0);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		temp[i + j] = s2[j];
		j++;
	}
	return (temp);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	char const *str = "hello";
//	char const *c = " world";
//	printf("%s\n", ft_strjoin(str, c));
//	return 0;
//}
