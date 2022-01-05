/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarrie <tkarrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:39:18 by tkarrie           #+#    #+#             */
/*   Updated: 2022/01/04 23:40:11 by tkarrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	if (s == NULL)
	{
		counter += ft_putstr_fd("(null)", fd);
		return (counter);
	}
	counter = ft_strlen(s);
	write(fd, s, counter);
	return (counter);
}
