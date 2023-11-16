/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rec_putnbrprtf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarieux <jlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:04:03 by jlarieux          #+#    #+#             */
/*   Updated: 2023/11/16 12:05:36 by jlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_rec_putnbrprtf(long n, char *base, int base_len, int *sz)
{
	if (n >= base_len)
	{
		ft_rec_putnbrprtf((n / base_len), base, base_len, sz);
		*sz += ft_putcharprintf(base[n % base_len]);
	}
	else
	{
		*sz += ft_putcharprintf(base[n % base_len]);
	}
}
