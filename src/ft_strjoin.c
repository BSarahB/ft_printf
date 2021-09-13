/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:35:02 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/13 22:43:51 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc((len_s1 + len_s2) * sizeof(*str) + 1);
	if (!(str))
		return (NULL);
	ft_memmove((void *)str, (void *)s1, len_s1);
	ft_memmove((void *)(str + len_s1), (void *)s2, len_s2 + 1);
	return (str);
}
