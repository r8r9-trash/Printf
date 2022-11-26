/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:09:08 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/26 16:32:48 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int    ft_putchar(char c);
unsigned int    ft_putstr(char *str);
unsigned int	ft_hexalow(int nbr);
unsigned int	ft_hexaup(int nbr);
unsigned int	ft_putnbr(int nb);
unsigned int	ft_unsignb(unsigned int nb);
unsigned long	ft_adress(unsigned long n);


#endif