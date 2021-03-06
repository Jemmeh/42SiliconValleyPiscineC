/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:13:26 by akali             #+#    #+#             */
/*   Updated: 2018/08/12 00:26:47 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_2.h"

void	ft_print_row1_02(int col, int x, char *arr, int i)
{
	if (col == 1)
		arr[i] = ('A');
	else if (col > 1 && col < x)
		arr[i] = ('B');
	else
		arr[i] = ('A');
}

void	ft_print_row2_02(int col, int x, char *arr, int i)
{
	if (col == 1)
		arr[i] = ('B');
	else if (col > 1 && col < x)
		arr[i] = (' ');
	else
		arr[i] = ('B');
}

void	ft_print_row3_02(int col, int x, char *arr, int i)
{
	if (col == 1)
		arr[i] = ('C');
	else if (col > 1 && col < x)
		arr[i] = ('B');
	else
		arr[i] = ('C');
}

char	*rush_02(int x, int y)
{
	int		row;
	int		col;
	char	*arr;
	int		i;

	i = 0;
	col = 0;
	row = 0;
	arr = malloc(sizeof(char) * (x * y));
	while (++row <= y)
	{
		while (++col <= x)
		{
			if (row == 1)
				ft_print_row1_02(col, x, arr, i++);
			else if (row < y)
				ft_print_row2_02(col, x, arr, i++);
			else
				ft_print_row3_02(col, x, arr, i++);
		}
		arr[i] = ('\n');
		i++;
		col = 0;
	}
	return (arr);
}

char	*main_02(int col, int row)
{
	return (rush_02(col, row));
}
