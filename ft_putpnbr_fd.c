/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarrie <tkarrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:39:08 by tkarrie           #+#    #+#             */
/*   Updated: 2022/01/04 23:40:13 by tkarrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpnbr_fd(unsigned long int n, int fd)
{
	int					counter;
	const char			*table;

	table = "0123456789abcdef";
	counter = 0;
	if (n > 15)
	{
		counter += ft_putpnbr_fd(n / 16, fd);
		counter += ft_putpnbr_fd(n % 16, fd);
	}
	else
		counter += ft_putchar_fd(table[n], fd);
	return (counter);
}
