/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:26:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/26 16:32:47 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr(int nb)
{
	unsigned int		i;

	i = 0;
	if (nb == -2147483648)
	{
		i += ft_putchar('-');
		i += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		i += ft_putchar('-');
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
	{
		i += ft_putchar(nb + '0');
	}
	return (i);
}

unsigned int	ft_unsignb(unsigned int nb)
{
    unsigned int    n;
	unsigned int	i;

	i = 0;
    n = nb;
    if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	if (n >= 0 && n < 10)
	{
		i += ft_putchar(n + '0');
	}
	return (i);
}