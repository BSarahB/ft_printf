/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:55:43 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:55:46 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
}
