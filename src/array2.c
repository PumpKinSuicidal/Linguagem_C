#include <stdio.h>
    int main(){
        int valores[]={10,8,51,24,0,93,21,8};
        int m = valores[0];
        int p;
        for(p = 1; p <= 7; p++) {
            if(valores[p] > m){
                m = valores[p];
            }
        }
    printf("%d\n",m);    
return 0;
}