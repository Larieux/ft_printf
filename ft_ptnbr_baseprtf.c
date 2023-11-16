/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr_baseprtf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarieux <jlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:54:33 by jlarieux          #+#    #+#             */
/*   Updated: 2023/11/16 13:49:43 by jlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptnbr_baseprtf(int nbr, char *base)
{
	int		base_len;
	long	n;
	int		sz;

	sz = 0;
	base_len = ft_strlenprintf(base);
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		ft_rec_putnbrprtf(-n, base, base_len, &sz);
		sz++;
	}
	else
		ft_rec_putnbrprtf(n, base, base_len, &sz);
	return (sz);
}
