/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel42.tr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:28:28 by mtemel            #+#    #+#             */
/*   Updated: 2022/02/05 17:55:17 by mtemel           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	char	*ns1;
	char	*ns2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ns1 = (char *)s1;
	ns2 = (char *)s2;
	if (!ns1 || !ns2)
		return (0);
	ns = (char *)malloc(sizeof(char) * (ft_strlen(ns1) + ft_strlen(ns2) + 1));
	if (!ns)
		return (0);
	while (*(ns1 + j))
		*(ns + i++) = *(ns1 + j++);
	j = 0;
	while (*(ns2 + j))
		*(ns + i++) = *(ns2 + j++);
	*(ns + i) = '\0';
	return (ns);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "ilkmetin";
	char s2[] = "-ikincimetin";
	printf("%s\n",ft_strjoin(s1, s2));
}
*/
