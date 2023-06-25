/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:15:52 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/29 00:18:53 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str(char	**str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	vree(t_m_s *s)
{
	free(s->stack_a);
	free(s->stack_b);
	free(s);
}

void	map_indices(t_m_s *s, int *arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < s->count_a)
	{
		j = 0;
		while (j < s->count_a)
		{
			if (s->stack_a[i] == arr[j])
			{
				s->stack_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(arr);
}

void	index_stack(t_m_s *s)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * s->count_a);
	if (arr == NULL)
		return ;
	while (i < s->count_a)
	{
		arr[i] = s->stack_a[i];
		i++;
	}
	sort_array(arr, s->count_a);
	map_indices(s, arr);
}

void	final_sort(t_m_s *s)
{
	if (s->count_a == 2)
		sa(s);
	else if (s->count_a == 3)
		sort_3(s);
	else if (s->count_a == 4)
		sort_4(s);
	else if (s->count_a == 5)
		sort_5(s);
	else if (s->count_a >= 6 && s->count_a <= 100)
	{
		sort_100(s);
		sort_100_rev(s);
	}
	else
	{
		sort_500(s);
		sort_500_rev(s);
	}
}
