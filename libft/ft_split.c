/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:00:14 by mtemel            #+#    #+#             */
/*   Updated: 2022/02/19 18:00:19 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**spl(char **str, char const *s1, char ch, size_t cnt)
{
	size_t	i;
	size_t	len;
	size_t	word;

	word = 0;
	i = 0;
	len = 0;
	while (word < cnt)
	{
		while (s1[i] != '\0' && s1[i] == ch)
			i++;
		while (s1[i] != '\0' && s1[i] != ch)
		{
			len++;
			i++;
		}
		str[word] = ft_substr(s1, i - len, len);
		len = 0;
		word++;
	}
	str[word] = 0;
	return (str);
}

static size_t	cntpp(char const *str, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			cnt++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (cnt);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	cnt;

	if (!s)
		return (0);
	cnt = cntpp(s, c);
	str = (char **)malloc(sizeof(char *) * cnt + 1);
	if (!str)
		return (0);
	spl(str, s, c, cnt);
	return (str);
}
