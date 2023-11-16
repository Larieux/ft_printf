/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr_ptrprtf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarieux <jlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:20:21 by jlarieux          #+#    #+#             */
/*   Updated: 2023/11/16 13:38:08 by jlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_rec_ptptrprtf(unsigned long n, char *base, int base_len, int *sz)
{
	if (n >= (unsigned long)base_len)
	{
		ft_rec_ptptrprtf((n / base_len), base, base_len, sz);
		*sz += ft_putcharprintf(base[n % base_len]);
	}
	else
	{
		*sz += ft_putcharprintf(base[n % base_len]);
	}
}

int	ft_ptnbr_ptrprtf(void *nbr, char *base)
{
	int				base_len;
	int				sz;

	if (!nbr)
		return (ft_putstrprintf("(nil)"));
	sz = 0;
	base_len = ft_strlenprintf(base);
	write(1, "0x", 2);
	sz = 2;
	ft_rec_ptptrprtf((unsigned long)nbr, base, base_len, &sz);
	return (sz);
}
