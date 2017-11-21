//* bibliotecas
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
// constantes
#define QTD 1000
// Structs
typedef struct{
	char nome[100];
	int codigo;
	
}defunto;

typedef struct{
	defunto dados[QTD];
	int controle;
	int id;
		
}lista;

// prototipos de funções
void cadastrar(lista *pCadastro  );
void listar(lista *pCadastro);
// programa principal
main(){
	int opcoes;
	lista cadastro;
	cadastro.controle=0;
	cadastro.id=1; 
	do{
		printf("\n 1 - Cadastrar defunto:");
		printf("\n 2 - Exibir defunto");
		printf("\n 3 - Pesquisar defunto");
		printf("\n 4 - Excluir defunto");
		printf("\n 5 - Registrar Pagamento");
		printf("\n 6 - Caixa:");
		printf("\n 7 - Sair ==> ");
		scanf("%i",&opcoes);
		switch(opcoes){
			case 1: 
				cadastrar(&cadastro);
			break;
			case 2: 
			break;
			case 3: 
			break;
			case 4: 
			break;
			case 5: 
			break;
			case 6: 
			break;
			case 7:
			break;
			default: printf("\n\t ==>opção inválida!!");
		}
	}while(opcoes!=7);
}
void cadastrar(lista *pCadastro){
	if(pCadastro->controle==QTD) printf("\n Sem lápide livres!\n");
	else{
		int indece;
		defunto aux;
		int auxcod=id;
		printf("Digite o nome do defunto: ");
		fflush(stdin);
		gets(nome);
		
	
		gets(pNome[*pIndice]);
		pMat[*pIndice]=++auxmat;
		(*pIndice)++;
			
	}
}
