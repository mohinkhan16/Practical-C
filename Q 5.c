#include<stdio.h>
    int main(){

        int num=6;
        for(int i= 10;i>=num; i--){

            for( int j=num;j < i;j++){
                
            printf(" ");
        }
        for(int k=i;k <= 10;k++){
            printf("%d", k);
        }
        printf("\n");
    }
        return 0;
    }