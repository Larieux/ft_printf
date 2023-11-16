/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarieux <jlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:22:24 by jlarieux          #+#    #+#             */
/*   Updated: 2023/11/16 13:52:17 by jlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cntnt_scnd_chckprtf(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putcharprintf(va_arg (args, int)));
	else if (c == 's')
		return (ft_putstrprintf(va_arg (args, char *)));
	else if (c == 'p')
		return (ft_ptnbr_ptrprtf(va_arg (args, void *), "0123456789abcdef"));
	else if (c == 'd' || c == 'i')
		return (ft_ptnbr_baseprtf(va_arg (args, int), "0123456789"));
	else if (c == 'u')
		return (ft_ptnbruprtf(va_arg (args, unsigned int), "0123456789"));
	else if (c == 'x')
		return (ft_ptnbruprtf(va_arg (args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_ptnbruprtf(va_arg (args, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putcharprintf('%'));
	return (0);
}

int	ft_cntnt_fst_chckprtf(char *c, va_list args)
{
	int		i;

	i = 0;
	while (*c)
	{
		if (*c == '%')
		{
			c++;
			i += ft_cntnt_scnd_chckprtf(*c, args);
		}
		else
			i += ft_putcharprintf(*c);
		c++;
	}
	return (i);
}

int	ft_printf(const char *content, ...)
{
	va_list	args;
	int		sz;

	sz = 0;
	va_start (args, content);
	sz = ft_cntnt_fst_chckprtf((char *)content, args);
	va_end (args);
	return (sz);
}
