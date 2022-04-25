/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:03:42 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/04/22 13:03:47 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index(t_stack *stack)
{
	int		i;
	int		data;
	t_stack	*temp;

	temp = stack;
	data = temp->content;
	i = 0;
	while (stack != NULL)
	{
		if (data <= stack->content && stack != NULL)
			stack = stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}

int	min(t_stack *stack)
{
	int		data;
	t_stack	*temp;

	temp = stack;
	data = temp->content;
	while (stack != NULL)
	{
		if (data <= stack->content && stack != NULL)
			stack = stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
		}
	}
	return (data);
}

int	big_index(t_stack *stack)
{
	int		i;
	int		data;
	t_stack	*temp;

	temp = stack;
	data = temp->content;
	i = 0;
	while (stack != NULL)
	{
		if (data >= stack->content && stack != NULL)
			stack = stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}

int	big(t_stack *stack)
{
	int		data;
	t_stack	*temp;

	temp = stack;
	data = temp->content;
	while (stack != NULL)
	{
		if (data >= stack->content && stack != NULL)
			stack = stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
		}
	}
	return (data);
}

int	where(t_stack *stack, int data)
{
	int	number;
	int	index;
	int	ret;

	number = big(stack);
	ret = 0;
	index = 0;
	while (stack)
	{
		if (stack != NULL && data < stack->content
			&& (number >= stack->content))
		{
			number = stack->content;
			stack = stack->next;
			ret = index;
		}
		else
			stack = stack->next;
		index++;
	}
	return (ret);
}
