/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:37:02 by mtemel            #+#    #+#             */
/*   Updated: 2022/02/08 17:44:52 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include "libft.h"
static int  setkontrol(char c, char const *set)
{
    int i;
    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     len;
    int     a;
    char    *str;
    i = 0;
    a = 0;
    len = ft_strlen(s1);
    if (s1 == NULL || set == NULL)
        return (NULL);
    while (s1[i] != '\0' && setkontrol(s1[i], set))
        i++;
    while (len > i && setkontrol(s1[len - 1], set))
        len--;
    str = (char *)malloc(sizeof(char) * ((len - i) + 1));
    if (str == NULL)
        return (NULL);
    while (i < len)
        str[a++] = s1[i++];
    str[a] = '\0';
    return (str);
}
*/
/*#include<stdio.h>
int main()
{
    char yasintemp[] = "tssteseetttssasgdfnlfdghgesjghskjdfstetse";
    char trim[] = "set";
    printf("%s", ft_strtrim(yasintemp, trim));
}*/
