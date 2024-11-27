#include <stdio.h>

int main() {
    int a[5] = {12, 5, 9, 33, 7};
    int max = a[0];
    int max = a[0];
       for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
                }
        if (a[i] < min) {
            min = a[i]; 
             }
    }
     printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}
