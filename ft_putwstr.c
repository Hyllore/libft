/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 14:19:20 by droly             #+#    #+#             */
/*   Updated: 2016/03/03 16:59:21 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwstr(wchar_t *str)
{
	int i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (*str)
	{
		if (*str >= 0 && *str <= 127)
			i += 1;
		if (*str >= 128 && *str <= 2047)
			i += 2;
		if (*str >= 2048 && *str <= 65535)
			i += 3;
		if (*str >= 65536 && *str <= 1114111)
			i += 4;
		ft_putwchar(*str++);
	}
	return (i);
}