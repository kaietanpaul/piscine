#include <stdio.h>

void ft_ft(int *********nbr) {

    int i = 42;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;
    int *********ptr9;
    
    ptr1 = &i;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;
    
    printf("%d\n", *********ptr9);
}

int main() {

    int num = 1;
    ft_ft(&num);

    return 0;
}
