/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:22:43 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/02/21 17:40:00 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_elem **a)
{
	t_elem	*temp;
	
	if(*a && (*a)->next)
	{
		temp = (*a)->next;
		(*a)->next = temp->next;
		temp->next = *a;
		*a = temp;
		ft_printf("sa\n");
	}	
}

void	sb(t_elem **b)
{
	t_elem	*temp;
	
	if(*b && (*b)->next)
	{
		temp = (*b)->next;
		(*b)->next = temp->next;
		temp->next = *b;
		*b = temp;
		ft_printf("sb\n");
	}	
}

void	sa_no_print(t_elem **a)
{
	t_elem	*temp;
	
	if(*a && (*a)->next)
	{
		temp = (*a)->next;
		(*a)->next = temp->next;
		temp->next = *a;
		*a = temp;
	}	
}

void	sb_no_print(t_elem **b)
{
	t_elem	*temp;
	
	if(*b && (*b)->next)
	{
		temp = (*b)->next;
		(*b)->next = temp->next;
		temp->next = *b;
		*b = temp;
	}	
}

void	ss(t_elem **a, t_elem **b)
{
	sa_no_print(a);
	sb_no_print(b);
	ft_printf("ss\n");
}


/* void print_stack(t_elem *stack)
{
	while(stack)
	{
		printf("%d", stack->num);
		stack = stack->next;
	}
	printf("\n");
}

t_elem *new_node(int num)
{
	t_elem	*node;
	
	node = malloc(sizeof(t_elem));
	if (node)
	{
		node->num = num;
		node->next = NULL;
	}
	return (node);
}

int main() 
{

    t_elem *a = new_node(1);
    a->next = new_node(2);
    a->next->next = new_node(3);

	 t_elem *b = new_node(4);
    b->next = new_node(5);
    b->next->next = new_node(6);

    printf("Pilha a antes do 'ss': ");
    print_stack(a);
	printf("Pilha b antes do 'ss': ");
	print_stack(b);

    ss(&a, &b);

    printf("Pilha a depois do 'ss': ");
    print_stack(a);
	printf("Pilha a depois do 'ss': ");
	print_stack(b);

    return 0;
} */