#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {

    int i = 0;
    
    while(src[i] && i < n) {

        dest[i] = src[i];
        i++;
    }

    while(i < n) {

        dest[i] = '\0';
        i++;
    }

    return dest;
}

int main() {

    char src[] = "Sample string";
    char dest[50];
    int n = 4;

    ft_strncpy(dest, src, n);

    printf("Copied string: %s\n", dest);

    return 0;
}
