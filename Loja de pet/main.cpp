#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <cstring>
#include <time.h>
	

float crr;
char hr[100];
int h;
char d[100];


void b(){
	int opa;
	system("cls");
	printf("\n1 Cão Porte Grande R$32,00");
	printf("\n2 Cão Porte Médio  R$27,00");
	printf("\n3 Cão Porte Pequeno R$22,00");
	printf("\n4 Gato Porte Grande R$25,00");
	printf("\n5 Gato Porte Médio  R$18,00");
	printf("\n6 Voltar\n\n");
	printf("\nDigite a opção que deseja Acessar--> ");
	fflush(stdin);
	scanf("%d",&opa);
	
	if(opa != 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=5 && opa!=6){
		while(opa!= 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=6){
			system("cls");
			printf("---------------------------------------------------\n");
			printf("Comando INVALIDO!!!! \n");
			printf("---------------------------------------------------\n");
			printf("-----------------------------------------------------------------------------");
			printf("\n1 Cão Porte Grande R$32,00");
			printf("\n2 Cão Porte Médio  R$27,00");
			printf("\n3 Cão Porte Pequeno R$22,00");
			printf("\n4 Gato Porte Grande R$25,00");
			printf("\n5 Gato Porte Médio  R$18,00");
			printf("\n6 Voltar\n\n");
			printf("\nDigite a opção que deseja Acessar--> ");
			fflush(stdin);
			scanf("%d",&opa);			
		}
	}
			
	if(opa==1){	
		crr=crr+32;
	}
	if(opa==2){		
		crr=crr+27;
	}	
	if(opa==3){		
		crr=crr+22;
	}	
	if(opa==4){		
		crr=crr+25;
		}
	
	if(opa==5){		
		crr=crr+18;
	}

	if(opa>=1 && opa<=5){

	system("cls");
	opa=0;
	printf("---------------------------------------------------------------------------");
	printf("\nDias Disponiveis:                                    CARRINHO-->R$:%.2f",crr);			
	printf("\n1 Segunda-Feira");
	printf("\n2 Terça-Feira");
	printf("\n3 Quarta-Feira");
	printf("\n4 Quinta-Feira");
	printf("\n5 Sexta-feira");
	printf("\n6 Sabádo");
	printf("\n7 Voltar\n\n");
	printf("\nDigite a opção que deseja Acessar--> ");
	fflush(stdin);
	scanf("%d",&opa);
	if(opa != 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=5 && opa!=6 && opa!=7 && opa!=8){
		while(opa!= 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=6 && opa!=7 && opa!=8){
			system("cls");
			printf("---------------------------------------------------\n");
			printf("Comando INVALIDO!!!! \n");
			printf("---------------------------------------------------\n");
			printf("-----------------------------------------------------------------------------");
			printf("\nDias Disponiveis:                                    CARRINHO-->R$:%.2f",crr);
			printf("\nDias disponíveis");			
			printf("\n1 Segunda-Feira");
			printf("\n2 Terça-Feira");
			printf("\n3 Quarta-Feira");
			printf("\n4 Quinta-Feira");
			printf("\n5 Sexta-feira");
			printf("\n6 Sabádo");
			printf("\n7 Voltar\n\n");
			printf("\nDigite a opção que deseja Acessar--> ");
			fflush(stdin);
			scanf("%d",&opa);			
		}
	}
	
		
	if(opa==1){
		strcpy(d, "Segunda-Feira"); 
		opa=0;
		printf("---------------------------------------------------------------------------");
		printf("\nHorarios Disponíveis                                 CARRINHO-->R$:%.2f\n",crr);
		printf("\n1 9 hrs 00 min");
		printf("\n2 10 hrs 00 min");
		printf("\n3 11 hrs 00 min");
		printf("\n4 14 hrs 00 min");
		printf("\n5 15 hrs 00 min");	
		printf("\n6 16 hrs 00 min");		
		printf("\n7 17 hrs 00 min");	
		printf("\n8 Voltar\n");
		printf("\nDigite a opção que deseja Acessar--> ");
		fflush(stdin);
		scanf("%d",&opa);	
		if(opa != 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=5 && opa!=6 && opa!=7 && opa!=8){
			while(opa!= 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=6 && opa!=7 && opa!=8){
				system("cls");
				printf("---------------------------------------------------\n");
				printf("Comando INVALIDO!!!! \n");
				printf("---------------------------------------------------\n");
				printf("-----------------------------------------------------------------------------");
				printf("\nHorarios Disponíveis                                 CARRINHO-->R$:%.2f\n",crr);
				printf("\n1 9 hrs 00 min");
				printf("\n2 10 hrs 00 min");
				printf("\n3 11 hrs 00 min");
				printf("\n4 14 hrs 00 min");
				printf("\n5 15 hrs 00 min");	
				printf("\n6 16 hrs 00 min");		
				printf("\n7 17 hrs 00 min");	
				printf("\n8 Voltar\n");
				fflush(stdin);
				printf("\nDigite a opção que deseja Acessar--> ");
				scanf("%d",&opa);			
			}
		}	
		if(opa==1){
			strcpy(hr, "9 hrs 00 min");
			h=h+11;
			opa=0;
		}
		if(opa==2){
			strcpy(hr, "10 hrs 00 min");
			h=h+11;
			opa=0;
		}
		if(opa==3){
			strcpy(hr, "11 hrs 00 min");
			h=h+11;
			opa=0;
		}
		if(opa==4){
			strcpy(hr, "14 hrs 00 min");
			h=h+14;
			opa=0;
		}
		if(opa==5){
			strcpy(hr, "15 hrs 00 min");
			h=h+15;
			opa=0;
		}
		if(opa==6){
			strcpy(hr, "16 hrs 00 min");
			h=h+16;
			opa=0;
		}
		if(opa==7){
			strcpy(hr, "17 hrs 00 min");
			h=h+17;
			opa=0;
		}
		if(opa==8){
			b();
		}					
	}
			
	if(opa==2){	
		strcpy(d, "Terça-Feira"); 
		printf("---------------------------------------------------------------------------");
		printf("\nHorarios Disponíveis                                CARRINHO-->R$:%.2f\n",crr);
		printf("\n1 9 hrs 00 min");
		printf("\n2 10 hrs 00 min");
		printf("\n3 11 hrs 00 min");	
		printf("\n4 16 hrs 00 min");	
		printf("\n5 17 hrs 00 min");
		printf("\n6 Voltar\n");	
		printf("\nDigite a opção que deseja Acessar--> ");
		fflush(stdin);
		scanf("%d",&opa);
		
		if(opa != 1 &&  opa!=2 && opa!=3 && opa!=4  && opa!=5 && opa!=6){
			while(opa!= 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=6){
				system("cls");
				printf("---------------------------------------------------\n");
				printf("Comando INVALIDO!!!! \n");
				printf("---------------------------------------------------\n");
				printf("-----------------------------------------------------------------------------");
				printf("\nHorarios Disponíveis                                CARRINHO-->R$:%.2f\n",crr);
				printf("\n1 9 hrs 00 min");
				printf("\n2 10 hrs 00 min");
				printf("\n3 11 hrs 00 min");	
				printf("\n4 16 hrs 00 min");	
				printf("\n5 17 hrs 00 min");
				printf("\n6 Voltar\n");	
				printf("\nDigite a opção que deseja Acessar--> ");
				fflush(stdin);
				scanf("%d",&opa);			
			}
		}
		
		if(opa==1){
			strcpy(hr, "9 hrs 00 min");
			h=h+10;
			opa=0;
		}
		if(opa==2){
			strcpy(hr, "10 hrs 00 min");
			h=h+10;
			opa=0;
		}
		if(opa==3){
			strcpy(hr, "11 hrs 00 min");
			h=h+11;
			opa=0;
		}
		if(opa==4){
			strcpy(hr, "16 hrs 00 min");
			h=h+16;
			opa=0;
		}
		if(opa==5){
			strcpy(hr, "17 hrs 00 min");
			h=h+17;
			opa=0;
		}
		if(opa==6){
			b();
		}						
	}		
	if(opa==3){	
		strcpy(d, "Quarta-Feira"); 
		printf("---------------------------------------------------------------------------");
		printf("\nHorarios Disponíveis                                 CARRINHO-->R$:%.2f\n",crr);			
		printf("\n1 14 hrs 00 min");
		printf("\n2 15 hrs 00 min");
		printf("\n3 16 hrs 00 min");	
		printf("\n4 17 hrs 00 min");	
		printf("\n5 Voltar\n");
		printf("\nDigite a opção que deseja Acessar--> ");
		fflush(stdin);
		scanf("%d",&opa);
		if(opa != 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5){
			while(opa!= 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5){
				system("cls");
				printf("---------------------------------------------------\n");
				printf("Comando INVALIDO!!!! \n");
				printf("---------------------------------------------------\n");
				printf("-----------------------------------------------------------------------------");
				printf("\nHorarios Disponíveis                                 CARRINHO-->R$:%.2f\n",crr);
				printf("\n1 14 hrs 00 min");
				printf("\n2 15 hrs 00 min");				
				printf("\n3 16 hrs 00 min");	
				printf("\n4 17 hrs 00 min");	
				printf("\n5 Voltar\n");	
				printf("\nDigite a opção que deseja Acessar--> ");
				fflush(stdin);	
				scanf("%d",&opa);		
			}
		}
		if(opa==1){
			strcpy(hr, "14 hrs 00 min");
			h=h+9;
			opa=0;
		}
		if(opa==2){
			strcpy(hr, "15 hrs 00 min");
			h=h+10;
			opa=0;
		}
		if(opa==3){
			strcpy(hr, "16 hrs 00 min");
			h=h+11;
			opa=0;
		}
		if(opa==4){
			strcpy(hr, "17 hrs 00 min");
			h=h+16;
			opa=0;
		}
		if(opa==5){
			b();
		}				
	}		
	if(opa==4){	
		strcpy(d, "Quinta-Feira"); 
		printf("---------------------------------------------------------------------------");
		printf("\nHorarios Disponíveis                                 CARRINHO-->R$:%.2f\n",crr);
		printf("\n1 9 hrs 00 min");
		printf("\n2 10 hrs 00 min");
		printf("\n3 11 hrs 00 min");				
		printf("\n4 16 hrs 00 min");	
		printf("\n5 17 hrs 00 min");	
		printf("\n6 Voltar\n");	
		printf("\nDigite a opção que deseja Acessar--> ");
		fflush(stdin);	
		scanf("%d",&opa);
		if(opa != 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5  && opa!=6){
			while(opa!= 1 &&  opa!=2 && opa!=3 && opa!=4 && opa!=5 && opa!=6 ){
				system("cls");
				printf("---------------------------------------------------\n");
				printf("Comando INVALIDO!!!! \n");
				printf("---------------------------------------------------\n");
				printf("-----------------------------------------------------------------------------");
				printf("\nHorarios Disponíveis                                 CARRINHO-->R$:%.2f\n",crr);
				printf("\n1 9 hrs 00 min");
				printf("\n2 10 hrs 00 min");
				printf("\n3 11 hrs 00 min");				
				printf("\n4 16 hrs 00 min");	
				printf("\n5 17 hrs 00 min");	
				printf("\n6 Voltar\n");	
				printf("\nDigite a opção que deseja Acessar--> ");
				fflush(stdin);
				scanf("%d",&opa);		
			}
		}
		if(opa==1){
			strcpy(hr, "9 hrs 00 min");
			opa=0;
		}
		if(opa==2){
			strcpy(hr, "10 hrs 00 min");
			h=h+10;
			opa=0;
		}
		if(opa==3){
			strcpy(hr, "11 hrs 00 min");
			h=h+11;
			opa=0;
		}
		if(opa==4){
			strcpy(hr, "16 hrs 00 min");
			h=h+16;
			opa=0;
		}
		if(opa==5){
			strcpy(hr, "17 hrs 00 min");
			h=h+17;
			opa=0;
		}
		if(opa==6){
			b();
		}		
	}	
	if(opa==5){	
		printf("---------------------------------------------------------------------------");
		printf("\nHorarios Disponíveis:                                CARRINHO-->R$:%.2f\n",crr);			
		printf("\nSem Horarios Diponivéis");
		fflush(stdin);
		printf("\n1 Voltar\n");	
		printf("\nDigite a opção que deseja Asseçar --> ");	
		if(opa != 1 ){
			while(opa!= 1){
				system("cls");
				printf("---------------------------------------------------\n");
				printf("Comando INVALIDO!!!! \n");
				printf("---------------------------------------------------\n");
				printf("-----------------------------------------------------------------------------");
				printf("\nHorarios Disponíveis                                 CARRINHO-->R$:%.2f\n",crr);			
				printf("\nSem Horarios Diponivéis");
				printf("\n1 Voltar\n");		
				printf("\nDigite a opção que deseja Acessar--> ");
				fflush(stdin);	
				scanf("%d",&opa);		
			}
		}
		if(opa==1){
			b();
		}				
	}
	if(opa==6){	
		strcpy(d, "Sábado"); 	
		printf("---------------------------------------------------------------------------");
		printf("\nHorarios Disponíveis:                            CARRINHO-->R$:%.2f\n",crr);
		printf("Nos Sábados estamos abertos até as 15 hrs 00 min\n");
		printf("\n1 9 hrs 00 min");
		printf("\n2 10 hrs 00 min");
		printf("\n3 11 hrs 00 min");				
		printf("\n4 Voltar");
		printf("\nDigite a opção que deseja Acessar--> ");	
		fflush(stdin);
		scanf("%d",&opa);
		if(opa != 1 ){
			while(opa!= 1 &&  opa!=2 && opa!=3 && opa!=4){
				system("cls");
				printf("---------------------------------------------------\n");
				printf("Comando INVALIDO!!!! \n");
				printf("---------------------------------------------------\n");
				printf("-----------------------------------------------------------------------------");
				printf("\nHorarios Disponíveis:                            CARRINHO-->R$:%.2f\n",crr);
				printf("Nos Sábados estamos abertos até as 15 hrs 00 min\n");
				printf("\n1 9 hrs 00 min");
				printf("\n2 10 hrs 00 min");
				printf("\n3 11 hrs 00 min");				
				printf("\n4 Voltar\n");
				printf("\nDigite a opção que deseja Acessar--> ");	
				fflush(stdin);		
				scanf("%d",&opa);		
			}
		}
			
		if(opa==1){
			strcpy(hr, "9 hrs 00 min");
			opa=0;
		}
		if(opa==2){
			strcpy(hr, "10 hrs 00 min");
			h=h+10;
			opa=0;
		}
		if(opa==3){
			strcpy(hr, "11 hrs 00 min");
			h=h+11;
			opa=0;
		}
		if(opa==4){
			b();
		}					
	}	
}
}
//começo da parte do carlos
void fc(){
	int i=0;
	system("cls");
	printf("\n---------------------------------------------------------------------------");
	printf("\nSua Compra ficou R$:%.2f\n",crr);
	if(h>=1){
		printf("\n\nSeu horario Ficou Marcado Para:\n %s as %s\n",d,hr);
	}
	
    srand(time(NULL));
    printf("\n\nApresente esse Código na loja para a retirada dos produtos:");
    for (i = 0; i < 6; i++) {
        printf("%d", rand() % 100);
    }
	printf("\n---------------------------------------------------------------------------");
	printf("\n---------------------------VOLTE SEMPRE!!----------------------------------");	
	printf("\n-----------------------------OBRIGADO--------------------------------------");
	printf("\n-------------------------------PELA----------------------------------------");
	printf("\n----------------------------PREFERÊNCIA------------------------------------");
	
	abort();
}
void rc(){
	int it;
	int un=0;
	char op;
	int c;
	system("cls");
	printf("---------------------------------------------------------------------------");
	printf("\nOpções Disponiveis:                                      CARRINHO-->R$:%.2f",crr);
	printf("\n1 Ração Special Cat Vegetais Adulto 20Kg R$184,90");               
	printf("\n2 Ração Pedigree Carne Adulto 10kg R$131,74");
	printf("\n3 Ração Special Dog Júnior Premium Carne Filhote 10kg R$121,90");
	printf("\n4 Ração Pedigree Cães Filhotes, Sabor Carne, Frango e Cereais 10kg R$174,39");	
	printf("\n5 Para Finalizar Compra");
	printf("\n6 Volta para o Menu Anterior");	
	printf("\n\nAdicionar no Carrinho--> ");
	fflush(stdin);	
	scanf("%d",&it);
	
	if(it!= 1 &&  it!=2 && it!=3 && it!=4 && it!=5 && it!=6 ){
		while(it!= 1 &&  it!=2 && it!=3 && it!=4 && it!=5 && it!=6  ){
			system("cls");
			printf("---------------------------------------------------\n");
			printf("Comando INVALIDO!!!! \n");
			printf("---------------------------------------------------------------------------");
			printf("\nOpções Disponiveis:                                      CARRINHO-->R$:%.2f",crr);
			printf("\n1 Ração Special Cat Vegetais Adulto 20Kg R$184,90");               
			printf("\n2 Ração Pedigree Carne Adulto 10kg R$131,74");
			printf("\n3 Ração Special Dog Júnior Premium Carne Filhote 10kg R$121,90");
			printf("\n4 Ração Pedigree Cães Filhotes, Sabor Carne, Frango e Cereais 10kg R$174,39");	
			printf("\n5 Para Finalizar Compra");	
			printf("\n6 Volta para o Menu Anterior");
			printf("\n\nAdicionar no Carrinho--> ");
			fflush(stdin);
			scanf("%d",&it);	
		}	
	}
	
	if(it == 1){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Ração Special Cat Vegetais Adulto 20kg, Foi Adicionada no Carrinho!!",un);
		crr=crr+184.90*un;
	}
	if(it == 2){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Ração Pedigree Carne Adulto 10kg, Foi Adicionada no Carrinho!!",un);
		crr=crr+131.74*un;
	}	
	if(it == 3){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Ração Special Dog Júnior Premium Carne Filhote 10kg, Foi Adicionada no Carrinho!!",un);
		crr=crr+121.90*un;
	}
	if(it == 4){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Ração Pedigree Cães Filhotes, Sabor Carne, Frango e Cereais 10kg, Foi Adicionada no Carrinho!!",un);
		crr=crr+174.39*un;
	}
	if(it == 5){
		fc();
	}
	if(it == 6){
				
	}
	if(it >=
	 1 && it<=5){
		printf("\n\n\nDeseja Adicionar Mais produtos ao Carrinho? ");
		printf("\nDigite S/s para SIM ou N/n para NÂO --> ");
		fflush(stdin);
		scanf("%c",&op);
		if(op == 's'){
			rc();			
		}
	}
	
}

void pp(){
	int it;
	int un=0;
	char op;
	int c;
	system("cls");
	printf("---------------------------------------------------------------------------");
	printf("\nOpções Disponiveis:                                      CARRINHO-->R$:%.2f",crr);
	printf("\n1 Beeps Estopinha Shampoo Gatos 500ml R$22,90");               
	printf("\n2 Sabonete Banho Bom Coco para Cães e Gatos 75g R$6,00");
	printf("\n3 Coleira Peitoral para Cães e Gatos Tam. M R$30,00");
	printf("\n4 Coleira Antipulga e Parasitas para Cães e Gatos R$25,90");	
	printf("\n5 Fonte para Gatos Aqua Mini Bivolt Vermelha Amicus R$84,91");
	printf("\n6 Alimentador Automático Duplo 3L e 1,5kg R$69,90");	
	printf("\n7 Comedouro Elevado Triplo Para Cães e Gatos - Tamanho M R$119,00");	
	printf("\n8 Caixa De Transporte de Plástico N4 para Cães e Gatos  R$65,90");
	printf("\n9 Para Finalizar Compra");	
	printf("\n10 Volta para o Menu Anterior");
	printf("\n\nAdicionar no Carrinho --> ");
	fflush(stdin);	
	scanf("%d",&it);
	
	if(it!= 1 &&  it!=2 && it!=3 && it!=4 && it!= 5 &&  it!=6 && it!=7 && it!=8 && it!= 9 &&  it!=10 ){
		while(it!= 1 &&  it!=2 && it!=3 && it!=4 && it!= 5 &&  it!=6 && it!=7 && it!=8 && it!= 9 &&  it!=10){
			system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("Comando INVALIDO!!!! \n");
			printf("---------------------------------------------------------------------------");
			printf("---------------------------------------------------------------------------");
			printf("\nOpções Disponiveis:                                      CARRINHO-->R$:%.2f",crr);
			printf("\n1 Beeps Estopinha Shampoo Gatos 500ml R$22,90");               
			printf("\n2 Sabonete Banho Bom Coco para Cães e Gatos 75g R$6,00");
			printf("\n3 Coleira Peitoral para Cães e Gatos Tam. M R$30,00");
			printf("\n4 Coleira Antipulga e Parasitas para Cães e Gatos R$25,90");	
			printf("\n5 Fonte para Gatos Aqua Mini Bivolt Vermelha Amicus R$84,91");
			printf("\n6 Alimentador Automático Duplo 3L e 1,5kg R$69,90");	
			printf("\n7 Comedouro Elevado Triplo Para Cães e Gatos - Tamanho M R$119,00");	
			printf("\n8 Caixa De Transporte de Plástico N4 para Cães e Gatos  R$65,90");
			printf("\n9 Para Finalizar Compra");
			printf("\n10 Volta para o Menu Anterior");
				
			printf("\n\nAdicionar no Carrinho--> ");
			fflush(stdin);	
			scanf("%d",&it);
		}	
	}
	
	if(it == 1){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Beeps Estopinha Shampoo Gatos 500ml!!",un);
		crr=crr+22.90*un;
	}
	if(it == 2){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Sabonete Banho Bom Coco para Cães e Gatos 75g!!",un);
		crr=crr+6.00*un;
	}	
	if(it == 3){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Coleira Peitoral para Cães e Gatos Tam. M!!",un);
		crr=crr+30.00*un;
	}
	if(it == 4){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Coleira Antipulga e Parasitas para Cães e Gatos!!",un);
		crr=crr+25.90*un;
	}
	if(it == 5){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Fonte para Gatos Aqua Mini Bivolt Vermelha Amicus!!",un);
		crr=crr+84.91*un;
	}
	if(it == 6){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Alimentador Automático Duplo 3L e 1,5kg!!",un);
		crr=crr+69.90*un;
	}
	if(it == 7){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Comedouro Elevado Triplo Para Cães e Gatos - Tamanho M!!",un);
		crr=crr+119.00*un;
	}
	if(it == 8){
		printf("Quantas Unidades? ");
		scanf("%d",&un);
		printf("\n%d Caixa De Transporte de Plástico N4 para Cães e Gatos!!",un);
		crr=crr+65.90*un;
	}
	if(it == 9){
		fc();
	}
	
	if(it == 10){
				
	}
	if(it >= 1 && it<=9){
		printf("\n\n\nDeseja Adicionar Mais produtos ao Carrinho? ");
		printf("\nDigite S/s para SIM ou N/n para NÂO --> ");
		fflush(stdin);
		scanf("%c",&op);
		if(op == 'S' || op== 's' ){
			pp();			
		}	
	}
}

void loja(){
	system("cls");
	int op;
	int op1=1;
	int op2=2;
	int op3=3;
	int op4=4;
	printf("---------------------------------------------------------------------------");
	printf("\nOpções Disponiveis:                                      CARRINHO-->R$:%.2f",crr);
	printf("\nDigite 1 Para produtos Para Pets");
	printf("\nDigite 2 Para Rações");
	printf("\nDigite 3 Para Finalizar Compra");
	printf("\nDigite 4 Para Voltar ao Menu Anterior");
	printf("\nDigite 5 Para Sair");
	
	printf("\nDigite a opção que deseja Acessar--> ");

	scanf("%d",&op);
	if(op != 1 &&  op!=2 && op!=3 && op!=4 && op!=5 ){
		while(op != 1 &&  op!=2 && op!=3 && op!=4 && op!=5 ){
			system("cls");
			printf("---------------------------------------------------\n");
			printf("Comando INVALIDO!!!! \n");
			printf("---------------------------------------------------\n");
			printf("-----------------------------------------------------------------------------");
			printf("\nOpções Disponiveis:                                      CARRINHO-->R$:%.2f",crr);
			printf("\nDigite 1 Para produtos Para Pets");
			printf("\nDigite 2 Para Rações");
			printf("\nDigite 3 Para Finalizar Compra");
			printf("\nDigite 4 Para Voltar ao Menu Anterior");
			printf("\nDigite 5 Para Sair");
	
			printf("\nDigite a opção que deseja Acessar--> ");
			fflush(stdin);
			scanf("%d",&op);		
		}
	}

	switch(op){
		
		case 1:
			pp();
			loja();
		break;
		
		case 2:
			rc();
			loja();
		break;		
		
		case 3:
			fc();
		break;
		
		case 5:
			abort();
		break;	
	}		
}

int main(int argc, char** argv) {
	setlocale(LC_ALL ,"portuguese");
	int op;
	while(op!=10){
		system("cls");
		printf("-----------------------------------------------------\n");
		printf("------------Bem - Vindo a PET's & PET's'-------------");
		printf("\n                                                    -");
		printf("\n-Digite 1 Para loja de produtos para pet            -");
		printf("\n-Digite 2 Para Agendar um Horario                   -");
		printf("\n-Digite 3 Finalizar Compra                          -");
		printf("\n-Digite 4 Para Sair                                 -");
		printf("\n-----------------------------------------------------\n");
		printf("\nDigite a opção que deseja Acessar--> ");
		scanf("%d",&op);
		
		if(op != 1 &&  op!=2 && op!=3 && op!=4){
			while(op != 1 &&  op!=2 && op!=3 && op!=4){
				system("cls");
				printf("-----------------------------------------------------\n");
				printf("Comando INVALIDO!!!!                                -\n");
				printf("-----------------------------------------------------\n");
				printf("------------Bem - Vindo a PET's & PET's'-------------");
				printf("\n                                                    -");
				printf("\n-Digite 1 Para loja de produtos para pet            -");
				printf("\n-Digite 2 Para Agendar um Horario                   -");
				printf("\n-Digite 3 Finalizar Compra                          -");
				printf("\n-Digite 4 Para Sair                                 -");
				printf("\n-----------------------------------------------------\n");
				printf("\nDigite a opção que deseja Acessar--> ");
				fflush(stdin);
				scanf("%d",&op);		
			}
		}	
		switch(op){
			case 1:
				loja();	
			break;
			case 2:
				b();
			break;
			case 3:
				fc();
			break;			
			case 4:
				abort();
			break;
		}
	}		
	return 0;
}
