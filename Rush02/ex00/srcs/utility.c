/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:21:42 by akali             #+#    #+#             */
/*   Updated: 2018/08/12 21:54:37 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_2.h"

int		list_size(t_list *list)
{
	t_list	*ptr;
	int		count;

	count = 0;
	if (!list)
		return (count);
	ptr = list;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

int		count_row(char *out)
{
	int row;
	int i;

	i = 0;
	row = 0;
	while (out[i])
	{
		if (out[i] == '\n')
			row++;
		i++;
	}
	return (row);
}

int		count_col(char *out)
{
	int col;

	col = 0;
	while (*out != '\n' && *out)
	{
		col++;
		out++;
	}
	return (col);
}
