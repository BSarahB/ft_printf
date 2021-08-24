/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 06:31:05 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 08:13:42 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	main(void)
{
	int	ret_v;
	int	ret_m;
	int	n;

	n = 65;
    ret_v = printf("vrai libelle projet bientot %% :%-2.*d: :%0198d: :%+*.121d: :%20.5s: :%#x: :%20p: termine\n", 4, n, n, 12, n, "bonjour", n, &n);
 ret_m = ft_printf("raiv libelle projet bientot %% :%-2.*d: :%0198d: :%+*.121d: :%20.5s: :%#x: :%20p: termine\n", 4, n, n, 12, n, "bonjour", n, &n);
//ret_v = printf("v:%#x:\n", 0);
//ret_m = ft_printf("r:%#x:\n", 0);


    printf("ret_v = %d\n", ret_v);
	printf("ret_m = %d\n", ret_m);
	return (0);
}
