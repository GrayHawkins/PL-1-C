#include <stdio.h>
#define MAX 5

int pilha[MAX];
int topo = -1;
int opcao;
int valor;


//ADICIONAR
void push(){
    if(topo == MAX-1){
        printf("\nPilha cheia\n");
        
        return;
    }
    printf("\nInsira o valor: ");
    scanf("%d", &valor);
    topo++;
    pilha[topo] = valor;
    printf("Valor Inserido com sucesso.\n");
}


//REMOVER
void pop(void){
    int confirm;
    printf("\nDeseja mesmo remover um elemento da pilha?\n1-Sim \n2-Não\n-- ");
    scanf("%d", &confirm);
    if(confirm == 2){
        return;
    }
    if(confirm != 1){
        printf("\nOpção Inválida\n");
        return;
    }
    if(topo==-1){
        printf("\nPilha Vazia!\n");
        return;
    }
    printf("\nRemovido: %d\n", pilha[topo]);
    topo--;
}


//VER TOPO
void peek(void){
    if(topo == -1){
        printf("\nPilha Vazia!\n");
        return;
    }
    printf("\nTopo: %d\n",pilha[topo]);
}


//LIMPAR PILHA
void limpar(void){
    int confirm;
    printf("\nVocê deseja mesmo limpar a pilha?\n1-Sim \n2-Não\n-- ");
    scanf("%d", &confirm);
    if(confirm == 2){
        return;
    }
    if(confirm != 1){
        printf("\nOpção Inválida\n");
        return;
    }
    
    if(topo == -1){
        printf("\nPilha Vazia!\n");
        return;
    }
    for(int i = topo; i>=0;i--){
        pop();
    }
    printf("\nPilha limpa com sucesso.\n");
}


//EXIBIR PILHA
void exibir(void){
    if(topo == -1){
        printf("\nPilha Vazia!\n");
        return;
    }
    printf("\nPilha do topo pra base:\n");
    for(int i = topo; i>=0;i--){
        printf("%d\n",pilha[i]);
    }
}


int main()
{   
    
    
    while(opcao != 6){
        printf("\nEscolha uma opção de 1 a 5:\n1-Adicionar\n2-Remover\n3-Ver topo\n4-Exibir valores\n5-Limpar pilha\n6-Sair\n-- ");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                exibir();
                break;
            case 5:
                limpar();
                break;
            case 6:
                printf("Saindo...");
                break;
            default:
                printf("Opção Inválida\n");
                break;
        }
    }
}


