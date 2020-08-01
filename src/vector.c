/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 21:07:53 by home              #+#    #+#             */
/*   Updated: 2020/07/31 21:18:54 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "more_math.h"

void	fill_vector(t_vector2f *vector, double x, double y)
{
	vector->x = x;
	vector->y = y;
}

double	vector_length(t_vector2f vector)
{
	double	result;

	result = (vector.x * vector.x) + (vector.y * vector.y);
	result = sqrt(result);
	return (result);
}
