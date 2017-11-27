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
	char status;
	
}defunto;

typedef struct{
	defunto dados[QTD];
	int controle;
	int id;
		
}lista;

// prototipos de funções
void cadastrar(lista *pCadastro  );
void listar(lista *pCadastro);
void excluir(lista *pCadastro);
int busca(lista *pCadastro);
int pagamento(lista *pCadastro);
void caixa(lista *pCadastro);
// programa principal
main(){
	setlocale(LC_ALL,"protuguese");
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
		system("cls");
		switch(opcoes){
			case 1: 
				cadastrar(&cadastro);
			break;
			case 2:
				listar(&cadastro); 
			break;
			case 3:
				busca(&cadastro); 
			break;
			case 4: 
				excluir(&cadastro);
			break;
			case 5:
				pagamento(&cadastro); 
			break;
			case 6: 
			break;
			case 7:
				printf("\n VOCÊ SAIO DO SISTEMA!");
			break;
			default: printf("\n\t ==>opção inválida!!");
		}	
	
	}while(opcoes!=7);
	
}
void cadastrar(lista *pCadastro){
	if(pCadastro->controle==QTD) printf("\n Sem posições livres!\n");
	else{
		defunto aux;
		printf("Digite o nome: ");
		fflush(stdin);
		gets(aux.nome);
		printf("Informe a codigo: ");
		scanf("%i",&aux.codigo);//if(aux==codigo) printf("codigo ja exite");
		aux.status='n';
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
			printf("\n Nome do defunto: %s",pCadastro->dados[x].nome);
			printf("\n codigo do defunto: %i",pCadastro->dados[x].codigo);
			printf("\n status do defunto(Pago – P, Não PAGO - N): %c",pCadastro->dados[x].status);
			printf("\n ***********************************************");
			
		}
	}
}

void excluir(lista *pCadastro){
	if(pCadastro->controle==0) printf("\nSEM defunto\n");
	else{
		int retorno;
		retorno = busca(pCadastro);	
		if(retorno==-1) printf("\n defunto não encontrado!\n");
		else{
			for(int x=retorno;x<pCadastro->controle;x++){
				pCadastro->dados[x]=pCadastro->dados[x+1];
			} 
			pCadastro->controle--;	
			printf("\n defunto excluído com sucesso!!\n");
			
		}
		
	}

}

int busca(lista *pCadastro){
	
		int codigoBusca;
		int indice=-1;
		printf("\n Informe o codigo do defunto: ");
		fflush(stdin);
		scanf("%i",&codigoBusca);
		for(int x=0;x<pCadastro->controle;x++){
				indice=x;
				printf("\n Nome do defunto: %s",pCadastro->dados[x].nome);
				printf("\n codigo do defunto: %i",pCadastro->dados[x].codigo);	
				break;
				
			
		}
		return indice;
	
}
int pagamento(lista *pCadastro){
		//defunto aux;
		int codigoBusca;
		int indice=-1;
		printf("\n Informe o codigo do defunto: ");
		fflush(stdin);
		scanf("%i",&codigoBusca);
		for(int x=0;x<pCadastro->controle;x++){
				indice=x;
				printf("\n Nome do defunto: %s",pCadastro->dados[x].nome);
				printf("\n codigo do defunto: %i",pCadastro->dados[x].codigo);
				printf("\n status do defunto(Pago – P, Não PAGO - N): %c",pCadastro->dados[x].status);	
			//	break;
				}  
				printf("\nDeseja pagar?") ;
				//fflush(stdin);
				//scanf("%s"&aux.status);
			//	gets(auxn.status);
			//pCadastro->dados[pCadastro->controle]=aux;
				//pCadastro->controle++;       
}
	/*int id;
		defunto aux;
		printf("Informe a defunto: ");
		fflush(stdin);
		gets(aux.nome);
		printf("Matricula: ");
        scanf("%d",&(pCadastro->controle));
		while(pCadastro->controle[i] == pCadastro->controle[i-1])
        {
    printf("\n ERRO - MATRICULA JA CONSTA NO SISTEMA!\n\n");
    printf("Nova codigo: ");
    scanf("%d",&(pCadastro->pCadastro[i]));
        }*/
		
		

			

