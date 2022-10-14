/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:57:14 by mtemel            #+#    #+#             */
/*   Updated: 2022/02/15 12:26:18 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (len == 0 || (start > ft_strlen(s)))
	{
		s1 = (char *)malloc(1);
		*s1 = 0;
		return (s1);
	}
	if (len - start > ft_strlen(s) || start == ft_strlen(s))
		s1 = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (0);
	if (start < ft_strlen(s))
	{
		while (*(s + start) && i < len)
			*(s1 + i++) = *(s + start++);
	}
	*(s1 + i) = '\0';
	return (s1);
}
/*
#include<stdio.h>
int main()
{
	printf("%s\n",ft_substr("tripouille", 1, 1));
}*/
