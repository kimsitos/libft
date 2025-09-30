/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:59:49 by stcozaci          #+#    #+#             */
/*   Updated: 2025/09/30 13:27:51 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int c);

int	ft_atoi(const char *ntpr)
{
	int	nbr;
	int	neg;

	nbr = 0;
	neg = 0;
	while (*ntpr == ' ')
		ntpr++;
	if (*ntpr == '-')
	{
		neg = 1;
		ntpr++;
	}
	while (ft_isdigit(*ntpr))
	{
		nbr = nbr * 10 + (*ntpr - '0');
		ntpr++;
	}
	if (neg)
		nbr = -nbr;
	return (nbr);
}
