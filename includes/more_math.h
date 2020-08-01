/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_math.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:30:47 by home              #+#    #+#             */
/*   Updated: 2020/07/31 23:45:48 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOORE_MATH_H
# define MOORE_MATH_H

# include <math.h>
# include <stdarg.h>

# include "vector.h"

double	vector_length(t_vector2f vector);
void	fill_vector(t_vector2f *vector, double x, double y);

double	toRadians(int degree);
int		toDegree(double radian);

#endif
