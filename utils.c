/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mail <ykulkarn@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:04:01 by ykulkarn          #+#    #+#             */
/*   Updated: 2022/03/15 13:01:25 by ykulkarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int val)
{
	write(1, &c, 1);
	val++;
	return (val);
}

int	ft_putstr(char *str, int val)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
			val++;
		}
	}
	else
		val = ft_putstr("(null)", val);
	return (val);
}

int	ft_putnbr(long nbr, int val)
{
	long	i;

	i = 1;
	if (nbr < 0 && nbr / 10 == 0)
		val = ft_putchar('-', val);
	if (nbr < 0)
		i = -1;
	if (nbr / 10 != 0)
		val = ft_putnbr(nbr / 10, val);
	val = ft_putchar(((nbr % 10) * i) + '0', val);
	return (val);
}

int	ft_hexa_ul(unsigned int nbr, int a, int val)
{
	unsigned int	r;

	r = 0;
	if (nbr != 0)
	{
		r = nbr % 16;
		val = ft_hexa_ul(nbr / 16, a, val);
		if (r < 10)
			val = ft_putchar(r + 48, val);
		else
		{
			if (a == 0)
				val = ft_putchar(r + 87, val);
			else
				val = ft_putchar(r + 55, val);
		}
	}
	return (val);
}

int	ft_hexa(unsigned long long nbr, int val)
{
	unsigned int	r;

	r = 0;
	if (nbr != 0)
	{
		r = nbr % 16;
		val = ft_hexa(nbr / 16, val);
		if (r < 10)
			val = ft_putchar(r + 48, val);
		else
			val = ft_putchar(r + 87, val);
	}
	return (val);
}
