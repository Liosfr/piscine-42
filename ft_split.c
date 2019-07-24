/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbury <lbury@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:01:12 by lbury             #+#    #+#             */
/*   Updated: 2019/07/24 12:50:01 by lbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		str_len(char *s)
{
	int a;

	a = 0;
	while (s[a])
		a++;
	return (a);
}

char	*ft_copy(char *s, int from, int to)
{
	int		a;
	char	*r;

	a = 0;
	r = malloc(sizeof(r) * (to - from + 1));
	while (a + from < to)
	{
		r[a] = s[a + from];
		a++;
	}
	r[a] = '\0';
	return (r);
}

int		de(char *s, int from, char *cut, int p)
{
	int a;
	int b;

	a = from;
	while (s[a])
	{
		b = 0;
		while (cut[b])
		{
			if (s[a] == cut[b])
			{
				if (p == 0)
					return (a);
				else
					a++;
			}
			b++;
		}
		if (p == 0)
			a++;
		else
			break ;
	}
	return (a);
}

int		count_word(char *str, char *charset)
{
	int a;
	int b;
	int size;

	a = 0;
	size = 0;
	b = de(str, a, charset, 0);
	while (b <= str_len(str))
	{
		if (b <= str_len(str))
			size++;
		a = de(str, b + 1, charset, 1);
		b = de(str, a, charset, 0);
		if (a > b)
			break ;
	}
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	int		a[3];
	char	**tab;

	a[0] = 0;
	a[1] = 0;
	a[2] = de(str, a[0], charset, 0);
	if (!(tab = malloc(sizeof(*tab) * (count_word(str, charset) + 1))))
		return ((void*)0);
	while (a[2] <= str_len(str))
	{
		if (a[2] - a[0] >= 0)
		{
			if (!(tab[a[1]] = malloc(sizeof(tab) *
			(str_len(ft_copy(str, a[0], a[2]))))))
				return ((void*)0);
			if (str_len(tab[a[1]] = ft_copy(str, a[0], a[2])) > 0)
				a[1]++;
		}
		a[0] = de(str, a[2] + 1, charset, 1);
		a[2] = de(str, a[0], charset, 0);
		if (a[0] > a[2])
			break ;
	}
	tab[a[1]] = 0;
	return (tab);
}
