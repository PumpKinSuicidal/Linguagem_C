#include <stdio.h>

    int main(){
        int num[] = {10,2,6,7,4,50}, n = 0;
    while(n <= 4) {
        printf("%d -> %p\n", num[n],&num[n]);
        n++;
    }
    return 0;
}