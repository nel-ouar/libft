/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-ouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:56:44 by nel-ouar          #+#    #+#             */
/*   Updated: 2023/12/23 23:20:23 by nel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words(char const *s, char c)
{
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			cont++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (cont);
}

char	**words_all(char **dst, char const *s, char c)
{
	int	i;
	int	j;
	int	tmp;
	int	coumt;

	count = words(s, c);
	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] && s[i] == c)
			i++;
		tmp = i;
		while (s[i] && s[i] != c)
			i++;
		dst[j] = (ft_substr(s, tmp, i - tmp));
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (!s)
		return (NULL);
	len = words(s, c);
	dst = malloc(sizeof(char *) * (len + 1));
	if (!dst)
		return (NULL);
	return (words_all(dst, s, c));
}
