/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:17:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/06 13:48:06 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (size && nmemb > 2147483647 / size)
		return (0);
	if (!(nmemb || size))
		return (0);
	temp = malloc(nmemb * size);
	if (!temp)
		return (0);
	ft_bzero(temp, sizeof(temp));
	return (temp);
}
