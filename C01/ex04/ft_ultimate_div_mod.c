#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {

        int value = *a;
        *a = *a / *b;
        *b = value % *b;
        
        printf("%d\n%d", value, *b);
}



int main()
{
    int a = 1123483;
    int b = 2;
    ft_ultimate_div_mod(&a, &b);
    return 0;
}

