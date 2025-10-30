#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int cartaJogador, cartaComputador, atributoJogador, atributoComputador, jogador, computador;
    char atributoEscolhido[30];
    //int rPop, rArea, rPib, rNpt, rDenpop, rPibcap, rSuper;
// variáveis para Carta1
    char pais1[10];                          // Letra de 'A' a 'H'
    //char codcarta1[3];                     // Ex: A01, B03
   // char nome1[50];                        // Nome da cidade
    int pop1;                              // Número de habitantes
    float area1;                           // Área em km²
    float pib1;                            // PIB da cidade em bilhões de reais
    int npt1;                              // Número de pontos turísticos
    float denpop1;                         // Densidade populacional
    //float pibcap1;                         // PIB per capita
    //float Super1;                          // Super Poder soma de todos as variavéis
// variáveis para Carta2
    char pais2[30];                       // Letra de 'A' a 'H'
    //char codcarta2[3];                     // Ex: A01, B03
    //char nome2[50];                        // Nome da cidade
    int pop2;                              // Número de habitantes
    float area2;                           // Área em km²
    float pib2;                            // PIB da cidade em bilhões de reais
    int npt2;                              // Número de pontos turísticos
    float denpop2;                         // Densidade populacional
    //float pibcap2;                         // PIB per capita
    //float Super2;                          // Super Poder soma de todos as variavéis
    // Cadastro das Cartas:
// Área para entrada de dados da Carta1
  printf("Cadastre a Carta 1\n");
  printf(" \n");
  printf("Digite o Pais): \n");
  scanf("%s", &pais1);
  //printf("Digite o Código da Carta (ex.: 01): \n");
  //scanf("%s", &codcarta1);
  //printf("Digite o Nome da Cidade: \n");
  //scanf("%s", &nome1);
  printf("Digite a População: \n");
  scanf("%d", &pop1);
  printf("Digite a Área (em Km²): \n");
  scanf("%f", &area1);
  printf("Digite o PIB (em bilhões de reais): \n");
  scanf("%f", &pib1);
  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &npt1);
// Área para entrada de dados da Carta2
  printf(" \n");
  printf("Cadastre a Carta 2\n");
  printf(" \n");
  printf("Digite o Pais: \n");
  scanf("%s", &pais2);
  //printf("Digite o Código da Carta (ex.: 01): \n");
  //scanf("%s", &codcarta2);
  //printf("Digite o Nome da Cidade: \n");
  //scanf("%s", &nome2);
  printf("Digite a População: \n");
  scanf("%d", &pop2);
  printf("Digite a Área (em Km²): \n");
  scanf("%f", &area2);
  printf("Digite o PIB (em bilhões de reais): \n");
  scanf("%f", &pib2);
  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &npt2);
  // Área para exibição dos dados da Carta1
  printf(" \n");
  printf("Carta 1\n");
  printf(" \n");
  printf("Pais: %s\n", pais1);
  //printf("Estado: %c\n", estado1);
  //printf("Cidade: %s\n", nome1);
  printf("1. População: %d\n", pop1);
  printf("2. Área: %.2f km²\n", area1);
  printf("3. PIB: %.2f bilhões de reais\n", pib1);
  printf("4. Pontos Turísticos: %d\n", npt1);
// densidade pop. - população / área
  denpop1 = (float) pop1 / area1;
  printf("5. A densidade populacinal é: %.2f hab/km²\n", denpop1);
// PIB per capita - PIB / população
 // pibcap1 = (float) (pib1 * 1e9) / pop1;
//  printf("6. O PIB per capita é: %.2f reais\n", pibcap1);
// Super Poder (soma de pop, area, pib, pib per capita, pontos turisticos e a densidade pop invertida)
 // Super1 = pop1 + area1 + pib1 + pibcap1 + npt1 - denpop1;
  //printf("7. Super poder: %.2f\n", Super1);
// Área para exibição dos dados da Carta2
  printf(" \n");
  printf("Carta 2\n");
  printf(" \n");
  printf("Pais: %s\n", pais2);
  //printf("Estado: %s\n", estado2);
  //printf("Cidade: %s\n", nome2);
  printf("1. População: %d\n", pop2);
  printf("2. Área: %.2f km²\n", area2);
  printf("3. PIB: %.2f bilhões de reais\n", pib2);
  printf("4. Pontos Turísticos: %d\n", npt2);
// densidade pop. - população / área
  denpop2 = (float) pop2 / area2;
  printf("5. A densidade populacinal é: %.2f hab/km²\n", denpop2);
// PIB per capita - PIB / população
//  pibcap2 = (float) (pib2 * 1e9) / pop2;
//  printf("6. O PIB per capita é: %.2f reais\n", pibcap2);
// Super Poder (soma de pop, area, pib, pib per capita, pontos turisticos e a densidade pop invertida)
  //Super2 = pop2 + area2 + pib2 + pibcap2 + npt2 - denpop2;
  //printf("7. Super poder: %.2f\n", Super2);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    srand(time(0));
    printf("*** Jogo de SuperTrunfo ***\n");
    printf("Escolha sua carta: \n");
    scanf("%d", &cartaJogador);
    printf("Atributos:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha o atributo (de 1 a 7): \n");
    scanf("%d", &atributoJogador);
    cartaComputador = rand() % 2 + 1;
    switch (cartaJogador)
    {
    case 1:
        printf("Jogador: Carta 1 - ");
        break;
    case 2:
        printf("Jogador: Carta 2 - ");
        break;  
    default:
        printf("Opção inválida\n");
        break;
    }
    switch (cartaComputador)
    {
    case 1:
        printf("Computador: Carta 1 (%s) -", pais1);
        break;
    case 2:
        printf("Computador: Carta 2 (%s) -", pais2);
        break; 
    }
    if (cartaJogador == cartaComputador) {
        printf("### Jogo empatou!\n");
    } else if ((cartaJogador == 1) || (cartaComputador == 2)){
      switch (atributoJogador)
    {
    case 1:
        atributoEscolhido = "População";
        jogador = pop1;
        printf("Jogador: População: %d -", pop1);
        break;
    case 2:
    atributoEscolhido = "Área";
        jogador = area1;
        printf("Jogador: Área: %.2f km² -", area1);
        break;  
    case 3:
    atributoEscolhido = "PIB";
        jogador = pib1;
        printf("Jogador: PIB: %.2f bilhões de reais -", pib1);
        break;
    case 4:
    atributoEscolhido = "Pontos turísticos";
        jogador = npt1;
        printf("Jogador: Pontos Turísticos: %d -", npt1);
        break;  
    case 5:
    atributoEscolhido = "Densidades populacional";
        jogador = denpop1;
        printf("Jogador: Densidade populacinal: %.2f hab/km² -", denpop1);
        break;  
    default:
        printf("Opção inválida\n");
        break; 
    } 
    switch (atributoComputador)
    {
    case 1:
    computador = pop2;
        printf("Jogador: População: %d -", pop2);
        break;
    case 2:
    computador = area2;
        printf("Jogador: Área: %.2f km² -", area2);
        break;  
    case 3:
    computador = pib2;
        printf("Jogador: PIB: %.2f bilhões de reais -", pib2);
        break;
    case 4:
    computador = npt2;
        printf("Jogador: Pontos Turísticos: %d -", npt2);
        break;  
    case 5:
    computador = denpop2;
        printf("Jogador: Densidade populacinal: %.2f hab/km² -", denpop2);
        break;  
    }
    } else if (cartaJogador == 2 || cartaComputador == 1) {
      switch (atributoJogador)
    {
    case 1:
    atributoEscolhido = "População";
        jogador = pop2;
        printf("Jogador: População: %d -", pop2);
        break;
    case 2:
    atributoEscolhido = "Área";
        jogador = area2;
        printf("Jogador: Área: %.2f km² -", area2);
        break;  
    case 3:
    atributoEscolhido = "PIB";
        jogador = pib2;
        printf("Jogador: PIB: %.2f bilhões de reais -", pib2);
        break;
    case 4:
    atributoEscolhido = "Pontos turísticos";
        jogador = npt2;
        printf("Jogador: Pontos Turísticos: %d -", npt2);
        break;  
    case 5:
    atributoEscolhido = "Densidades populacional";
        jogador = denpop2;
        printf("Jogador: Densidade populacinal: %.2f hab/km² -", denpop2);
        break;  
    default:
        printf("Opção inválida\n");
        break;  
    }
    switch (atributoComputador)
    {
    case 1:
    computador = pop1;
        printf("Jogador: População: %d -", pop1);
        break;
    case 2:
    computador = area1;
        printf("Jogador: Área: %.2f km² -", area1);
        break;  
    case 3:
    computador = pib1;
        printf("Jogador: PIB: %.2f bilhões de reais -", pib1);
        break;
    case 4:
    computador = npt1;
        printf("Jogador: Pontos Turísticos: %d -", npt1);
        break;  
    case 5:
    computador = denpop1;
        printf("Jogador: Densidade populacinal: %.2f hab/km² -", denpop1);
        break;  
    }
    }
    if ( atributoJogador == 5) {
    if (jogador < computador){
      printf("### Parabéns! Você ganhou!")
    } else {
      printf("Que pena! O computador ganhou!")
    }
  } else if (jogador > computador){
      printf("### Parabéns! Você ganhou!")
    } else {
      printf("Que pena! O computador ganhou!")
    }
  
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
  //rPop = pop1 > pop2;
  //rArea = area1 > area2; // PQP!!!!!!!!!!
  //rPib = pib1 > pib2;
  //rNpt = npt1 > npt2;
  //rDenpop = denpop1 < denpop2;
  //rPibcap = pibcap1 > pibcap2;
  //rSuper = Super1 > Super2;
   /* if (atributo == 5 ) {
       if (denpop1 < denpop2) {
        printf("A carta vencedora é a Carta 1 !!\n");
        } else if (denpop1 > denpop2){
        printf("A carta vencedora é a Carta 2 !!\n");    
        } else {
        printf("Empate !!\n");  
        }
    }
    if (atributo == 1 ) {
       if (pop1 > pop2) {
        printf("A carta vencedora é a Carta 1 !!\n");
        } else if (pop1 < pop2){
        printf("A carta vencedora é a Carta 2 !!\n");    
        } else {
        printf("Empate !!\n"); 
        }
    }
    if (atributo == 2 ) {
       if (area1 > area2) {
        printf("A carta vencedora é a Carta 1 !!\n");
        } else if (area1 < area2){
        printf("A carta vencedora é a Carta 2 !!\n");    
        } else {
        printf("Empate !!\n"); 
        }
    }   
     if (atributo == 3 ) {
       if (pib1 > pib2) {
        printf("A carta vencedora é a Carta 1 !!\n");
        } else if (pib1 < pib2){
        printf("A carta vencedora é a Carta 2 !!\n");    
        } else {
        printf("Empate !!\n"); 
        }
    }   
    if (atributo == 4 ) {
       if (npt1 > npt2) {
        printf("A carta vencedora é a Carta 1 !!\n");
        } else if (npt1 < npt2){
        printf("A carta vencedora é a Carta 2 !!\n");    
        } else {
        printf("Empate !!\n"); 
        }
    } 
    if (atributo == 6 ) {
       if (pibcap1 > pibcap2) {
        printf("A carta vencedora é a Carta 1 !!\n");
        } else if (pibcap1 < pibcap2){
        printf("A carta vencedora é a Carta 2 !!\n");    
        } else {
        printf("Empate !!\n"); 
        }
    } 
    if (atributo == 7 ) {
       if (Super1 > Super2) {
        printf("A carta vencedora é a Carta 1 !!\n");
        } else if (Super1 < Super2){
        printf("A carta vencedora é a Carta 2 !!\n");    
        } else {
        printf("Empate !!\n"); 
        }
    }   
*/
    return 0;
}
