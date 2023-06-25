/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:32:14 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/29 00:33:37 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_number(t_m_s *s)
{
	int	small;
	int	i;

	i = 0;
	small = s->stack_a[i];
	while (i <= s->top_a)
	{
		if (s->stack_a[i] < small)
			small = s->stack_a[i];
		i++;
	}
	return (small);
}

void	smallest_num_checker(t_m_s *s, int i)
{
	while (s->stack_a[s->top_a] != i)
		ra(s);
}
