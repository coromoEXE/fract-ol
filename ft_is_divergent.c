/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_divergent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:59:30 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/30 18:09:26 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

int	ft_is_div(t_com_nb pos, t_com_nb (*f)(double, double, t_info), t_info info)
{
	int			n;
	int			i;
	t_com_nb	ite;

	n = 0;
	i = 80;
	ite = pos;
	while (n != i && ite.x <= info.born && ite.x >= -info.born
		&& ite.y <= info.born && ite.y >= -info.born)
	{
		ite = f(ite.x, ite.y, info);
		n++;
	}
	n = i - n;
	return (n);
}
