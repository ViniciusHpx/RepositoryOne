#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct No{
    int nFaixas,anoPubli;
    char titulo[50];
    char autor[50];
    struct No* prox;
    struct No* ant;
}Lista;
void menu(){
    printf("\n============================================");
    printf("\n1- Inserir novo disco.");
    printf("\n2- Buscar um disco pelo titulo.");
    printf("\n3- Remover um disco.");
    printf("\n============================================\n");
}
Lista* criar_lista(){
    Lista* head = malloc (sizeof(Lista));
    printf("\nAdicionar primeiro disco.\n");
    printf("\nDigte o titulo do disco.\n");
    scanf(" %[^\n]", head->titulo);
    printf("\nDigite o nome do autor.\n");
    scanf(" %[^\n]",head->autor);
    printf("\nDigite o ano que foi publicado.\n");
    scanf("%d",&head->anoPubli);
    printf("\nDigite quantas faixas tem.\n");
    scanf("%d",&head->nFaixas);
    head->prox=NULL;
    head->ant=NULL;
    return head;
}
Lista* criar_inserir (Lista* lis){
    Lista* novo=malloc(sizeof(Lista));
    Lista* aux;
    printf("\nAdicionar primeiro disco.\n");
    printf("\nDigte o titulo do disco.\n");
    scanf(" %[^\n]", novo->titulo);
    printf("\nDigite o nome do autor.\n");
    scanf(" %[^\n]",novo->autor);
    printf("\nDigite o ano que foi publicado.\n");
    scanf("%d",&novo->anoPubli);
    printf("\nDigite quantas faixas tem.\n");
    scanf("%d",&novo->nFaixas);
    novo->prox=NULL;
    novo->ant=NULL;
    for(aux=lis;aux->prox!=NULL;aux=aux->prox){
        ;
    }
    aux->prox=novo;
    novo->ant=aux;
    return lis;
}
Lista* remove_disco(Lista* lis){
    char nomed[50];
    Lista* aux;
    Lista


}
void busca_disco(Lista* lis_d){
    Lista* aux;
    char nomeD[50];
    int confirma,achou;
    printf("\nDigite o nome do disco para podermos busca-lo.\n");
    scanf(" %[^\n]", nomeD);
    for(aux=lis_d;aux->prox!=NULL;aux=aux->prox){
        confirma=strcmp(aux->titulo,nomeD);
        if(confirma==0){
            printf("\Disco encontrado:");
            printf("\n---------------------------------------------\n");
            printf("Nome do disco: %s",aux->titulo);
            printf("\nNome do autor: %s",aux->autor);
            printf("\nAno de publicacao: %d",aux->anoPubli);
            printf("\nQuantidade de faixas: %d",aux->nFaixas);
            printf("\n---------------------------------------------\n");
        }
    }
    if(confirma==1){
        printf("\nNao foi encontrado o disco.");
    }
}
int main (){
    int escolha;
    Lista* lista_d;
    lista_d=criar_lista();
    do{
        menu();
        scanf("%d",&escolha);
        if(escolha==1){
            lista_d=criar_inserir(lista_d);
        }
        else if(escolha==2){
            busca_disco(lista_d);
        }
        else if (escolha==3){

        }

    }while (escolha>0 && escolha<4);

    return 0;
}
