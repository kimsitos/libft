/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:32:41 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/08 16:35:38 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	*ft_strlpos(const char *s1, int c)
{
	int		*pos;
	int		i;
	int		nbr;

	i = 0;
	nbr = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			nbr++;
		i++;
	}
	printf("len1 = %d\n", i);
	printf("found 1 = %d\n", nbr);

	pos = (int *)malloc(sizeof(int) * nbr);
	if (!pos)
		return (0);
	while (i > 0)
	{
		if (s1[i--] == c)
		{
			pos[nbr--] = i;
			printf("number asigned = %d\n", pos[nbr]);
		}
	}
	printf("len 2 = %d\n", i);
	printf("found 2 = %d\n", nbr);
	return (pos);
}




int main(void)
{
	char 	*str = "hollow";
	int		c = 'o';
	int		*pos =ft_strlpos(str, c);
	int x = 0;
	while(pos[x++])
	{
		printf("%d\n", pos[x]);
	}
	return 0;
}

/* char **ft_split(const char *s, int c)
{
	
	**str == 

}*/