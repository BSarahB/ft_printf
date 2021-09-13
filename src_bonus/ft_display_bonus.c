/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:13:58 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 18:35:12 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_display_minus(t_format_code *ptr, char *str)
{
	ft_putstr((*ptr).str_psp);
	ft_putstr((*ptr).str_sign);
	ft_putstr((*ptr).str_diez);
	ft_putstr((*ptr).str_0_p);
	ft_putstr((*ptr).str_0fil_g);
	if ((*ptr).conv == 'c')
		ft_putchar(str[0]);
	else
		ft_putstr(str);
	ft_putstr((*ptr).str_sp_g);
}

void	ft_display(t_format_code *ptr, char *str)
{
	if ((*ptr).conv == '%')
	{
		ft_putchar(str[0]);
		(*ptr).ret += 1;
	}
	else
	{
		if ((*ptr).minus == 1)
		{
			ft_display_minus(ptr, str);
		}
		else
		{
			ft_putstr((*ptr).str_sp_g);
			ft_putstr((*ptr).str_psp);
			ft_putstr((*ptr).str_sign);
			ft_putstr((*ptr).str_diez);
			ft_putstr((*ptr).str_0_p);
			ft_putstr((*ptr).str_0fil_g);
			if ((*ptr).conv == 'c')
				ft_putchar(str[0]);
			else
				ft_putstr(str);
		}
	}
}
