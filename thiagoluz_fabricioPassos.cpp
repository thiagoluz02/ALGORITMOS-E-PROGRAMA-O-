
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define ST 20
#define DP 10



main(){
	setlocale(LC_ALL,"portuguese");
	int Poltrona, empe ,cont;
	char opcoes,confirma;
	int micro[ST]={};
	do{
 
		printf("\n\t### MENU ###");
		printf("\n\tS- Poltrona");
		printf("\n\tP-em pe\n");
		fflush(stdin);
		scanf("%c",&opcoes);
		opcoes=(tolower(opcoes));
		switch(opcoes){
			case's':
				printf("\n digite o numero da poltrona  ==>");
				scanf("%i",&Poltrona);
				if(Poltrona<=0 || Poltrona>20 ){
					printf("\n poltrona inexistente\n");
				}else{
					if(micro[Poltrona-1]==0){
						micro[Poltrona-1]=Poltrona;		
					}else{
						printf("\n OCUPADA!");
					}
				}
				if(Poltrona==20){
					printf("Não existem mais poltronas disponíveis");
				}
				
	
		break;
		
		case'p':
		printf("\n ==>",empe);
		scanf("%i",&empe);
		if(empe==10){
					printf("\n\tNão existem mais espaço em pé disponíveis");
				}
	
		break;
		default:
			printf("\nOpção inválida, tente novamente!");
 		
		} // SWITCH - PRINCIPAL
		
		system("pause");
		system("cls"); //limpatela

	if(micro[ST]==21){
	printf("\n\t70% de sua capacidade atijida deseja partir [S ou N]");	
	scanf("%c",&confirma);
	if (toupper(confirma) !=  'N' && toupper(confirma) !=  'S') { 
		}

	}
}while(toupper(confirma) != 'N');

}
