/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:37:36 by lbury             #+#    #+#             */
/*   Updated: 2019/07/09 09:16:15 by lbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int i2;
	int temp[size];

	i = size - 1;
	i2 = 0;
	while (i2 < size)
	{
		temp[i2] = tab[i];
		i--;
		i2++;
	}
	i2 = 0;
	while (size > 0)
	{
		tab[i2] = temp[i2];
		size--;
		i2++;
	}
}
