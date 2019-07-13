/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 21:42:52 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 21:58:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char ft_putchar (c)
{
if (c == '\0')
{
}
else
	write(1, &c, 1);
}

char wdmatch (char str, char to_find)
{
	int i = 0;
	int b = 0;

	while(str[i] != '\0')
	{
		while(to_find[b] != '\0')
		{
				if(to_find[b] == str[i]) {
					write(1, str[i];
					i++;
					}
					else{
b++;
					return(0);
					}
			
		}

	}

}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
	write(1, "\n", 1);
	return (0);
	}
	first_word(argv[1], argv[2]);
	return 0;


}
