/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 21:07:53 by home              #+#    #+#             */
/*   Updated: 2020/08/02 02:26:52 by home             ###   ########.fr       */
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

void	vector_add(t_vector2f *dest, t_vector2f a, t_vector2f b)
{
	dest->x = a.x + b.x;
	dest->y = a.y + b.y;
}

void	normal_vector(t_vector2f *dest, t_vector2f axis, t_vector2f vec)
{
	double	h;
	double	result;

	h = sqrt(axis.x * axis.x + axis.y * axis.y);

	double	a;
	double	b;

	a = axis.x / h;
	b = axis.y / h;

	result = vec.x * a + vec.y * b;

	dest->x = result * a;
	dest->y = result * b;
}
