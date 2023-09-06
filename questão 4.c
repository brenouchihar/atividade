#include<stdio.h>
main(){
    int A = 10, B = 20, C = 30;

    printf("Digite o valor de A");
    scanf("%d, &A");

    printf("Digite o valor de B");
    scanf("%d, &B");

    printf("Digite o valor de C");
    scanf("%d, &C");

    if( A > B &&  A > C ){
        if (B > C){
            printf("%d, %d, %d", A, B, C);
            }else{
                printf("%d, %d, %d", A, C, B);
            }
    }else if (B > A && B > C){
        if (A > C){
            printf("%d, %d, %d", B, A, C);
            }else{
                printf("%d, %d, %d", B, C, A);
            }
            }else{
                if (A > B){
                    printf("%d, %d, %d", C, A, B);
                }else{
                    printf("%d, %d, %d", C, B, A);
                }
            }
 }
