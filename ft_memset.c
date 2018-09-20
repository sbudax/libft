/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:34:49 by sbxaba            #+#    #+#             */
/*   Updated: 2018/05/28 16:37:54 by sbxaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*res;

	res = (char*)b;
	i = 0;
	while (i < len)
	{
		res[i] = c;
		i++;
	}
	return (b);
}
