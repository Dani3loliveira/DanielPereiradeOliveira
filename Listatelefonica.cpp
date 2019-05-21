#include <stdlib.h>
#include<stdio.h>
#include <iostream>
#include<string.h>

using namespace std;

//função para ler strings com espaços, pois gets nao estava funcionando//
int lestring(char s[], int max)
{
    int i = 0;
    char letra;

  
    for (i = 0; i < (max - 1); i++) {
   letra = fgetc(stdin);

  
   if ((letra == '\n') && (i == 0)) {
       i = i - 1;
       continue;
   }

   
   if (letra == '\n')
       break;
   s[i] = letra;
    }

    
    s[i] = 0;

    
    return (i);
}

struct agenda {
	char nome[100];
	int telefone;
	int idade;
	char email[50] ;
} lista[100];
int i=0;



void Adicionar(){
	

int op;	
int total=100;
system("cls");
cout<<"Adicionar"<<endl;
for(int i=1; i<total+1; i++){
 cout<<"Nome"<<" "<<i<<": " ; 
 lestring(lista[i].nome, 100); cout<<endl;
 cout<<"Email"<<" "<<i<<" : ";
 lestring(lista[i].email,100); cout<<endl;
 cout<<"Idade"<<" "<<i<<": ";
 cin>>lista[i].idade; cout<<endl;
 cout<<"Telefone"<<" "<<i<<": ";
 cin>>lista[i].telefone; cout<<endl;
 system("cls");

}
}

void Exibir(){	
int total=100;
system ("cls");
for(int i=1; i<total+1; i++){
cout<<"Nome: "<<lista[i].nome<<endl;
cout<<"Email: "<<lista[i].email<<endl;
cout<<"Telefone:"<<lista[i].telefone<<endl;
cout<<"Idade:"<<lista[i].idade<<endl;
cout<<endl;
system("pause");
}
}


void Pesquisar(){
	int total=100;
	char nome1[50];
	int i;
	system("cls");
	cout<<"Buscar contato\nDigite o nome do contato: "<<endl;
	lestring(nome1, 50);

	for(i=1;i<=total+1;i++){
		if(strcmp(nome1 ,lista[i].nome)==0){ 
			cout<<"Nome: "<<lista[i].nome<<endl;
			cout<<"Telefone: "<<lista[i].telefone<<endl;
			cout<<"Celular: "<<lista[i].email<<endl;
			cout<<"Idade: "<<lista[i].idade<<endl;
			system("pause");
 
}
}
}






void Sair(){

}

main(){
int op;


do{
system("cls");

cout<< "[1]Adicionar"<<endl;
cout<< "[2]Pesquisar"<<endl;
cout<< "[3]Exibir"<<endl;
cout<< "[0]Sair"<<endl;



cout<<"OPCAO: "<<endl;
cin>>op;

switch(op){
 case 1: Adicionar(); 
 break;
 case 2: Pesquisar(); 
 break;
 case 3: Exibir (); 
 break;
    }  
 
}while (op!=0);
return 0;
}
