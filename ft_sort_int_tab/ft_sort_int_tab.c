/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacigit <echos16_pepper@icloud.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:15:51 by nacigit           #+#    #+#             */
/*   Updated: 2026/07/14 17:16:30 by nacigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab_order(int *t, int *t2, int *t3, int *i)
{
	i[3] = 214748647;
	i[0] = 0;
	while(i[0] < i[6])
	{
		i[1] = 0;
		i[2] = 0;
		while (i[1] < i[6])
		{
			if (t3[i[1]] == i[0])
			{
				i[2] = 1;
			}
			i[1]++;
		}
		if (i[2] == 0 && t[i[0]] <= i[3])
		{
			i[3] = t[i[0]];
			i[5] = i[0];
		}
		i[0]++;
	}
	t2[i[4]] = i[3];
	t3[i[4]] = i[5];
	i[4]++;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	tab2[size];
	int	tab3[size];
	int	i[7];

	i[6] = size;
	i[0] = 0;
	while (i[0] < size)
	{
		tab3[i[0]] = -1;
		i[0]++;
	}
	i[4] = 0;
	while (i[4] < size)
	{
		ft_sort_int_tab_order(tab, tab2, tab3, i);
	}
	i[0] = 0;
	while (i[0] < size)
	{
		tab[i[0]] = tab2[i[0]];
		i[0]++;
	}
}

int	main(void)
{
	int	tab[20];
	int	tab2[20];
	int	i;

	tab[0] = 15;
	tab[1] = 7;
	tab[2] = 4;
	tab[3] = 19;
	tab[4] = 20;
	tab[5] = 8;
	tab[6] = 843;
	tab[7] = 843;
	tab[8] = 0;
	tab[9] = 69;
	tab[10] = 41;
	tab[11] = 1856153;
	tab[12] = -481;
	tab[13] = 184;
	tab[14] = 1;
	tab[15] = 987;
	tab[16] = 11;
	tab[17] = 895;
	tab[18] = 147;
	tab[19] = 843;
	i = 0;
	while (i < 20)
	{
		tab2[i] = tab[i];
		i++;
	}
	ft_sort_int_tab(tab, 20);
	i = 0;
	while (i < 20)
	{
		printf("%d: %d\n", i, tab[i]);
		i++;
	}
}
