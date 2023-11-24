//Trabalho realizado por Tomaz Rodrigo Pereira Mallorquin da Silva, Thauany da Silva Froes e Lucas Stefanes Mendes;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {

    char* nome;
    int dtabertura;    
    int RG;
    int CPF;
    int NConta;
    float salario;
    float saldo;
    float limite;
}cliente;

cliente clientes[1] ;

void adesao (int*);
void deposito (int*);
void lista_de_clientes (int*);
void remocao (int*);
void saque (int*);
void aumentar_limite(int*);
void consultar_cliente(int*);

int main (){

    int cont = 0, menu = 9;


    while(menu != 0){

    printf("\n _____________________________________________________________");
    printf("\n |    Bem vindo ao RoseBank, como posso lhe ajudar?          |");
    printf("\n |-----------------------------------------------------------|");
    printf("\n |0- Sair do menu                                            |");
    printf("\n |1- Abrir uma conta                                         |\n |2- Remover uma conta                                       |\n |3- Lista de clientes                                       |\n |4- Depositar                                               |\n |5- Saque                                                   |\n |6- Aumentar limite                                         |\n |7- Consultar clientes                                      |");                                 
    printf("\n |___________________________________________________________|\n");
    scanf("%d", &menu);
    
    
    switch  (menu)  {
    
    case 0:
    break;

    case 1:

    adesao(&cont);
    break;

    case 2:
    remocao(&cont);
    break;
    
    case 3:
    lista_de_clientes (&cont);
    break;

    case 4:
    deposito(&cont);
    break;

    case 5:
    saque(&cont);
    break;
    
    case 6:
    aumentar_limite(&cont);
    break;

    case 7:
    consultar_cliente(&cont);
    break;
    
   }

    return 0;
 }
}

void adesao (int *cont){

    printf("\ndigite o nome do cliente: ...");
    scanf("%s", clientes[*cont].nome);
    printf("\nDigite o CPF: ... \n");
    scanf("%d", &clientes[*cont].CPF);    
    printf("\nDigite a data de abertura da conta (utilize apenas numeros): ... \n");
    scanf("%d", &clientes[*cont].dtabertura);
    printf("\nDigite o RG: ...\n");
    scanf("%d", &clientes[*cont].RG);    
    printf("\nDigite o Numero da conta: ...\n");
    scanf("%d", &clientes[*cont].NConta);    
    printf("\nDigite o seu salario: ... \n");
    scanf("%f", &clientes[*cont].salario);    
    printf("\nDigite o seu saldo: ... \n");
    scanf("%f", &clientes[*cont].saldo);    
    printf("\nDigite o limite da conta: ... \n");
    scanf("%f", &clientes[*cont].limite);

    *cont = *cont +1;
}

void remocao (int *cont){


    int i, x;
    

    printf("\n Digite o numero da conta a ser removida: \n");
    scanf("%d", &x);

    for(i = 0; i <= *cont; i++)
    {
        if(clientes[i].NConta == x)
        {   
            clientes[i].nome = clientes[i+1].nome;
            clientes[i].dtabertura = clientes[i+1].dtabertura;
            clientes[i].CPF = clientes[i+1].CPF;
            clientes[i].RG = clientes[i+1].RG;
            clientes[i].NConta = clientes[i+1].NConta;
            clientes[i].salario = clientes[i+1].salario;
            clientes[i].saldo = clientes[i+1].saldo;
            clientes[i].limite = clientes[i+1].limite;
            
        }
    }

}

void deposito (int *cont)
{
    int i, x;
    float y;

    printf("\nQual o numero da conta que deseja depositar?\n");
    scanf("%d", &x);

    for(i = 0; i <= *cont; i++)
    {

     if(clientes[i].NConta == x)
        {        
            printf("\n Seu saldo e de: %f \n", clientes[i].saldo);

            printf("\n Quanto voce deseja depositar? \n");
            scanf("%f", &y);

            clientes[i].saldo = clientes[i].saldo + y;

            printf("\n Saldo novo atual e de: %f \n", clientes[i].saldo);

  }
 }
}

void saque (int *cont)
{
    int i, x;
    float y;

    printf("\n Qual o numero da conta que deseja sacar?\n");
    scanf("%d", &x);

    for (i = 0; i < *cont; i++)
    {
        if(clientes[i].NConta == x)
        {
            printf("\nSeu saldo e de: %f \n", clientes[i].saldo);
            printf("quanto voce deseja sacar?");
            scanf("%f", &y);

            clientes[i].saldo = clientes[i].saldo - y;
            printf("\n Saldo novo atual e de: %f \n", clientes[i].saldo);

        }
    }
}

void aumentar_limite(int *cont){

    int i, x;
    float y, z;

    printf("\n Digite numero da conta que deseja aumentar o limite: ... \n");
    scanf("%d", &x);

    for(i = 0; i < *cont; i++)
    {
        if(clientes[i].NConta == x)
        {
            printf("\n Seu limite atual e de: %f \n", clientes[i].limite);
            printf("\n Qual o valor do aumento de limite ?\n");
            scanf("%f", &y);

            z = clientes[i].salario * 5;

            if(y <= z)
            {
                clientes[i].limite = clientes[i].limite + z;
                printf("\n Esse e o seu novo limite: %f \n", clientes[i].limite);

            }
        }
    }
}

void lista_de_clientes(int *cont){

    int i, x;

    printf("\n Digite o numero de contas que deseja visualizar: ... \n");
    scanf("%d", &x);

    for(i = 0; i < *cont; i++)
    {    
        printf("\n Nome: %s ", clientes[i].nome);
        printf("\n Data de abertura: %d", clientes[i].dtabertura);
        printf("\n RG: %d", clientes[i].RG);
        printf("\n CPF: %d ",clientes[i].CPF);
        printf("\n Conta: %d ",clientes[i].NConta);
        printf("\n Salario: %f ",clientes[i].salario);
        printf("\n Saldo: %f ",clientes[i].saldo);
        printf("\n Conta: %f ",clientes[i].limite);
    }
}

void consultar_cliente(int *cont){

    int i, x;
    
    printf("\n Digite o CPF do cliente: ... \n");
    scanf("%d", &x);

    for (i = 0; i < *cont; i++)
    {
        if(clientes[i].NConta == x)
        {
            printf("\n--------------------------------------------");
            printf("\n| A conta buscada pelo cpf resultou em:    ");
            printf("\n| Nome: %s ", clientes[i].nome);
            printf("\n| Data de abertura: %d ", clientes[i].dtabertura);
            printf("\n| RG: %d ", clientes[i].RG);
            printf("\n| CPF: %d ",clientes[i].CPF);
            printf("\n| Conta: %d ",clientes[i].NConta);
            printf("\n| Salario: %f ",clientes[i].salario);
            printf("\n| Saldo: %f ",clientes[i].saldo);
            printf("\n| Conta: %f ",clientes[i].limite);
            printf("\n--------------------------------------------");
        }
    }
}
