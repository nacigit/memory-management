#include <stdio.h>

void	ft_ultimate_ft(int *********);

int	main(void)
{
	int	a;
	int	*pt1, **pt2, ***pt3, ****pt4, *****pt5, ******pt6, *******pt7, ********pt8, *********pt9;

	a = 21;
	pt1 = &a;
	pt2 = &pt1;
	pt3 = &pt2;
	pt4 = &pt3;
	pt5 = &pt4;
	pt6 = &pt5;
	pt7 = &pt6;
	pt8 = &pt7;
	pt9 = &pt8;
	printf("Before: %d\n", a);
	ft_ultimate_ft(pt9);
	printf("After: %d\n", a);
}
