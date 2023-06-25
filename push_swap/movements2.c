/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:46:26 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/27 01:31:09 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_m_s *a)
{
	int	first;
	int	i;

	i = a->top_a;
	if (i <= 0)
		return ;
	first = a->stack_a[i];
	while (i > 0)
	{
		a->stack_a[i] = a->stack_a[i - 1];
		i--;
	}
	a->stack_a[0] = first;
	write(1, "ra\n", 3);
}

void	rb(t_m_s *s)
{
	int	i;
	int	temp;

	temp = s->stack_b[s->count_b - 1];
	i = s->count_b - 1;
	while (i > 0)
	{
		s->stack_b[i] = s->stack_b[i - 1];
		i--;
	}
	s->stack_b[0] = temp;
	write(1, "rb\n", 3);
}

void	rr(t_m_s *s)
{
	ra(s);
	rb(s);
	write(1, "rr\n", 3);
}

void	rra(t_m_s *s)
{
	int	i;
	int	temp;

	temp = s->stack_a[s->count_a - 1];
	i = s->count_a - 1;
	while (i > 0)
	{
		s->stack_a[i] = s->stack_a[i - 1];
		i--;
	}
	s->stack_a[0] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_m_s *s)
{
	int	i;
	int	temp;

	temp = s->stack_b[0];
	i = 0;
	while (i < s->count_b - 1)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[s->count_b - 1] = temp;
	write(1, "rrb\n", 4);
}
