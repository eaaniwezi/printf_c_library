/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarrie <tkarrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:38:59 by tkarrie           #+#    #+#             */
/*   Updated: 2022/01/04 23:40:15 by tkarrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	int				counter;

	counter = 0;
	if (n < 0)
	{
		counter += ft_putchar_fd('-', fd);
		num = (unsigned)(-n);
	}
	else
		num = n;
	if (num >= 10)
	{
		counter += ft_putnbr_fd(num / 10, fd);
		counter += ft_putchar_fd((num % 10) + 48, fd);
	}
	else
		counter += ft_putchar_fd(num + 48, fd);
	return (counter);
}
