/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:24:27 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/29 00:13:49 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include"./libft/libft.h"
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<limits.h>

typedef struct s_m_s
{
	int	*stack_a;
	int	*stack_b;
	int	top_a;
	int	top_b;
	int	count_a;
	int	count_b;
}t_m_s;

void	sa(t_m_s *s);
void	sb(t_m_s *s);
void	ss(t_m_s *s);
void	ra(t_m_s *s);
void	rb(t_m_s *s);
void	rr(t_m_s *s);
void	rra(t_m_s *s);
void	rrb(t_m_s *s);
void	rrr(t_m_s *s);
void	pa(t_m_s *s);
void	pb(t_m_s *s);
void	smallest_num_checker(t_m_s *s, int i);
void	sort_3(t_m_s *s);
void	sort_4(t_m_s *s);
void	sort_5(t_m_s *s);
void	sort_100(t_m_s *s);
void	sort_100_rev(t_m_s *s);
void	sort_500(t_m_s *s);
void	sort_500_rev(t_m_s *s);
void	index_stack(t_m_s *s);
void	move_target_to_top_b(t_m_s *s, int k);
void	map_indices(t_m_s *s, int *arr);
void	sort_array(int *arr, int size);
void	ft_error(void);
int		arguments_count(char **av);
int		*assign_arguments(char **av, int count);
int		smallest_number(t_m_s *s);
int		sorted_check(t_m_s *s, int count);
int		get_max(t_m_s *s);
int		all_digits(const char *str);
int		has_duplicates(t_m_s *s, int count);
void	ft_error(void);
void	free_str(char	**str);
void	final_sort(t_m_s *s);
void	vree(t_m_s *s);

#endif
