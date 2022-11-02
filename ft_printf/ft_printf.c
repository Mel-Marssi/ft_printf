/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars <mel-mars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:19:21 by mel-mars          #+#    #+#             */
/*   Updated: 2022/11/02 14:23:10 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_2(const char *str, va_list plst, int i, int ret)
{
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			if (str[i] == 's')
				ret += ft_putstr(va_arg(plst, char *));
			else if (str[i] == 'c')
				ret += ft_putchar(va_arg(plst, int));
			else if (str[i] == 'i' || str[i] == 'd')
				ret += ft_putnbr(va_arg(plst, int));
			else if (str[i] == 'u')
				ret += ft_putuns(va_arg(plst, unsigned int));
			else if (str[i] == 'x' || str[i] == 'X')
				ret += ft_hexadecimal(va_arg(plst, unsigned int), str[i]);
			else if (str[i] == 'p')
				ret += ft_ip(va_arg(plst, size_t));
			else if (str[i] == '%')
				ret += ft_putchar('%');
			i++;
		}
		else if (str[i] != '\0')
				ret += ft_putchar(str[i++]);
	}
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	va_list	plst;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(plst, str);
	ret = ft_printf_2(str, plst, i, ret);
	va_end(plst);
	return (ret);
}
