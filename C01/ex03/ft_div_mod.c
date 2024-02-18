#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod) {

        *div = a / b;
        *mod = a % b;
        
        printf("%d\n%d", *div, *mod);
}



int main()
{
    int div;
    int mod;
    ft_div_mod(12, 2, &div, &mod);
    return 0;
}

