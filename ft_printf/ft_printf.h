/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars <mel-mars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:01 by mel-mars          #+#    #+#             */
/*   Updated: 2022/11/02 15:27:26 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int			ft_printf(const char *str, ...);
int			ft_putstr(char *str);
int			ft_putchar(char c);
int			ft_putnbr(int nb);
long		count_num(long nbr, int base);
int			ft_hexadecimal(unsigned int nb, char c);
int			ft_hex_adress(size_t nb, char c);
int			ft_ip(size_t ip);
int			ft_putuns(unsigned int nb);

#endif