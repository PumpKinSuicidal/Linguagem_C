#include <stdio.h>

    int main(){
        int n, i = 1, v;
        printf("Escreva o número da tabuada que deseja e tecle ENTER\n");
        scanf("%d", &n);
        while(i <= 10) {
            v = n * i;
            printf("%d X %d = %d\n", n, i, v);
            i++;
        }
        return 0;
    }