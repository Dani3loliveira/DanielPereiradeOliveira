#include <stdlib.h>
#include<stdio.h>
#include <iostream>
#include<string.h>
#include<locale.h>
#include<conio.h>

using namespace std;

typedef struct aluno ALUNO;
struct aluno{
	char nome[30];
	char matricula[30];
	float n1;
	float n2;
	float media;
};

void cabecalho();
void Adicionar();
void listar();
void pesquisar();
void media();

main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	
	do{
		cabecalho();
		
		cout<<"1- Adicionar contato"<<endl;
		cout<<"2- Pesquisar contato"<<endl;
		cout<<"3- Exibir contatos"<<endl;
		cout<<"4- Exibir média da turma"<<endl;
		cout<<"0- Sair"<<endl<<endl;
		cout<<"Escolha uma opcao: ";
		cin>>opcao;
		
		switch(opcao){
			case 1:
				Adicionar();
			break;
			
			case 2:
				pesquisar();
			break;
			
			case 3:
				listar();
			break;
			
			case 4:
				media();
			break;
			
			case 0:
				cout<<"Fim do programa"<<endl;
				getch();
			break;
			
			default:
				cout<<"Opcão inválida"<<endl;
				getch();
				break;
			
			
			
		}
		
	}while(opcao!=0);
}

void cabecalho(){
	system("cls");
	printf("---------------------------------------");
	cout<<"ALUNOS";
	printf("---------------------------------------\n");
	
	
}

void Adicionar(){
	FILE *arquivo; 
	ALUNO ctt;
float media=0;	
char nome[10];

system("cls");



arquivo = fopen("alunos.txt","ab");

if (arquivo == NULL) {
printf("Não posso abrir o Arquivo teste.\n"); 

}
else{
do{
	
	cabecalho();
	fflush(stdin);
	printf("Digite o nome: ");
	gets(ctt.nome);
	
	fflush(stdin);
	printf("Digite a matrícula: ");
	gets(ctt.matricula);


	fflush(stdin);
	printf("Digite a AV1: ");
	scanf("%f",&ctt.n1);
	printf("Digite a AV2: ");
	scanf("%f",&ctt.n2);
	
	int i=1;
	ctt.media+=(((ctt.n1+ctt.n2)/2)/i);
	i++;
	
	fwrite(&ctt, sizeof(ALUNO), 1, arquivo);
	cout<<endl;
	printf("Deseja continuar(s/n)?");

	
}while(getche() == 's');
fclose(arquivo);	
}
}

void listar(){
	FILE *arquivo; 
	ALUNO ctt;
	arquivo = fopen("alunos.txt","rb");
cabecalho();
if (arquivo == NULL) {
printf("Não posso abrir o Arquivo teste.\n"); 

}else{
	while(fread(&ctt, sizeof(ALUNO),1,arquivo)==1){
		printf("Nome: %s \n", ctt.nome);
		printf("AV1: %2.f e AV2: %2.f\n", ctt.n1, ctt.n2);
		printf("Matrícula: %s\n", ctt.matricula);
		printf("---------------------------------\n\n");
		
	}
}
	fclose(arquivo);
	getch();
}

void pesquisar(){
	FILE *arquivo; 
	ALUNO ctt;
	char matricula[30];
	arquivo=fopen("alunos.txt", "rb");
	if(arquivo==NULL){
		printf("Não posso abrir o Arquivo teste.\n");	
	}
	else{
		fflush(stdin);
		printf("Digite a matricula a pesquisar: ");
		gets(matricula);
		system("cls");
		
		while(fread(&ctt, sizeof(ALUNO),1,arquivo)==1){
			if(strcmp(matricula, ctt.matricula)==0){
		printf("Nome: %s \n", ctt.nome);
		printf("AV1: %2.f e AV2: %2.f\n", ctt.n1, ctt.n2);
		printf("Matrícula: %s\n", ctt.matricula);
		printf("---------------------------------\n\n");
				
			}
			
		}
		
	}
	fclose(arquivo);
	getch();
}

void media(){
	FILE *arquivo; 
	ALUNO ctt;
	arquivo = fopen("alunos.txt","rb");
cabecalho();
if (arquivo == NULL) {
printf("Não posso abrir o Arquivo teste.\n"); 

}else{
	while(fread(&ctt, sizeof(ALUNO),1,arquivo)==1){
	fflush(stdin);
	printf("Média da turma: %2.f\n", ctt.media);
}
}
fclose(arquivo);
getch();
}
