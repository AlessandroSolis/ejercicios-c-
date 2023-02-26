/*
1.- Declare un arreglo y utilice un ciclo para inicial*/

 #include<iostream>

 using namespace std;

 int main(){
 	
 	int numeros[5] = {};
 	char letras[5] = {};
 	
 	for(int i = 0; i <= 4; i++){
 		cout<<"Ingrese numero: ";
 		cin>>numeros[i];
 		
 		cout<<"Ingrese una letra: ";
 		cin>>letras[i];
 		
 		cout<<endl;
	 }
 	
	 for(int i = 0; i <= 4; i++){
	 	cout<<numeros[i]<<" ";
	 }
 	 for(int i = 0; i <= 4; i++){
	 	cout<<letras[i]<<" ";
	 }
 	 
 	return 0;
 }
