/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:53:06 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 21:53:37 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

const char	*ft_get_pc(const char *format, t_format_code *ptr)
{
	(*ptr).ret += write(1, "%", 1);
	format += 2;
	return (format);
}
