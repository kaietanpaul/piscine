#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void) {

	int	i = 97;

	while ( i <= 122 ) {
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void) {

	ft_print_alphabet();
	return(0);
}
