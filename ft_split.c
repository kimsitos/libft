/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:32:41 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/09 15:12:39 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, int c)
{
	size_t	words;
	int		i;

	words = 1;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			while (s[i++] && s[i + 1] == c)
				i++;
		}
		i++;
	}
	printf("%zu\n", words);
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
	size_t	words;
	char	**str;

	i = 0;
	words = ft_countwords(s, c);
	str = (char **)malloc((words + 1) * sizeof(char *));
	if (!str)
		return (0);
	ft_split_words(str, (char *)s, c);
	str[words] = 0;
	return (str);
}

int main(void)
{
	char 	*str = " h";
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
}

