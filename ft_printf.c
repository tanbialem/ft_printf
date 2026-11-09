/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 11:44:25 by username         #+#    #+#              */
/*   Updated: 2026/11/09 20:20:48 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_choose(char str, va_list args)
{
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	if (str == 'x')
		return (ft_puthex_low(va_arg(args, unsigned int), str));
	if (str == 'X')
		return (ft_puthex_up(va_arg(args, unsigned int), str));
	if (str == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		nb_char;
	int		tmp;

	va_start(args, str);
	i = 0;
	nb_char = 0;
	while (str[i])
	{
		if (str[i] == '%')
			tmp = put_choose(str[i + 1], args);
		else
			tmp = ft_putchar(str[i]);
		if (tmp == -1)
			return (-1);
		nb_char += tmp;
	}
	return (nb_char);
}
