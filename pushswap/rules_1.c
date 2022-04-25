/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:05:31 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/04/22 13:05:37 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sa(a_stack *a)
{
	swap(&a->content, &a->next->content);
	write(1, "sa\n", 3);
}

void	sb(b_stack *b)
{
	swap((int *)&b->content, (int *)&b->next->content);
	write(1, "sb\n", 3);
}

void	ss(a_stack *a, b_stack *b)
{
	swap((int *)&a->content, (int *)&a->next->content);
	swap((int *)&b->content, (int *)&b->next->content);
	write(1, "ss\n", 3);
}

void	pa(a_stack **a, b_stack **b)
{
	push(a, (*b)->content);
	(*b) = (*b)->next;
	write(1, "pa\n", 3);
}
