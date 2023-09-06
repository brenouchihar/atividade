#include <stdio.h>

int main() {
    float salario_atual, salario_reajustado;
    int tempo_de_servico;

    
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    printf("Digite o tempo de serviço do funcionário em anos: ");
    scanf("%d", &tempo_de_servico);

    
    if (salario_atual <= 1000) {
        salario_reajustado = salario_atual * 1.2; 
    } else if (salario_atual <= 2000) {
        salario_reajustado = salario_atual * 1.15; 
    } else {
        salario_reajustado = salario_atual * 1.1; 
    }

   
    if (tempo_de_servico >= 10) {
        salario_reajustado += 100; 
    } else if (tempo_de_servico >= 5) {
        salario_reajustado += 50; 
    }

    
    if (salario_reajustado > salario_atual) {
        printf("O salário reajustado é: %.2f\n", salario_reajustado);
    } else {
        printf("O funcionário não tem direito a aumento.\n");
    }

    return 0;
}


