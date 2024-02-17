#include <stdio.h>

void ft_ft(int *nbr);

void	ft_ft(int *nbr) {

	int	i = 42;
	nbr = &i;

	printf("%d\n", *nbr);
}

int	main() {

	int	num = 12;
	ft_ft(&num);
	return 0;
}
