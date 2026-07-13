#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main()
{
	int	a, b, *p1, *p2;

	a = 841;
	b = 74;
	p1 = &a;
	p2 = &b;
	ft_ultimate_div_mod(p1, p2);
	printf("Result (11)= %d\n", a);
	printf("Rest (27)= %d\n", b);
	return (0);
}*/
