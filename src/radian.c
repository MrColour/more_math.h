/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radian.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:36:08 by home              #+#    #+#             */
/*   Updated: 2020/07/31 21:06:20 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "more_math.h"

double		toRadians(int degree)
{
	double	radian;

	radian = (degree * M_PI) / 180;
	return (radian);
}

int			toDegree(double radian)
{
	int	result;

	result = (radian * 180) / M_PI;
	result %= 360;
	return (result);
}
