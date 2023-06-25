/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:54:05 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/28 00:26:32 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_500(t_m_s *s)
{
	int	min_range;
	int	max_range;

	min_range = 0;
	max_range = 35;
	while (s->top_a + 1)
	{
		if (s->stack_a[s->top_a] >= min_range
			&& s->stack_a[s->top_a] <= max_range)
		{
			pb(s);
			min_range++;
			max_range++;
		}
		else if (s->stack_a[s->top_a] < min_range)
		{
			pb(s);
			rb(s);
			min_range++;
			max_range++;
		}
		else if (s->stack_a[s->top_a] > max_range)
			ra(s);
	}
}

void	sort_500_rev(t_m_s *s)
{
	int	max;

	while (s->count_b)
	{
		max = get_max(s);
		move_target_to_top_b(s, max);
		pa(s);
	}
}
