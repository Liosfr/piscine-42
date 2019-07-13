/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:31:03 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 20:43:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char ft_putchar (c)
{
	if(c == '\0')
	{

	}
	else {
	write(1, &c, 1);
	}	
	return(c);
}

char rev_print(char *str)
{
	int i = 0;
	int len = 0;

	while ((char)str[i] != '\0')
	{
		i++;
		len++;
	}

	
	while (len != -1)
	{
		ft_putchar(str[len - 1]);
		len--;
	}

	write(1, "\n", 1);
return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{

		write(1, "\n", 1);
		return(0);
	}

	rev_print(argv[1]);
return (0);	

}
