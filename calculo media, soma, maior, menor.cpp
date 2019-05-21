#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;



void impossivel()
{
	
cout<<"Operacao impossivel pois tem valores negativos"<<endl;
}

int soma(int a, int b){
	int soma;
	soma = a+b;
}

int menor (int a, int b)
{
	if (a>b)
	return b;
	else 
	return a;
}

int maior (int a, int b)
{
	if (a>b)
	return a;
	else 
	return b;
}

int media(int a,int b)
{
int media;
media =	((a+b)/2);
}

main(){
int a,b;	
	cout<<"Digite A"<<endl;
	cin>>a;
	cout<<"Digite B"<<endl;
	cin>>b;

if (a>=0 && b>=0){

	cout<<"soma: "<<soma(a,b)<<endl;
	cout<<"media: "<<media(a,b)<<endl;
	cout<<"maior: "<<maior(a,b)<<endl;
	cout<<"menor: "<<menor(a,b)<<endl;
}
	else
{
	impossivel();
	return 0;
} 
}



