/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:32:41 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 18:39:58 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, int c)
{
	size_t	words;
	int		i;

	i = 0;
	words = 0;
	while (s[i] == c)
	{
		if (!s[i + 1])
			return (words);
		i++;
	}
	words = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i + 1] && s[i + 1] == c)
				i++;
			if (s[i + 1])
				words++;
		}
		i++;
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
	size_t	word;
	char	**str;

	i = 0;
	word = ft_count_words(s, c);
	str = (char **)malloc((word + 1) * sizeof(char *));
	if (!str)
		return (0);
	if (!s[i])
	{
		str[i] = 0;
		return (str);
	}
	ft_split_words(str, (char *)s, c);
	str[word] = 0;
	return (str);
}

/*#include <stdio.h>

int main(void)
{
	char 	*str = " aaaaaaaa   aa aaaaaaaa a b ";
	int		c = ' ';
	char **split = ft_split(str, c);
	int i = 0;
	while (split[i])
	{
		printf("Word %d = %s\n", i, split[i]);
		free (split[i]);
		i++;
	}
	free (split);
	return 0;
}*/
