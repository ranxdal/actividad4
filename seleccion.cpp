#include <iostream>
using namespace std;

main(){
	/*int contar=0;
	for(int i=0; i<=10; i++){
		
		if(i==5){
			cout<<"if"<<endl;
			continue;
			break;
		}
		
		cout<<i<<endl;
		contar++;
	}
	cout<<"fuera del for"<<endl;
	cout<<"ciclos: "<<contar<<endl;
	
	for(float i=0; i<1; i+=0.1){
		
		cout<<i<<endl;
		
	}
	


int tam = 0;
int datos[] = {10,40,100,250,3000};
/*tam = sizeof(datos) / sizeof(datos[0]);
cout<<tam<<endl;

for (int i : datos){
	cout<<i<<endl;
}
for (int i=0; i<tam; i++){
	cout<<datos[i]<<endl;
	
}	
	int tabla = 0, res = 0;
	cout<<"ingrese tabla: "<<endl;
	cin>>tabla;
	
	for(int i=1;i<=10; i++){
		res = tabla * i;
		cout<<tabla<< " x " <<i<< " = " <<res<<endl;
	}*/
	
	int inicio = 0, fin = 0, res = 0;
	cout<<"Ingrese tabla incial: ";
	cin>>inicio;
	cout<<"Ingrese tabla final: ";
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
	cout<<"Tabla del: "<<rango<<endl;	
		
		for(int i=1;i<=10; i++){
		res = rango * i;
		cout<<rango<< " x " <<i<< " = " <<res<<endl;
	}
		
	}
	
	
	
	system("pause");
}
