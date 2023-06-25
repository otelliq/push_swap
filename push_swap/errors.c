/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:02:48 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/29 00:08:47 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted_check(t_m_s *s, int count)
{
	int	i;

	i = 0;
	while (i < count - 1)
	{
		if (s->stack_a[i] > s->stack_a[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}

int	has_duplicates(t_m_s *s, int count)
{
	int	i;
	int	j;

	i = 0;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (s->stack_a[i] == s->stack_a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit (0);
}
