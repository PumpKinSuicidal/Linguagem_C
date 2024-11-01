#include <stdio.h>
    int main(){
        int a1[]={7,8,51,24,5,0,93};
        int a2[]={8,51,3,5,8,2,54,7};
        int a,b;

    for(a = 0; a <= 6; a++){
        for(b = 0; b <= 7; b++){
            if(a1[a] == a2[b]){
                printf("%d\n",a1[a]);
                break
            }
        }
    }
    return 0;
}