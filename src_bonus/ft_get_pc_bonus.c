/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pc_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:47:56 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:47:59 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

const char	*ft_get_pc(const char *format, t_format_code *ptr)
{
	(*ptr).ret += write(1, "%", 1);
	format += 2;
	return (format);
}
