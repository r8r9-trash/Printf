/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:06:30 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/26 16:32:46 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hexalow(int nbr)
{
	unsigned int	i;
	char	*base;
	
	i = 0;
	base = "0123456789abcdef";

	if (nbr < 0)
	{
		nbr = -nbr;
		i += ft_putchar('-');
	}
	if (nbr < 16)
		i += ft_putchar(base[nbr]);
	else
	{
		i += ft_hexalow(nbr / 16);
		i += ft_hexalow(nbr % 16);
	}
	return (i);
}

unsigned int	ft_hexaup(int nbr)
{
	unsigned int	i;
	char	*base;
	
	i = 0;
	base = "0123456789ABCDEF";

	if (nbr < 0)
	{
		nbr = -nbr;
		i += ft_putchar('-');
	}
	if (nbr < 16)
		i += ft_putchar(base[nbr]);
	else
	{
		i += ft_hexaup(nbr / 16);
		i += ft_hexaup(nbr % 16);
	}
	return (i);
}

unsigned long	ft_adress(unsigned long n)
{
	int		i;

	i = 0;
	if (n == 0)
	{
		i =+ ft_putstr("(nil)");
		return (i);
	}
	i += ft_putstr("0x");
	i += ft_hexalow(n);
	return (i);
}