/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:17:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 00:17:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t ft_count(char const *s, char c)
{
    size_t i;
    size_t len;

    len = 0;
    i = 0;
    if(!s)
        return (0);
    while(s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            len++;
        while (s[i] != c && s[i])
            i++;
    }
    return (len);
}

char **ft_split(char const *s, char c)
{
    char **rst;
    char *str;
    size_t i;
    size_t len;

    i = 0;
    rst = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
    if (!rst || !s)
        return (NULL);
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i])
        {
            if (!ft_strchr(s,c))
                len = ft_strlen(s);
            else
                len = ft_strchr(s,c) - s;
            rst[i++] = ft_substr(s, 0, len);
            i = i + len;
        }
    }
    i = 0;
    rst[i] = NULL;
    return (rst);
}

int	main(void)
{
	int		index;
	char	**split;
	split = ft_split("teste de string 4     ", ' ');
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
	free(split);
}