/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_libelle_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:47:12 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:47:15 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

const char	*ft_get_libelle(const char *format, t_format_code *ptr)
{
	(*ptr).ret += write(1, format, 1);
	format++;
	return (format);
}
