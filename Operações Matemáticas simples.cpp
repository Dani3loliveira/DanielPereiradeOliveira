#include <stdlib.h>
#include<stdio.h>
#include <iostream>
#include<string.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

using namespace std;

int x, y;


void cabecalho();
void soma();
void subtracao();
void multiplicacao();
void divisao();
float potencia();

main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;


	do{
		cabecalho();

		cout<<"1- Soma "<<endl;
		cout<<"2- Subtra��o "<<endl;
		cout<<"3- Multiplica��o "<<endl;
		cout<<"4- Divis�o "<<endl;
		cout<<"5- Pot�ncia "<<endl;
		cout<<"0- Sair"<<endl<<endl;
		cout<<"Escolha uma opcao: ";
		cin>>opcao;

		switch(opcao){
			case 1:soma();
			break;
			case 2:subtracao();
			break;
			case 3:multiplicacao();
			break;
			case 4:divisao();
			break;
			case 5: potencia();
			break;
			case 0:
				cout<<"Fim do programa"<<endl;
				getch();
			break;

			default:
				cout<<"Opc�o inv�lida"<<endl;
				getch();
				break;



		}

	}while(opcao!=0);
}

void cabecalho(){
	system("cls");
	printf("----------------------------------");
	cout<<"C�LCULOS";
	printf("----------------------------------\n");
}


void soma(){
do{	
system("cls");
cout<<"Digite o valor 1: "<<endl;
cin>>x;
cout<<"Digite o valor 2: "<<endl;
cin>>y;
int z=x+y;
system("cls");
printf("Soma igual a: %d", z);
cout<<endl;
getch();	
system("cls");
printf("Deseja continuar(s/n)?");
cout<<endl;
}while(getche() == 's');
}

void subtracao(){
do{
system("cls");
cout<<"Digite o valor 1: "<<endl;
cin>>x;
cout<<"Digite o valor 2: "<<endl;
cin>>y;
int z=x-y;
system("cls");
printf("Subtra��o igual a: %d", z);
cout<<endl;
getch();	
system("cls");
printf("Deseja continuar(s/n)?");
cout<<endl;
}while(getche()== 's');
}

void multiplicacao(){
do{
system("cls");
cout<<"Digite o valor 1: "<<endl;
cin>>x;
cout<<"Digite o valor 2: "<<endl;
cin>>y;
int z=x*y;
system("cls");
printf("Multiplica��o igual a: %d", z);
cout<<endl;
getch();	
system("cls");
printf("Deseja continuar(s/n)?");
cout<<endl;
}while(getche()== 's');
}

void divisao(){
do{
system("cls");
cout<<"Digite o valor 1: "<<endl;
cin>>x;
cout<<"Digite o valor 2: "<<endl;
cin>>y;
int z=x/y;
system("cls");
printf("Divis�o igual a: %d", z);
cout<<endl;
getch();	
system("cls");
printf("Deseja continuar(s/n)?");
cout<<endl;
}while(getche()== 's');
}


float potencia (){
do{
system("cls"); 
cout<<"Digite base: "<<endl;
cin>>x;
cout<<"Digite expoente: "<<endl;
cin>>y;
cout<<endl;
system("cls");
cout<<"Resultado da potencia��o: "<<pow(x,y)<<endl;
getch();
printf("Deseja continuar(s/n)?");
cout<<endl;
}while(getche()== 's');
}
