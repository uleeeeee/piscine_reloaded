#include <stdio.h>

void	ft_swap(int *a, int *b);
int	main(void) {
	int *ptr1;
	int *ptr2;
	int a;
	int b;

	a = 2;
	b = 4;
	ptr1 = &a;
	ptr2 = &b;
	printf("%d", *ptr1);
	ft_swap(ptr1, ptr2);
	printf("%d", *ptr1);
}
