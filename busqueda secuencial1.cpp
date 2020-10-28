#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	int a[]={3,4,2,1,5,6,7,8,9,0};//"hola"
	int i, dato;
	char band ='F';
	
	cout<<"ingrese el numero a buscar: ";
	cin>>dato;
	
	i=0;
	while((band=='F')&&(i<10)){
		if (a[i]==dato){
			band='V';
		}
		i++;
		
	}
	if(band=='F'){
		cout<<"EL NUMERO A BUSCAR NO EXISTE EN EL ARREGLO"<<endl;
	}
	else if(band=='V'){
		cout<<"EL NUMERO A BUSCAR A SIDO ENCONTRADO EN LA POSICION: "<<i-1<<endl;
	}

	
	
	
	
	getch();
	return 0;
}
