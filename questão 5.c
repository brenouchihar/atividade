#include<stdio.h>
main(){
    int num;

    printf("Digite um numero");
    scanf("%d", &num);

    if(num == 5){
        printf("Numero e igual a 5");
        }else if(num == 200){
            printf("Numero e igual a 200");
            }else if( num == 400){
                printf("Numero e igual a 400");
            }else if (num > 500 && num < 1000){
                printf("Numero e igual a 400");
            }else{
                printf("Fora dos escopos anterios");
            }

        

}
