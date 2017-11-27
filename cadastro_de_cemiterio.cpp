// bibliotecas
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
// constantes
#define QTD 1000
// Structs
typedef struct{
	char nome[100];
	int mat;
}aluno;

typedef struct{
	aluno dados[QTD];
	int controle;	
}lista;

// prototipos de funções
void cadastrar(lista *pCadastro);
void listar(lista *pCadastro);
void excluir(lista *pCadastro);
int busca(lista *pCadastro);
// programa principal
main(){
	int op;
	lista cadastro;
	cadastro.controle=0; 
	do{
		printf("\n 1 - Cadastrar Aluno");
		printf("\n 2 - Exibir Alunos");
		printf("\n 3 - Excluir Aluno");
		printf("\n 9 - Sair ==> ");
		scanf("%i",&op);
		switch(op){
			case 1: cadastrar(&cadastro);
			break;
			case 2: listar(&cadastro);
			break;
			case 3: excluir(&cadastro);
			break;
			case 9:
			break;
			default: printf("\n\t ==>ERRO!");
		}
	}while(op!=9);
}

void cadastrar(lista *pCadastro){
	if(pCadastro->controle==QTD) printf("\n Sem posições livres!\n");
	else{
		aluno aux;
		printf("Digite o nome: ");
		fflush(stdin);
		gets(aux.nome);
		printf("Informe a matricula: ");
		scanf("%i",&aux.mat);
		pCadastro->dados[pCadastro->controle]=aux;
		pCadastro->controle++;
		printf("\n Cadastro realizado com sucesso!!");		
	}
}

void listar(lista *pCadastro){
	if(pCadastro->controle==0) printf("\n\t Nenhum cadastro realizado!\n");
	else{
		printf("\n CADASTROS REALIZADOS:\n");
		for(int x=0;x<pCadastro->controle;x++){
			printf("\n Nome do aluno: %s",pCadastro->dados[x].nome);
			printf("\n Matricula do aluno: %i",pCadastro->dados[x].mat);
			printf("\n Nota do aluno: %.2f",pCadastro->dados[x].nota);
			printf("\n ***********************************************");
			
		}
	}
}

void excluir(lista *pCadastro){
	if(pCadastro->controle==0) printf("\nSEM ALUNOS\n");
	else{
		int retorno;
		retorno = busca(pCadastro);	
		if(retorno==-1) printf("\n Aluno não encontrado!\n");
		else{
			for(int x=retorno;x<pCadastro->controle;x++){
				pCadastro->dados[x]=pCadastro->dados[x+1];
			} 
			pCadastro->controle--;	
			printf("\n Aluno excluído com sucesso!!\n");
			
		}
		
	}

}



