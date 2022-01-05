/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarrie <tkarrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:38:21 by tkarrie           #+#    #+#             */
/*   Updated: 2022/01/05 02:09:04 by tkarrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;

	va_start(ap, str);
	counter = 0;
	while (*str != 0)
	{
		if (*str == '%' && *(str + 1) != 0)
		{
			str++;
			counter += ft_arg(str, ap);
		}
		else
			counter += ft_putchar_fd(*str, 1);
		str++;
	}
	va_end(ap);
	return (counter);
}
