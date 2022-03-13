#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


// função principal
int main( ){
    //definir o idioma para o portugues
    setlocale(LC_ALL, "Portuguese");


    // declaração de variáveis

    //global
    int opcao = 0;

    //variáveis para clientes
    int qtdClientes = 1;
    char nomeCliente[qtdClientes][50], codCliente[10], ruaCliente[50], bairroCliete[50], cidadeCliente[50];
    int cpfCliente, telCliente, codBusca;


    // verifica qual a opção escolhida e realiza a tarefa
    while (1) {

        //menu com as opções
        printf("\n\n");
        printf("************  MENU  ***********\n");
        printf("*  1-  Gerenciar Cliente      *\n");
        printf("*  2-  Gerenciar Pedidos      *\n");
        printf("*  3-  Gerenciar Produtos     *\n");
        printf("*  4-  Sair                   *\n");
        printf("*******************************\n");

        // recebe a opção desejada
        printf("Opcao: \n");
        scanf("%d", &opcao);

        //SERÁ IMPLEMENTADO A FUNÇÃO DE CADASTRAR MAIS CLINTES E ARMAZENÁ-LOS EM UMA MATRIZ
        if (opcao == 1) {
            //parte da gerencia de clientes
            printf("\n\n");
            printf("************  GERENCIAR CLIENTE  ***********\n");
            printf("*  1-  Cadastrar cliente                   *\n");
            printf("*  2-  Listar cliente cadastrados          *\n");
            printf("*  3-  Buscar clietes cadastrados          *\n");
            printf("*  4-  Atualizar clientes cadastrados      *\n");
            printf("*  5-  Excluir cliente cadastrado          *\n");
            printf("*  6-  Voltar ao menu principal            *\n");
            printf("********************************************\n");

            // recebe a opção desejada
            printf("Opcao: \n");
            scanf("%d", &opcao);

            if (opcao == 1) {
                printf("************  CADASTRAR CLIENTE  ***********\n");
                printf("********************************************\n");
                printf("Codigo do cliente: ");
                scanf("%s", codCliente);

                printf("Nome do cliente: ");
                for(int i  = 0; i < qtdClientes; i++){
                    scanf("%25[^\n]", nomeCliente[l]);
                }

                printf("CPF do cliente: ");
                scanf("%d", &cpfCliente);

                printf("Telefone do cliente: ");
                scanf("%d", &telCliente);

                //mostra as informações para ver se está correta
                printf("************  DADOS CADASTRADOS  ***********\n");
                printf("********************************************\n");

                printf("Código do cliente: %s \n", codCliente);

                for(int i = 0; i < qtdClientes; i++){
                    printf("Nome do cliente: %s \n", nomeCliente[i]);
                }

                printf("CPF do cliente: %d \n", cpfCliente);
                printf("Telefone do cliente: %d \n", telCliente);

                //printf("Deseja salvar? (s/n): \n");

            }


        }
        return 0;
    }
}