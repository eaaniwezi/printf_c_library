/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarrie <tkarrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:39:29 by tkarrie           #+#    #+#             */
/*   Updated: 2022/01/04 23:40:09 by tkarrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned int u, int fd)
{
	int	counter;

	counter = 0;
	if (u >= 10)
	{
		counter += ft_putnbr_fd(u / 10, fd);
		counter += ft_putnbr_fd(u % 10, fd);
	}
	else
		counter += ft_putchar_fd(u + 48, fd);
	return (counter);
}
