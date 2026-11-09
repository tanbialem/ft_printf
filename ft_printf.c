/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:44:25 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/11/09 17:42:27 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	put_choose(char str, va_list args)
{
	if st
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
