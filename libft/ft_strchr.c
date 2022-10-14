/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel42.tr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:12:13 by mtemel            #+#    #+#             */
/*   Updated: 2022/02/03 13:51:26 by mtemel           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "tripouille";
	printf("%s\n", strchr(s, 't' + 256));
	printf("%s\n", ft_strchr(s, 't' + 256));
	printf("%c\n", 't' + 256);
}*/
