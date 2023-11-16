/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarieux <jlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:11:47 by jlarieux          #+#    #+#             */
/*   Updated: 2023/11/16 13:52:48 by jlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *content, ...);
int		ft_putstrprintf(char *str);
int		ft_putcharprintf(char c);
int		ft_ptnbr_ptrprtf(void *nbr, char *base);
int		ft_ptnbr_baseprtf(int nbr, char *base);
int		ft_ptnbruprtf(unsigned int nbr, char *base);
int		ft_strlenprintf(const char *s);
void	ft_rec_putnbrprtf(long n, char *base, int base_len, int *sz);

#endif
