#include <stdio.h>
    int main(){
        int par[] = {33,8,7,11,54,77,13,16};
        int a = 0;
            while(a <= 8){
                if(par[a] % 2 == 0){
                    printf("%d\n",par[a]);
                break;
            }
        a++;
    }
}