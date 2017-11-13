#include<stdio.h>
#include<ctype.h>
#include<locale.h>
#include<string.h>
#define NL 5 //numero de linhas 
#define NC 5	//numero de colunas 

void cadastro(char plinha,char pcoluna,char pnome[NL][NC]);
void preenchernota(int vet[10],int *pIndice );
main(){
	setlocale(LC_ALL,"portuguese");
	int vet [10];
	int indice=0;
	
	//int linha=0,coluna=0,mat[NL][NC]={}, busca,cont=0;
	char menu,linha,coluna,nome[NL][NC];
	do{

	printf("\n---//----");
	printf("\n1-Cadastrar Aluno");
	printf("\n2-Lançar Nota:");
	printf("\n3-Médias");
	printf("\n4-Procurar Aluno: ");
	printf("\n5-Exibir todos");
	printf("\n6-Excluir aluno ");
	printf("\n S - Sair \n ==> ");
	scanf("%c",&menu);
	fflush(stdin);
	switch(menu){//abri switch
	
	
		case '1':
			cadastro; 
	
	
		break;
		case '2':
			preenchernota(vet,&indice);
		break;	
		}// fecha switch
		return menu;
		}while(menu!='S');
}
void cadastro(char plinha,char pcoluna,char pnome[NL][NC]){
		printf("cadastra aluno \n =>");
			for(plinha=0;plinha<NL;plinha++){
				for(pcoluna=0;pcoluna<NC;pcoluna++){
				printf("\n Posição %c - %c ==> ",plinha,pcoluna);
				scanf("%c",&pnome[plinha][pcoluna]);
				}
			} 
			}
void preenchernota(int vet[10],int indice ){
		printf("Digite a nota do aluno: \n==>");
}			
			
//[15:47, 12/11/2017] +55 51 8342-6092: 

