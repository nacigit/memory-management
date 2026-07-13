/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacigit <echos16_pepper@icloud.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:49:10 by nacigit           #+#    #+#             */
/*   Updated: 2026/07/13 11:49:14 by nacigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int	a, b, div, mod, *p1, *p2;
	
	a = 841;
	b = 74;
	p1 = &div;
	p2 = &mod;
	ft_div_mod(a, b, p1, p2);
	printf("Result (11)= %d\n", div);
	printf("Rest (27)= %d\n", mod);
	return (0);
}*/
