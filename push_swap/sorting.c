/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:49:27 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/28 23:51:00 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_m_s *s)
{
	int	*a;

	a = s->stack_a;
	if (a[2] > a[1] && a[0] > a[1] && a[0] > a[2])
		sa(s);
	else if (a[2] > a[1] && a[1] > a[0] && a[2] > a[0])
	{
		sa(s);
		rra(s);
	}
	else if (a[2] > a[1] && a[0] > a[1] && a[2] > a[0])
		ra(s);
	else if (a[2] < a[0] && a[0] < a[1] && a[2] < a[1])
	{
		sa(s);
		ra(s);
	}
	else if (a[2] > a[0] && a[0] < a[1] && a[2] < a[1])
		rra(s);
}

void	sort_4(t_m_s *s)
{
	smallest_num_checker(s, smallest_number(s));
	pb(s);
	sort_3(s);
	pa(s);
}

void	sort_5(t_m_s *s)
{
	while (s->stack_a[s->top_a] <= 2)
		ra(s);
	pb(s);
	while (s->stack_a[s->top_a] <= 2)
		ra(s);
	pb(s);
	if (s->stack_b[s->top_b] > s->stack_b[s->top_b - 1])
		sb(s);
	sort_3(s);
	pa(s);
	ra(s);
	pa(s);
	ra(s);
}

void	sort_100(t_m_s *s)
{
	int	min_range;
	int	max_range;

	min_range = 0;
	max_range = 15;
	index_stack(s);
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

void	sort_100_rev(t_m_s *s)
{
	int	max;

	while (s->count_b)
	{
		max = get_max(s);
		move_target_to_top_b(s, max);
		pa(s);
	}
}
