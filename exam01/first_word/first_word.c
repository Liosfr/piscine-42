/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 20:48:34 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 21:38:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char ft_putchar (c)
{
	if(c == '	' || c == ' ' || c == '\0')
	{
	
	}
	else
	{
		write(1, &c, 1);
	}
	return(0);
}

char first_word(char *str)
{
	int i = 0;
	int count = 0;

	(void) count;
	while((char)str[i] != '\0')
	{
		
		while(str[i] == '	' || str[i] == ' ')
		{
			count = i;
			i++;	
		}

		while(str[i] != '\0')	
		{


			if(str[i] == '	' || str[i] == ' ')
			{

				write(1, "\n", 1);
				return(0);
			}
			else
				ft_putchar(str[i]);
			
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	return(0);
}


int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}

	first_word(argv[1]);
	return(0);

}
