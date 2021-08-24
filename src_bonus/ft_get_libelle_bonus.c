/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_libelle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:51:58 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 21:52:32 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

const char	*ft_get_libelle(const char *format, t_format_code *ptr)
{
	(*ptr).ret += write(1, format, 1);
	format++;
	return (format);
}
