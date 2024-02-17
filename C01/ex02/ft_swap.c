#include <stdio.h>

void	ft_swap(int *a, int *b) {

	int	swap = *a;

	*a = *b;
	*b = swap;

	printf("%d\n%d", *a, *b);
}

int	main(void) {

	int	num1 = 1;
	int	num2 = 2;

	ft_swap(&num1, &num2);

	return(0);
}
