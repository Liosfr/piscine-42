/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:41:48 by lbury             #+#    #+#             */
/*   Updated: 2019/07/07 12:23:03 by lbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int first, int second)
{
	char a;
	char b;
	char c;
	char d;

	a = '0' + first / 10;
	b = '0' + first % 10;
	c = '0' + second / 10;
	d = '0' + second % 10;
	if (first < second)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(first == 98 && second == 99))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 00;
	second = 00;
	while (first <= 99)
	{
		while (second <= 99)
		{
			print_numbers(first, second);
			second++;
		}
		second = 00;
		first++;
	}
}
