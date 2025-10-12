/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:17:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 14:45:44 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (!(nmemb || size))
		return (malloc(0));
	if (nmemb * size > 2147483648)
		return (0);
	temp = malloc(nmemb * size);
	if (!temp)
		return (0);
	ft_bzero(temp, nmemb * size);
	return (temp);
}

//#include <stdio.h>
//#define LEN 7
//int	main(void)
//{
//	char *s = ft_calloc(LEN, sizeof(char));
//	printf("%s", s);
//	free(s);
//	return 0;
//}
