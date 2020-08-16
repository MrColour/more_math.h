/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_math.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:30:47 by home              #+#    #+#             */
/*   Updated: 2020/08/16 04:22:45 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MORE_MATH_H
# define MORE_MATH_H

# include <math.h>
# include <stdarg.h>

# include "vector.h"
# include "circle.h"

double	vector_length(t_vector2f vector);
void	fill_vector(t_vector2f *vector, double x, double y);

void	normal_vector(t_vector2f *dest, t_vector2f axis, t_vector2f vec);
void	tangent_vector(t_vector2f *dest, t_vector2f axis, t_vector2f vec);

void	out_circle(t_circle circle, void (*f)(void *, int, int), void *meta_data);

double	toRadians(int degree);
int		toDegree(double radian);

#endif
