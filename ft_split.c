/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:32:41 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/09 13:34:07 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, int c)
{
	size_t	words;

	words = 1;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			words++;
			while (*s == c && s++)
				s++;
		}
		s++;
	}
	
	return (words);
}

static char	**ft_split_words(char **str, char *s, int c)
{
	int	start;
	int	end;
	int	x;

	x = 0;
	start = 0;
	while (s[start])
	{
		end = 1;
		if (s[start] != c)
		{
			while (s[start + end] && (s[start + end] != c))
				end++;
			str[x++] = ft_substr(s, start, end);
			if (!s[x - 1])
			{
				while (x-- > 0)
					free (str[x]);
				free (str);
				return (0);
			}
		}
		start += end;
	}
	return (str);
}

char	**ft_split(const char *s, int c)
{
	int		i;
	char	**str;
	
	i = 0;
	str = (char **)malloc(ft_countwords(s, c) * sizeof(char *));
	if (!str)
		return (0);
	ft_split_words(str, (char *)s, c);
	return (str);
}

int main(void)
{
	char 	*str = "ooohasollooowoooo ioo";
	int		c = 'o';
	char **split = ft_split(str, c);
	int i = 0;
	while (split[i])
	{
		printf("Word %d = %s\n", i, split[i]);
		i++;
	}
	return 0;
}

