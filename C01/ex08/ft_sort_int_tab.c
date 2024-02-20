#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {
    int i = 0;
    int j;
    int swap;

    while (i < size - 1) {
        j = i + 1;
        while (j < size) {
            if (tab[i] > tab[j]) {
                swap = tab[j];
                tab[j] = tab[i];
                tab[i] = swap;
            }
            j++;
        }
        i++;
    }
}

int main() {
    int arr[] = {5, 3, 2, 1, 4};
    int size = 5;

    ft_sort_int_tab(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
