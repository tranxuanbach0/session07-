#include <stdio.h>

int main() {
    int n;
      printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
       printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
