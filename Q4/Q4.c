#include <stdio.h>


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a,int b,int c, int d){
    int x[4];
    int greatest;
    x[0]=a;
    x[1]=b;
    x[2]=c;
    x[3]=d;
    greatest=x[0];
    for(int i=0;i<4;i++){
        if(greatest<x[i]){
            greatest=x[i];
        }
    }
    
    return greatest;
}

