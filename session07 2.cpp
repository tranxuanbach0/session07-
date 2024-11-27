#include <stdio.h>

int main() {
	  int a[5];
	 for (int i = 0; i < 5; i++) {
        printf("nhap phan tu : ");
        scanf("%d", &a[i]);
	}    printf("cac phan tu la:\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
	  return 0; 
}
