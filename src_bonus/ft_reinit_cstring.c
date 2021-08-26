/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reinit_cstring.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:42:39 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 20:43:27 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_reinit_cstring(char **p, size_t len, char init_value)
{
	ft_free_struct_str(p);
	return (ft_init_cstring(p, len, init_value));
}
