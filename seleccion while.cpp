#include <iostream>
using namespace std;
main(){
	
	//incrementa
	/*
	int i = 0;
	while(i<5){
		i++;
		cout<<i<<endl;
	}
	
	
	//decrementar
	
	int i = 5;
	while(i>0){
		
		i--;
			cout<<i<<endl;
	}
	
	//do while
	int i = 0;
	do{
		i++;
		cout<<i<<endl;
	}while(i<5);
	
	
	char respuesta;
	
	do{
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>respuesta;
	}while(respuesta=='s' || respuesta=='S');*/
	
	
	char respuesta = 's';
	while(respuesta=='s' || respuesta=='S'){
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;
	}
	
	
	system("pause");
}
