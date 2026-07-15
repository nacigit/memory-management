/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacigit <echos16_pepper@icloud.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:15:51 by nacigit           #+#    #+#             */
/*   Updated: 2026/07/15 19:40:20 by nacigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;
	int	index;

	count = 0;
	while (count < (size -1))
	{
		index = 0;
		while (index < size - count - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				swap = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = swap;
			}
			index++;
		}
		count++;
	}	
}

int	main(void)
{
	int	tab[] = {5,3,6,13,8,39,4,16,20,24,1};
	int	size;
	
	size = 11;
	ft_sort_int_tab(tab, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	return (0);
}
