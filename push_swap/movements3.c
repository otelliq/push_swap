/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:58:00 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/27 15:54:51 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_m_s *s)
{
	rra(s);
	rrb(s);
	write(1, "rrr\n", 4);
}

int	get_index(t_m_s *s, int k)
{
	int	i;

	i = 0;
	while (i < s->count_b)
	{
		if (s->stack_b[i] == k)
			return (i);
		i++;
	}
	return (-1);
}

void	move_target_to_top_b(t_m_s *s, int k)
{
	int	mid;

	mid = s->count_b / 2;
	if (get_index(s, k) > mid)
	{
		while (s->stack_b[s->top_b] != k)
			rb(s);
	}
	else
	{
		while (s->stack_b[s->top_b] != k)
			rrb(s);
	}
}

int	get_max(t_m_s *s)
{
	int	i;
	int	max;

	i = 0;
	max = s->stack_b[s->top_b];
	while (i < s->count_b)
	{
		if (max < s->stack_b[i])
			max = s->stack_b[i];
		i++;
	}
	return (max);
}
