#include<iostream>
#include<conio.h>

using namespace std;

void ingreso();
void capicuas(int**,int);
int valor,**p_num;
int main(){
	ingreso();
	capicuas(p_num,valor);
	for(int i=0;i<valor;i++){
		delete[] p_num[i];
	}
	delete[] p_num;
	getch();
	return 0;
}

void ingreso()
{
	int contada,cont=0;
	cout<<"Ingrese la cantidad de terinos";
	cin>>valor;
	p_num=new int*[valor];
	for(int i=0;i<valor;i++){
		p_num[i]=new int[valor];
	}
		for(int i=0;i<valor;i++){
			contada=0;
		     	for(int j=0;j<valor;j++){	
		     	cout<<"ingrese los valore";
		     	cin>>*(*(p_num+i)+j);
		     	for(int k=2;k<=*(*(p_num+i)+j);k++){
		     		if(*(*(p_num+i)+j)%k==0){
		     			contada++;
					 }
				if(contada==1){
				cout<<"es primo"<<endl;
				 }
				 }

		     }
		}
}

void capicuas(int **p_num, int valor1)
{
	int copia=0,cifra=0,reves;
		for(int i=0;i<valor1;i++){
		     	for(int j=0;j<valor1;j++){ 
				 cifra=0,reves=0;  
   copia=(*(*(p_num+i)+j));
   while((*(*(p_num+i)+j)!=0)){
      cifra=(*(*(p_num+i)+j))%10;
      reves=reves*10+cifra;
       *(*(p_num+i)+j)=*(*(p_num+i)+j)/10;
   }
   
   if(copia==reves) 
   printf("El numero %d SI es capicua\n",copia);
   else printf("El numero %d NO es capicua\n",copia);
} 

		     }
		}



