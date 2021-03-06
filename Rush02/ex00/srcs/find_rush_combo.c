/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush_combo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 19:12:24 by jcope             #+#    #+#             */
/*   Updated: 2018/08/12 21:59:01 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_2.h"

int		string_match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2 != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] || s2[i])
		return (0);
	return (1);
}

void	write_rush(int rushnum, int row, int col, int num_of_rushes)
{
	if (num_of_rushes > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 8);
	ft_putnbr(rushnum);
	write(1, "] [", 3);
	ft_putnbr(col);
	write(1, "] [", 3);
	ft_putnbr(row);
	write(1, "]", 1);
}

void	find_rush_combos(char *str)
{
	int rows;
	int cols;
	int i;

	i = 0;
	rows = count_row(str);
	cols = count_col(str);
	if (string_match(str, main_00(cols, rows)))
		write_rush(0, rows, cols, i++);
	if (string_match(str, main_01(cols, rows)))
		write_rush(1, rows, cols, i++);
	if (string_match(str, main_02(cols, rows)))
		write_rush(2, rows, cols, i++);
	if (string_match(str, main_03(cols, rows)))
		write_rush(3, rows, cols, i++);
	if (string_match(str, main_04(cols, rows)))
		write_rush(4, rows, cols, i++);
	if (i == 0)
	{
		write(1, "aucune", 6);
		return ;
	}
}
