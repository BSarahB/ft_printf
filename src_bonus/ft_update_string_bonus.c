/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_string_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:08:25 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 17:09:09 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_update_string(char **str, char *new)
{
	char	*str_old;

	str_old = *str;
	*str = new;
	ft_free_struct_str(&str_old);
	return (*str);
}
