#include<stdio.h>
void main(){
    int a[2][2]={{1,2},{3,4}};
    int trans[2][2];
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            trans[i][j]=a[j][i];
            printf("%d \t", trans[i][j]);
        }
        printf("\n");
    }
}
