/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbruprtf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarieux <jlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:18:08 by jlarieux          #+#    #+#             */
/*   Updated: 2023/11/16 13:52:31 by jlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptnbruprtf(unsigned int nbr, char *base)
{
	int	base_len;
	int	sign;
	int	sz;

	sz = 0;
	base_len = ft_strlenprintf(base);
	sign = 0;
	ft_rec_putnbrprtf(nbr, base, base_len, &sz);
	return (sz);
}
