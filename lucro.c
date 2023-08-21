#include <stdio.h>

int main() {
    float custo, frete, despesas, valorVenda, lucro;
    
    // Solicita o custo da mercadoria
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);
    
    // Solicita o valor do frete
    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    
    // Solicita as despesas eventuais
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas);
    
    // Calcula o custo total
    float custoTotal = custo + frete + despesas;
    
    // Solicita o valor de venda
    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);
    
    // Calcula o lucro e a percentagem de lucro
    lucro = valorVenda - custoTotal;
    float percentualLucro = (lucro / custoTotal) * 100;
    
    // Exibe os resultados
    printf("\nResumo:\n");
    printf("Custo total: %.2f\n", custoTotal);
    printf("Lucro: %.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n", percentualLucro);
    
    return 0;
}
