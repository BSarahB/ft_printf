/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 05:08:25 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 05:14:15 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_update_string(char **str, char *new)
{
	char	*str_old;

	str_old = *str;
	*str = new;
	ft_free_struct_str(&str_old);
	return (*str);
}
