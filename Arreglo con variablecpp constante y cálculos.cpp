/* 
 3.- cree un areglo utilizando una variable constante, despues estable los elementos de este arreglo utilizando calcules que guarden la tabla de multipicar 
 */


 #include<iostream>

 using namespace std;

 int main(){
 		int n = 10;
 		int tabla[n] ={};
 		
 		for (int i = 0; i <= 9; i++){
 			tabla[i] = (i+1) *2;
		 }
		 
		 for(int i = 0; i <= 9; i++){
		 	cout<<tabla[i]<<endl;
		 }
 	
 	return 0;
 }
