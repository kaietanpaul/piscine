#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c) {

	write(1, &c, 1);
	write(1, "\n", 1);
}

int	main() {

	char a = 'a';
	ft_putchar(a);
	return(0);
}
