/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mail <ykulkarn@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:13:25 by ykulkarn          #+#    #+#             */
/*   Updated: 2022/03/11 16:19:53 by ykulkarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_check(char c, va_list args, int val)
{
	if (c == 'c')
		val = ft_putchar(va_arg(args, int), val);
	else if (c == 's')
		val = ft_putstr(va_arg(args, char *), val);
	else if (c == 'i' || c == 'd')
		val = ft_putnbr(va_arg(args, int), val);
	else if (c == 'u')
		val = u_flag(va_arg(args, unsigned int), val);
	else if (c == 'x')
		val = x_flag(va_arg(args, unsigned int), c, val);
	else if (c == 'X')
		val = x_flag(va_arg(args, unsigned int), c, val);
	else if (c == 'p')
		val = p_flag(va_arg(args, unsigned long long), val);
	else if (c == '%')
		val = ft_putchar('%', val);
	return (val);
}

int	parse_args(char *s, va_list args, int val)
{
	int	i;

	i = 0;
	val = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			val = flag_check(s[i + 1], args, val);
			i++;
		}
		else
			val = ft_putchar(s[i], val);
		i++;
	}
	return (val);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		val;

	va_start(args, str);
	val = 0;
	if (!str)
		return (0);
	val += parse_args((char *)str, args, val);
	va_end(args);
	return (val);
}
