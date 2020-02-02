/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:20 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 20:59:43 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	if (!(s2 = (char *)malloc((len + 1) * sizeof(char))) || !s)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start] && i < len)
		{
			s2[i] = s[start];
			start++;
			i++;
		}
	}
	s2[i] = '\0';
	return (s2);
}

static int	wordcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		count++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static char	*wordnext(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static int	wordlen(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	myfree(char **output, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		free(output[i]);
		i++;
	}
	free(output);
}

char		**ft_split(char const *s, char c)
{
	char	**output;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = wordcount(s, c);
	if (!(output = (char **)malloc((words + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = wordnext(s, c);
		if (!(output[i] = ft_substr(s, 0, wordlen(s, c))))
		{
			myfree(output, i);
			return (NULL);
		}
		i++;
		s += wordlen(s, c);
	}
	output[words] = NULL;
	return (output);
}

int			main(void)
{
	int		i;
	char	**k;
	char	s[] = "   ghteg gdjl  djhe   jgeku  bugic  hihouhoe";

	i = 0;
	k = ft_split(s, ' ');
	while (i++ < 6)
	{
		printf("%d: %s\n", i, k[i]);
	}
	return (0);
}
