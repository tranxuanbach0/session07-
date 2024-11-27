#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5}; 
     int sochan = 0;
        printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
    	 if (a[i] % 2 == 0) {
    	 printf("a[%d] = %d\n", i, a[i]);  
    	   sochan = 1;
    }
    }
    if (!sochan) {
    	   printf("Mang khong chua so chan.\n");
    }

    return 0;
}
