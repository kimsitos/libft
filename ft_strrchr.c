/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <mstcozaci@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:40:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/09/30 16:46:20 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	while (*str)
		str++;
	str--;
	while (*str)
	{
		if (*str == c)
			return ((char *) str);
		str--;
	}
	return (0);
}
