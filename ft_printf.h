/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mail <ykulkarn@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:31:39 by ykulkarn          #+#    #+#             */
/*   Updated: 2022/03/11 16:18:58 by ykulkarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putstr(char *str, int val);
int		ft_putchar(char c, int val);
int		ft_putnbr(long nbr, int val);
int		ft_hexa(unsigned long long nbr, int val);
int		ft_hexa_ul(unsigned int nbr, int a, int val);
int		x_flag(unsigned int x, char c, int val);
int		p_flag(unsigned long long p, int val);
int		u_flag(unsigned int u, int val);
int		flag_check(char c, va_list args, int val);
int		parse_args(char *str, va_list args, int val);
int		ft_printf(const char *str, ...);
#endif
