#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}

}

void	print_array(int *tab, int size)
{
	int	i;
	
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	
	size =  5;
	printf("Before: ");
	print_array(tab, size);
	ft_rev_int_tab(tab, size);
	printf("After: ");
	print_array(tab, size);	
	return (0);
}
