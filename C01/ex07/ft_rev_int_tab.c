#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {

    int i = 0;
    int j = size - 1;
    int swap;
    
    while(i < j) {
        swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    ft_rev_int_tab(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
