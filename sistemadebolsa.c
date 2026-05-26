//Trabalho M1
#include <stdio.h>
#include <string.h>
int main()
{
    char nome[50], nome_curso[50];
    double renda_bruta;
    float nota_PS, nota_ENEM, nota_EM; // PS: Processo Seletivo | EM: Ensino Médio
    int pessoas_familia, deficiencia, escola_publica, familiares_bolsistas;  

    // Cabeçalho
    printf("===================== \n UNIVERSIDADE VALE DO ITAJAI \n Sistema de Avaliacao de Bolsa Universitaria \n===================== \n");

    // Coleta de Dados
    printf("Ola! Insira seu nome: ");
        fgets(nome, 50, stdin);
    printf("Insira seu curso: ");
        fgets(nome_curso, 50, stdin);
            nome[strcspn(nome, "\n")] = '\0';
            nome_curso[strcspn(nome_curso, "\n")] = '\0'; // Procura o \n (enter) que é salvo na hora de escrever e troca por \0, para que nao tenha quebra de linha ao mostrar no printf
    printf("Qual e a renda familiar total em sua residencia? (Bruto): ");
        scanf("%lf", &renda_bruta);
    printf("Quantas pessoas moram na sua casa contando com voce?: ");
        scanf("%i", &pessoas_familia);

    //Verifica se so numero de pessoas não é 0
            if (pessoas_familia == 0) {
                printf("Numero de pessoas invalido!\n");
            return 1;
            }
    printf("=====================\n");
    printf("As respostas abaixos tem que ser respondidas com numeros de (0 a 10)!\n");
    printf("Qual sua nota no processo seletivo?: ");
        scanf("%f", &nota_PS);
    printf("Qual e a sua nota no ENEM?: ");
        scanf("%f", &nota_ENEM);
    printf("Qual sua media geral do ensino medio?: ");
        scanf("%f", &nota_EM);
    //Verificar se todas as notas inseridas foram entre (0 e 10)
            if (nota_PS < 0 || nota_PS > 10 || nota_ENEM < 0 || nota_ENEM > 10 || nota_EM < 0 || nota_EM > 10) {
                printf("As notas devem estar entre 0 e 10! Por favor recomece.");
            return 1;
            }
            
    printf("=====================\n");
    printf("As respostas abaixos devem ser: (0 - NAO | 1 - SIM)!\n");
    printf("Voce estudou em escola publica?: ");
        scanf("%i", &escola_publica);
    printf("Voce possui alguma deficiencia?: ");
        scanf("%i", &deficiencia);
    printf("Voce possui quantos familiares bolsistas na universidade?: ");
        scanf("%i", &familiares_bolsistas);
        // Verificar se os valores inceridos ficaram entre(0 e 1 || Familiares bolsistas não pode ser menor que 0)
            if (escola_publica < 0 || escola_publica > 1 || deficiencia < 0 || deficiencia > 1 || familiares_bolsistas < 0) {
                printf("Informações incorretas! Por favor recomece.");
            return 1;
            }
    
    // Calculos
    double renda_per_capita = renda_bruta / pessoas_familia;
    float media_final = (nota_PS * 0.4) + (nota_ENEM * 0.3) + (nota_EM * 0.3);
    
    // Variaveis para que se as condições baterem seja mais fácil determinar se ele se enquadra em uma bolsa
    int bolsa100 = 0;
    int bolsa50 = 0; 

    // Condições Bolsa 100%
    if (renda_per_capita <= 800 && media_final >= 8.0 && escola_publica == 1 && familiares_bolsistas == 0) {
        bolsa100 = 1;
    }
    // Condições bolsa de 50% contando com a condição adicional 
    if (renda_per_capita <= 1600 && familiares_bolsistas <= 1) { // Caso tenha benefício social
    if (escola_publica == 1 || deficiencia == 1)
    {
        if (media_final >= 6.0) {
            bolsa50 = 1;
        }
    } else if (media_final >= 7.5) // Caso não tenha benefício social
    {
        bolsa50 = 1;
    }
}
// Imprimir as informações finais juntamente com o resultado atingido na bolsa!
    printf("===================== \n UNIVERSIDADE VALE DO ITAJAI \n Sistema de Avaliacao de Bolsa Universitaria \n===================== \n");
    printf("Certo! Informacoes carregadas e prosseguimos com seu resultado abaixo:\n");
    printf("Seu nome: %s\n", nome);
    printf("Seu curso: %s\n", nome_curso);
    printf("Sua media final e: %.2f\n", media_final);
    printf("A renda per capta e de: %.2lf\n", renda_per_capita);
    printf("===================== RESULTADO =====================\n");

//Veredito da bolsa que foi concedida
if (bolsa100 == 1) {
    printf("Voce conseguiu uma bolsa de 100%%, Parabens %s!", nome);
} else if (bolsa50 == 1) {
    printf("Voce conseguiu uma bolsa de 50%%. Parabens %s!", nome);
} else {
    printf("Infelizmente voce nao foi aprovado em nenhuma bolsa\n");

    printf("\nMotivos:\n");
    if (renda_per_capita > 1600) { // Renda acima do permitido
        printf("Sua renda per capita acima de R$1600\n");
    }
    if (familiares_bolsistas > 1) { // Muitos familiares bolsistas
        printf("Mais de 1 familiar bolsista\n");
    } 
    if (renda_per_capita <= 1600 && familiares_bolsistas <= 1) { // Verificação da nota (somente se renda e bolsistas estiverem ok)

        if (escola_publica == 1 || deficiencia == 1) 
        {
            if (media_final < 6.0)   // Caso tenha beneficio social
            {
                printf("Nota final menor que 6.0\n");
            }
        }
        else { if (media_final < 7.5) { // Caso nao tenha beneficio social
                printf("Nota final menor que 7.5\n");
            }
        }
    }
}
    return 0;
}
