/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:22:21 by lbury             #+#    #+#             */
/*   Updated: 2019/07/06 18:40:27 by lbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char i)
{
	i = '0' + i;
	write(1, &i, 1);
}

void	comma(int first, int second, int third)
{
	if (!(first == 7 && second == 8 && third == 9))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = 0;
	second = 1;
	third = 2;
	while (first <= 7)
	{
		second = first + 1;
		while (second <= 8)
		{
			third = second + 1;
			while (third <= 9)
			{
				print(first);
				print(second);
				print(third);
				comma(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
