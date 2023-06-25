/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:51:46 by mboudrio          #+#    #+#             */
/*   Updated: 2023/05/29 00:40:54 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arguments_count(char **av)
{
	int		i;
	int		j;
	int		r;
	char	**str;

	i = 1;
	r = 0;
	while (av[i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		while (str[j])
		{
			j++;
			r++;
		}
		free_str(str);
		i++;
	}
	return (r);
}

int	*assign_arguments(char **av, int count)
{
	int		i;
	int		j;
	int		k;
	int		*arg_ptr;
	char	**str;

	arg_ptr = malloc(count * sizeof(int));
	i = 1;
	j = 0;
	while (av[i])
	{
		str = ft_split(av[i], ' ');
		k = 0;
		while (str[k])
		{
			arg_ptr[j] = ft_atoi(str[k]);
			j++;
			k++;
		}
		free_str(str);
		i++;
	}
	return (arg_ptr);
}

void	fill_stack(t_m_s *s, int *n)
{
	int	i;
	int	j;

	i = 0;
	j = s->count_a - 1;
	s->top_a = -1;
	s->top_b = -1;
	s->stack_a = malloc(s->count_a * sizeof(int));
	s->stack_b = malloc(s->count_a * sizeof(int));
	while (i < s->count_a)
	{
		s->stack_a[i] = n[j];
		i++;
		j--;
		s->top_a++;
	}
	free(n);
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	t_m_s	*s;
	int		*arguments;

	(void)ac;
	s = malloc(sizeof(t_m_s));
	s->count_a = arguments_count(av);
	arguments = assign_arguments(av, s->count_a);
	fill_stack(s, arguments);
	if (!has_duplicates(s, s->count_a))
	{
		vree(s);
		ft_error();
	}
	if (!sorted_check(s, s->count_a))
	{
		vree(s);
		exit(0);
	}
	index_stack(s);
	final_sort(s);
	free(s->stack_a);
	free(s->stack_b);
	free(s);
}
