/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacigit <echos16_pepper@icloud.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:52:40 by nacigit           #+#    #+#             */
/*   Updated: 2026/07/11 16:55:20 by nacigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *ptr);

int	main(void)
{
	int	a;
	int	*ptr;

	a = 21;
	ptr = &a;
	printf("Before: %d\n", a);
	ft_ft(ptr);
	printf("After: %d\n", a);
}
