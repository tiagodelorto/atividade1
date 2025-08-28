#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    printf("====================================\n");
    printf("         BEM-VINDO AO PROGRAMA      \n");
    printf("====================================\n");
    printf("1 - iniciar vendas\n");
    printf("2 - Sair 2\n");
    printf("====================================\n");
    printf("Escolha uma opcao: ");

    int inivendas, sair, produto;
    float Leite=2.50, Ovos=1.50, Feijao=3.00, Arroz=4.00, Alface=2.00, Refrigerante=5.00, Pao=1.00, Carne=10.00, Frango=8.00, Peixe=12.00, soma, total=0;
    scanf("%d", &inivendas);
    while (inivendas == 1) {
        system("cls");
        printf("====================================\n");
        printf("iniciando vendas...\n");
        printf("[1]Leite - R$ 2,50\n");
        printf("[2]Ovos - R$ 1,50\n");
        printf("[3]Feijao - R$ 3,00\n");
        printf("[4]Arroz - R$ 4,00\n");
        printf("[5]Alface - R$ 2,00\n");
        printf("[6]Refrigerante - R$ 5,00\n");
        printf("[7]Pao - R$ 1,00\n");
        printf("[8]Carne - R$ 10,00\n");
        printf("[9]Frango - R$ 8,00\n");
        printf("[10]Peixe - R$ 12,00\n");
        printf("====================================\n");
        printf("Escolha um produto: ");
        scanf("%d", &produto);
        if (produto == 1) {
            total += Leite;
        } else if (produto == 2) {
            total += Ovos;
        } else if (produto == 3) {
            total += Feijao;
        } else if (produto == 4) {
            total += Arroz;
        } else if (produto == 5) {
            total += Alface;
        } else if (produto == 6) {
            total += Refrigerante;
        } else if (produto == 7) {
            total += Pao;
        } else if (produto == 8) {
            total += Carne;
        } else if (produto == 9) {
            total += Frango;
        } else if (produto == 10) {
            total += Peixe;
        }
        system("cls");
        printf("====================================\n");
        printf("Total acumulado: R$ %.2f\n", total);
        printf("Deseja continuar comprando? (1 - Sim, 2 - Nao): \n");
        printf("====================================\n");
        scanf("%d", &inivendas);
    }
    if (inivendas == 2) {
        system("cls");
         printf("====================================\n");
        printf("o Valor da sua compra e de R$ %.2f\n", total);
        printf("como deseja efetuar o pagamento?\n");
        printf("[1]Dinheiro ou pix(15%% off)\n");
        printf("[2]A vista no credito(10%% off)\n");
        printf("[3]Parcelado no credito 2x(sem juros)\n");
        printf("[4]Parcelado no credito 3x ou mais(10%% de juros)\n");
        printf("====================================\n");
        printf("Escolha uma opcao: ");
        int pagamento, parcelas;
        scanf("%d", &pagamento);
        system("cls");
        switch (pagamento) {
            case 1:
                total *= 0.85;
                printf("=====================================================\n");
                printf("Pagamento efetuado com sucesso! Total: R$ %.2f\n", total);
                printf("=====================================================\n");
                break;
            case 2:
                total *= 0.90;
                printf("=====================================================\n");
                printf("Pagamento efetuado com sucesso! Total: R$ %.2f\n", total);
                printf("=====================================================\n");
                break;
            case 3:
                printf("=====================================================\n");
                printf("Digite o numero de parcelas (2x): \n");
                printf("=====================================================\n");
                scanf("%d", &parcelas);
                if (parcelas == 2) {
                    system("cls");
                    printf("=====================================================\n");
                    printf("Pagamento efetuado com sucesso! Total: R$ %.2f\n", total);
                    printf("=====================================================\n");
                } else {
                    system("cls");
                    printf("=====================================================\n");
                    printf("Numero de parcelas invalidas.\n");
                    printf("=====================================================\n");
                }
                break;
            case 4:
            do{
                system("cls");
                printf("=====================================================\n");
                printf("Digite o numero de parcelas (3x ou mais): \n");
                printf("=====================================================\n");
                scanf("%d", &parcelas);
            }while(parcelas < 3);
                    total *= 1.10;
                    system("cls");
                    printf("=====================================================\n");
                    printf("Pagamento efetuado com sucesso! Total: R$ %.2f\n", total);
                    printf("=====================================================\n");

                break;
            default:
                printf("=====================================================\n");
                printf("Opcao invalida.\n");
                printf("=====================================================\n");
                break;
        }
    }
    system("pause");
    return 0;
}