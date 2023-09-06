#include<stdio.h>
main(){
    int a = 100, b = 11, c = 1, d = 15;

    if(a > b && a > c && a > d){
        printf("A e o mairo");

        if(b < c && b < d){
            printf("\nB e o menor");
            }else if(c < b && c < d){
            printf("\nC e o menor");
            }else{
            printf("\nD e o menor");
            }



    }else if (b > a && b > c && b >d){
        printf("B e o maior");
        if(a < c && a < d ){
            printf("\nA e menor");
            }else if(c < b && c < d){
                printf("\nC e o menor");
                }else{
                    printf("\nD e o menor");
                }
        


    }else{
        printf("D e o maior");

        if(a < b && a < c){
            printf("\nA e o menor");
        }else if(b < a && b < c){
            printf("\nB e o menor");
        }else{
            printf("\n c e o menor");
        }

    }






}