#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void) {

	int i = 48;

	while (i <= 57) {
		write(1, &i, 1);
		i++;
	}
	
	write(1, "\n", 1);
}

int	main(void) {

	ft_print_numbers();
	return(0);
}
