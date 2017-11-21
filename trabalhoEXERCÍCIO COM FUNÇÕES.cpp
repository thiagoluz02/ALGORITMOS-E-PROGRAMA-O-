#include<stdio.h>
#include<ctype.h>
#include<locale.h>
#include<string.h>
#define QTD 40
// prototipar
void cadastrarAluno(char pNome[QTD][100],int pMat[QTD],int *pIndice);
void exibirAlunos(char pNome[QTD][100],int pMat[QTD],int pIndice,float notas[40],float notas2[40],float contmedia);
void lancaNota(float notas[40],float notas2[40],int pMat[QTD],int pindice);
void media (char pNome[QTD][100],float notas[40],float notas2[40],int pMat[QTD],int pindice,float contmedia);
void procurarAluno(char pNome[QTD][100],int pMat[QTD],int pindice,float notas[40],float notas2[40],float contmedia);
void excluir(char pNome[QTD][100],int pMat[QTD],int pindice);
//program principal
main(){
	setlocale(LC_ALL,"");
	char nome[QTD][100]={};
	int menu,indice=0,mat[QTD]={},indicevet=0,contmedia;
	float notas[40],notas2[40];
	
	do{
		printf("\n ######- MENU-#######");
		printf("\n 1-Cadastrar Aluno:");
		printf("\n 2-Lançar Nota:");
		printf("\n 3-Médias:");
		printf("\n 4-Procurar Aluno:");													
		printf("\n 5-Exibir Aluno: ");
		printf("\n 6-Excluir Alunos");
		printf("\n 7 - Sair ==> ");
		scanf("%i",&menu);
		switch(menu){
			case 1: //Cadastrar Aluno
				cadastrarAluno(nome,mat,&indice);
			break;
			case 2: //Lançar Nota
				lancaNota(notas,notas2,mat,indice);
			break;
			case 3://Médias
			      media(nome,notas,notas2,mat,indice,contmedia);
			break;
			case 4://Procurar Aluno
				//procurarAluno(nome,mat,indice,notas,notas2,contmedia);
			break;
			case 5://Exibir Alunos
				exibirAlunos(nome,mat,indice,notas,notas2,contmedia);
			break;	
			case 6://Excluir aluno
				excluir(nome,mat,indice);
			break;
			case 7://Sair
			break;
			default: printf("\n\t ==>ERRO!");
		}
	}while(menu!=7);
}//fecha main

void cadastrarAluno(char pNome[QTD][100],int pMat[QTD],int *pIndice){
	if(*pIndice==QTD) printf("\n\t ==> Sem espaço!!\n");
	else{
	int auxmat=*pIndice;
		printf("\n Digite o nome do aluno: ");
		fflush(stdin);
		gets(pNome[*pIndice]);
		pMat[*pIndice]=++auxmat;
		(*pIndice)++;
		printf("\n\t ==> Aluno cadastrado com  sucesso!!\n");
	}
}

void exibirAlunos(char pNome[QTD][100],int pMat[QTD],int pIndice,float notas[40],float notas2[40],float contmedia){
	if(pIndice==0) printf("\n\t ==> VAZIO!!\n");
	else{
		for(int x=0;x<pIndice;x++){
			printf("\n Nome: %s",pNome[x]);
			printf("\n Matricula: %04i",pMat[x]);
			printf("\n nota: %.2f",notas[x]);
			printf("\n nota: %.2f",notas2[x]);
		    printf("\n media: %.i",contmedia);
			printf("\n ######################## \n");
		}
	}
}
void lancaNota(float notas[40],float notas2[40],int pMat[QTD],int pindice){
		int buscar,contmedia;
		printf("\ndigite matricula do aluno ");
		scanf("%i",&buscar);
		for(int i=0;i<pindice;i++){
	  	 if (pMat[i]==buscar){
	  	 	printf("\n Matricula do aluno foi encontrado: %i",pMat[i]);
	  	printf("\n Informe a primeira nota do  aluno ==>");
	  	scanf("%f",&notas[i] );
	  	printf("\n Informe a segunda nota do aluno==>");
	  	scanf("%f",&notas2[i]);
	 
		   }
	    
	  	//nota=&
		}
}
void media ( char pNome[QTD][100],float notas[40],float notas2[40],int pMat[QTD],int pindice,float contmedia){
	int buscar;
	//float contmedia;
		
	if(pindice==0) printf("\n\t ==> VAZIO!!\n");
	else{
		for(int x=0;x<pindice;x++){
			contmedia=(notas[x])+(notas2[x])/2;
			printf("\n Nome: %s",pNome[x]);
			printf("\n Matricula: %04i",pMat[x]);
			printf("\n media: %.i",contmedia);
			printf("\n ######################## \n");
		}
	}
}
void procurarAluno(char pNome[QTD][100],int pMat[QTD],int pindice,float notas[40],float notas2[40]){
	int buscar;
			printf("\n Digite a matricula do Aluno ==> ");
		scanf("%i",&buscar);
		for(int x=0;x<pindice;x++){
	  	 if (pMat[x]==buscar){
	 		printf("\n Nome: %s",pNome[x]);
			printf("\n Matricula: %04i",pMat[x]);
			printf("\n nota: %.2f",notas[x]);
			printf("\n nota: %.2f",notas2[x]);
			printf("\n ######################## \n");
	 
		   }
		}
}
void excluir(char pNome[QTD][100],int pMat[QTD],int pindice){
	int Rbuscar;
	printf("Insira matricula do aluno a ser excluido==>");
	scanf("%i",&Rbuscar);
 	//y=buscar
 	//if(y==-1)
 		//	printf("\n Codigo não encontrado \n\t");
 		//	else{}
 			for(int x=0;x<pindice;x++){
 				//if(pMat[x].pindice==Rbuscar)
 				for(int i=x;i<pindice-1;i++);
 			//	pMat[x].pindice=pMat[x].pindice;
 			//	pindice--;
			 }
			 
}
