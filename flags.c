/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mail <ykulkarn@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:03:54 by ykulkarn          #+#    #+#             */
/*   Updated: 2022/03/25 10:53:39 by ykulkarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	x_flag(unsigned int x, char c, int val)
{
	if (x == 0)
		val = ft_putchar('0', val);
	else
	{
		if (c == 'x')
			val = ft_hexa_ul(x, 0, val);
		else
			val = ft_hexa_ul(x, 1, val);
	}
	return (val);
}

int	p_flag(unsigned long long p, int val)
{
	val = ft_putstr("0x", val);
	if (p == 0)
		val = ft_putchar('0', val);
	else
	{
		val = ft_hexa(p, val);
	}
	return (val);
}

int	u_flag(unsigned int u, int val)
{
	val = ft_putnbr(u, val);
	return (val);
}
