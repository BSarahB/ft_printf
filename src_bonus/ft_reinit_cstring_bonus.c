/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reinit_cstring_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:56:17 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:56:20 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_reinit_cstring(char **p, size_t len, char init_value)
{
	ft_free_struct_str(p);
	return (ft_init_cstring(p, len, init_value));
}
