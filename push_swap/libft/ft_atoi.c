/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:01:00 by otelliq           #+#    #+#             */
/*   Updated: 2023/05/29 00:01:35 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	err(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	operate(char *str, t_var *s)
{
	if (str[s->i] == '-' || str[s->i] == '+')
	{
		if (str[s->i] == '-')
			s->sign *= -1;
		s->i++;
		if (!ft_isdigit(str[s->i]))
			err();
	}
}

long	ft_atoi(char *str)
{
	t_var	s;

	s.i = 0;
	s.sign = 1;
	s.res = 0;
	while (str[s.i] == ' ' || (str[s.i] >= 9 && str[s.i] <= 13))
		s.i++;
	operate(str, &s);
	while (str[s.i] >= '0' && str[s.i] <= '9')
	{
		s.res = (s.res * 10) + (str[s.i] - '0');
		if (s.res == 2147483648 && s.sign == -1)
			return (s.res * s.sign);
		if (s.res > 2147483647)
			err();
		s.i++;
	}
	if (str[s.i] != '\0' && !ft_isdigit(str[s.i]))
		err();
	return (s.res * s.sign);
}
