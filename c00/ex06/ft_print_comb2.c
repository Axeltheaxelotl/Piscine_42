/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:09:31 by alanty            #+#    #+#             */
/*   Updated: 2024/01/13 12:11:11 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_digit(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_digit(a / 10);
			ft_print_digit(a % 10);
			write(1, " ", 1);
			ft_print_digit(b / 10);
			ft_print_digit(b % 10);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int main()
{
    ft_print_comb2();
    return 0;
}
*/
