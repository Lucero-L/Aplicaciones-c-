#include<iostream>
#include<conio.h>

using namespace std;
void ingreso(int dim,int vec[]);
void pares(int dim,int vec2[],int vec[],int *p);
void impares(int dim,int vec3[],int vec[],int *p);
void imprimir(int dim,int *p);
int main(){
	int vec[20],vec2[20],vec3[20],op,dim;
	int *p;
	do{
		system("cls");
		cout<<"MENU"<<endl;
        cout<<"1.Ingresar la dimension del vector"<<endl;
	    cout<<"2.Ingrese datos "<<endl;
	    cout<<"3.Guardar valores pares en un nuevo vector"<<endl;
        cout<<"4.Guardar valores impares en un nuevo vector"<<endl;
        cout<<"5.Imprimir el vector"<<endl;
        cout<<"6.Salir"<<endl;
        cin>>op;
        system("cls");
       switch(op){ 
       case 1:
       	cout<<"Ingrese la dimension";
       	cin>>dim;
       	p=new int [dim];
       	system("cls");
       	break;
       	case 2:
       		ingreso(dim,vec);
       		p=vec;
       		getch();
       		system("cls");
       		break;
       	case 3:
       		p=vec;
       		pares(dim,vec2,vec,p);
       		p=&vec[0];
       		getch();
       		system("cls");
       		break;
       	case 4:
       		p=vec;
       		impares(dim,vec3,vec,p);
       		p=&vec[0];
       		getch();
       		system("cls");
       		break;
       	case 5:
       		imprimir(dim,p);
           	p=&vec[0];
       		getch();
       		system("cls");
       		break;
       	case 6:
       		cout<<"Gracias";
       		getch();
       		system("cls");
       		break;
       	default:
       			cout<<"Ingrese la opcion correcta";
       			break;
       		
	   }
		
	}while(op!=6);
	delete[] p;
	return 0;
}
void ingreso(int dim,int vec[]){
	cout<<"Ingrese los valores"<<endl;
	for(int i=0;i<dim;i++){
	cin>>vec[i];	
	}
}
void pares(int dim,int vec2[],int vec[],int *p){
	int aux=0,aux1=0;
	    cout<<"Los valores pares son:"<<endl;
     	for(int i=0;i<dim;i++)
    	{
		if(*p%2==0)
		{
			aux=aux+1;
			vec2[aux]=vec[i];
		     cout<<vec2[aux]<<endl;
    	}
    	p++;
	
        }
  
		
}	
void impares(int dim,int vec3[],int vec[],int *p){
	int aux1=0;
	     cout<<"Los valores impares son:"<<endl;
     	for(int i=0;i<dim;i++)
    	{
		if(*p%2!=0)
		{
			aux1=aux1+1;
			vec3[aux1]=vec[i];
			cout<<vec3[aux1]<<endl;	
    	}
    	p++;
	
        } 
		
}	
void imprimir(int dim,int *p){
	cout<<"El vector es:"<<endl;
	for(int i=0;i<dim;i++){
	cout<<*p<<endl;	
	p++;
	}
}
