#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <iostream>

using namespace std;

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



main(){
int idade,telefone,i;
char letra;

	
FILE *arquivo; 
char nome[10],sexo[30], endereco[100],name[100];
cout<<"Digite um nome para o arquivo: "<<endl; 
cin>>nome;
strcat(nome,".txt");



arquivo = fopen(nome,"r");



if ((arquivo = fopen(nome,"w")) == NULL) {
puts("Não posso abrir o Arquivo teste.\n"); 



}
else{
	arquivo = fopen(nome,"w");
	
	
	
	
 		cout<<"Telefone: "<<endl;
		cin>>telefone;
		fprintf(arquivo, "Telefone: ");
		fprintf(arquivo,"%d", telefone);
		cout<<endl;
		
		cout<<"Idade: "<<endl;
		cin>>idade;
		fprintf(arquivo, "Idade: ");
		fprintf(arquivo,"%d", idade);
		cout<<endl;
		
		cout<<"Endereco"<<endl;
		lestring(endereco,  100);
		fprintf(arquivo, "Endereco: ", endereco);
		fprintf(arquivo, endereco);
		cout<<endl;
		
		cout<<"Seu Nome"<<endl;
		lestring(name, 100);
		fprintf(arquivo, "Seu Nome: ", name);
		fprintf(arquivo, name);
		cout<<endl;
		
		cout<<"Sexo"<<endl;
		cin>>sexo;
		fprintf(arquivo, "sexo: ", sexo);
		fprintf(arquivo, sexo);
		cout<<endl;
	
		cout<<"     ";
		fprintf(arquivo, nome);
		cout<<endl;
			puts("Arquivo criado com sucesso!"); 
				fclose(arquivo);
}
}




