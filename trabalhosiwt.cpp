#include<stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int senha1=1234, senha2, quant=0;
	float vnike=219.90, vpuma=199.90, vadidas=549.90;
	char num;
	while(senha1!=senha2){
		printf("SENHA DE ACESSO: ");
	scanf("%d",&senha2);
	if(senha1!=senha2){
	printf("SENHA INCORRETA!!!\n");
	}
	}
		do {
		printf("\n\t\t Escolha um produto:"
			"\n\t\t 1 - Nike\t The Air Overplay"
			"\n\t\t 2 - Puma\t Futue Cat"
			"\n\t\t 3 - Adidas\t Pringlade");
	printf("\n\t\t\t ==> ");
	scanf("%s",&num);
	if(num!='1'&&num!='2'&&num!='3'){	
		printf("\t\t\tNúmero Inválido!!!");
	}
	}
	while(num!='1'&&num!='2'&&num!='3');
		printf("\n\t\t\tInforme a quantidade ==> ");
	scanf("%d",&quant);
		switch(num){
		case'1':
			printf("\n######## NOTA FISCAL ######");
			printf("\nQdt:%d",quant);
			printf("\nMARCA: NIKE");
			printf("\nProduto: The Air Overplay");
			printf("\nValor Unitário: R$ %.2f",vnike);
			printf("\nValor a pagar: R$ %.2f",vnike*quant);
			break;
			case'2':
			printf("\n######## NOTA FISCAL ######");
			printf("\nQdt:%d",quant);
			printf("\nMARCA: PUMA");
			printf("\nProduto: Futue Cat");
			printf("\nValor Unitário: R$ %.2f",vpuma);
			printf("\nValor a pagar: R$ %.2f",vpuma*quant);
			break;
			case'3':
			printf("\n######## NOTA FISCAL ######");
			printf("\nQdt:%d",quant);
			printf("\nMARCA: ADIDAS");
			printf("\nProduto: Pringlade");
			printf("\nValor Unitário: R$ %.2f",vadidas);
			printf("\nValor a pagar: R$ %.2f",vadidas*quant);
			break;
			default: printf("Produto inválido");
	}
	printf("\n\n");
	//system("pause");
}

