#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n) {

	int	i = 0;

	if (n >= i)
		write(1, "P", 1);
	else
		write(1, "N", 1);
	write(1, "\n", 1);
}

int	main(void) {

	int	a = 0;
	ft_is_negative(a);
	return(0);
}
