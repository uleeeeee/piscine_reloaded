#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main(void) {
	int *ptr1;
	int *ptr2;
	int a;
	int b;

	a = 25;
	b = 4;
	
	ft_div_mod(a, b, ptr1, ptr2);
	
}


void	ft_div_mod(int a, int b, int *div, int *mod) {
	int divi;
	int modu;

	divi = a / b;
	modu = a % b;
	div = &divi;
	mod = &modu;
}

