/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   allput.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:37 by username         #+#    #+#              */
/*   Updated: 2026/11/09 20:20:49 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char str)
{
	if (!str)
		return (-1);
	write(1, str, 1);
	return (0);
}

void	ft_putstr(char *str)
{
}
