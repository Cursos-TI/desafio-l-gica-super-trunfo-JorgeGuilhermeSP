#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    
    char estado[50], estado2 [50];
    char codigo [5], codigo2 [5];
    char cidade [50], cidade2 [50];
    int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int pontoturistico, pontoturistico2;
    double pibpercap, densipop, pibpercap2, densipop2, superpoder1, superpoder2;
    int rpop, rarea, rpib, rpt, rpibp, rdensipop, rsp;
    int escolhajogador, escolhacpu;
    double valorJogador, valorCPU;
    srand (time(0));

     printf ("digite o nome do Estado 1: \n");
     scanf ("%s", estado);
     
     printf ("digite o código da carta 1: \n");
     scanf ("%s", codigo);
    
     printf ("digite o nome da cidade 1: \n");
     scanf ("%s", cidade);
    
     printf ("digite o número da população 1: \n");
     scanf ("%d", &populacao);
    

     printf ("digite a área em km² da carta 1: \n");
     scanf ("%lf", &area);
     

     printf ("digite o PIB da carta 1: \n");
     scanf ("%lf", &pib);
     
     
     printf ("digite o número de pontos turísticos da carta 1: \n");
     scanf (" %d", &pontoturistico);
     
     printf ("digite o nome do Estado 2: \n");
     scanf ("%s", estado2);

     printf ("digite o código da carta 2: \n");
     scanf ("%s", codigo2);

     printf ("digite o nome da cidade 2: \n");
     scanf ("%s", cidade2);

     printf ("digite o número da população 2: \n");
     scanf ("%d", &populacao2);

     printf ("digite a área em km² da carta 2: \n");
     scanf ("%lf", &area2);

     printf ("digite o PIB da carta 2: \n");
     scanf ("%lf", &pib2);
     

     printf ("digite o número de pontos turísticos da carta 2: \n");
     scanf (" %d", &pontoturistico2);
    
     pibpercap = (pib * 1000000000) /  populacao;
     densipop =  populacao / area;
     pibpercap2 = (pib2 * 1000000000) /  populacao2;
     densipop2 = populacao2 / area2;
     superpoder1 = populacao + area + pib + pontoturistico + pibpercap + (1 / densipop);
     superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercap2 +(1 / densipop2);
     
     

     printf ("Carta 1: \n");
     printf ("Estado: %s\n", estado); 
     printf ("Código: %s \n", codigo);
     printf ("Cidade: %s \n", cidade);
     printf ("População: %d\n", populacao);
     printf ("Área: %.2f km²\n", area);
     printf ("PIB: %.2f bilhão\n", pib);
     printf ("Ponto turístico: %d\n", pontoturistico);
     printf ("Densidade populacional: %.2f\n", densipop);
     printf ("PIB per Capita: %.2f\n", pibpercap);
     printf ("superpoder: %.2f\n", superpoder1);
     printf (" \n");

     printf ("Carta 2: \n");
     printf ("Estado: %s \n", estado2); 
     printf ("Código: %s \n", codigo2);
     printf ("Cidade: %s \n", cidade2);
     printf ("População: %d \n", populacao2);
     printf ("Área: %.2f km²\n", area2);
     printf ("PIB: %.2f bilhão\n", pib2);
     printf ("Ponto turístico: %d\n", pontoturistico2);
     printf ("Densidade populacional: %.2f\n", densipop2);
     printf ("PIB per Capita: %.2f\n", pibpercap2);
     printf ("superpoder: %.2f\n", superpoder2);
     
     printf (" \n");

    
     do {
    printf("Escolha um atributo para comparar:\n");
    printf("0 - Ver Estado/Cidade/Código (não comparar)\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhajogador);

    if (escolhajogador == 0) {
        printf("\n== Carta do Jogador ==\n");
        printf("Estado: %s\n", estado);
        printf("Cidade: %s\n", cidade);
        printf("Código: %s\n", codigo);
        printf("\n(Essa opção não participa da comparação)\n\n");
    }

} while (escolhajogador < 1 || escolhajogador > 7);

escolhacpu = rand() % 7 + 1;

switch (escolhajogador) {
    case 1: valorJogador = populacao; break;
    case 2: valorJogador = area; break;
    case 3: valorJogador = pib; break;
    case 4: valorJogador = pontoturistico; break;
    case 5: valorJogador = densipop; break;
    case 6: valorJogador = pibpercap; break;
    case 7: valorJogador = superpoder1; break;
}

switch (escolhacpu) {
    case 1: valorCPU = populacao2; break;
    case 2: valorCPU = area2; break;
    case 3: valorCPU = pib2; break;
    case 4: valorCPU = pontoturistico2; break;
    case 5: valorCPU = densipop2; break;
    case 6: valorCPU = pibpercap2; break;
    case 7: valorCPU = superpoder2; break;
}

printf("\nVocê escolheu o atributo %d e a CPU escolheu o atributo %d\n", escolhajogador, escolhacpu);
printf("Valor do jogador: %.2f\n", valorJogador);
printf("Valor da CPU: %.2f\n", valorCPU);

if (escolhajogador == 5) {  
    if (valorJogador < valorCPU) {
        printf("Você venceu!\n");
    } else if (valorJogador > valorCPU) {
        printf("Você perdeu!\n");
    } else {
        printf("Empate!\n");
    }
} else {  
    if (valorJogador > valorCPU) {
        printf("Você venceu!\n");
    } else if (valorJogador < valorCPU) {
        printf("Você perdeu!\n");
    } else {
        printf("Empate!\n");
    }
}
     
    
     return 0;
        
    }

