/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:52:07 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/27 16:32:44 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_m_s *s)
{
	int	temp;

	temp = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = temp;
	write (1, "sa\n", 3);
}

void	sb(t_m_s *s)
{
	int	temp;

	temp = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = temp;
	write(1, "sb\n", 3);
}

void	ss(t_m_s *s)
{
	sa(s);
	sb(s);
	write(1, "ss\n", 3);
}

void	pb(t_m_s *s)
{
	s->top_b++;
	s->stack_b[s->top_b] = s->stack_a[s->top_a];
	s->count_b++;
	s->count_a--;
	s->top_a--;
	write(1, "pb\n", 3);
}

void	pa(t_m_s *s)
{
	s->top_a++;
	s->stack_a[s->top_a] = s->stack_b[s->top_b];
	s->count_a++;
	s->count_b--;
	s->top_b--;
	write(1, "pa\n", 3);
}
