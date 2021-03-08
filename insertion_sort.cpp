#include<iostream>
#include <locale> //biblioteca manipula��o de diversas convencoes culturais do utilizador (nessse codigo para acentua??o)
using namespace std;

void insertionsort (int* vet, int n){  //insertion sort ou ornedacao por inser??o
int aux;

	for(int i=0; i<n; i++){
    for(int j=i+1; j>0; j--){
    if (vet[j] < vet[j-1]){
    aux = vet[j];
    vet[j] = vet[j-1];
    vet[j-1] = aux;

	}else{
	
   }
  }
 }
}

int main(){
int n = 13;             //tamanho do vetor
int vet[n]={89, 87, 82, 79, 77, 70, 57, 52, 49, 42, 41, 33, 32};   //numeros para serem ordenados  
cout << "\n";	
cout << " Tamanho do vetor: " << n << "\n";
	for(int i = 0; i<n; i++){
cout << vet[i] << ( (i!=n-1) ? " - " : ""); //operador condicional ternario "|vari?vel| = `if`(condi��o) ? <valor1> : <valor2>;". uilizei para trar o simbolo separador apos o ultimo n?mero 

  }

cout << "\n \n";

insertionsort (vet, n);
setlocale(LC_ALL, ""); //setlocale <locale> 
cout << " Vetor ordenado por inser��o (Insertion Sort) " << "\n";
  
  for (int i = 0; i < n; i++){
	  
cout << vet[i] << ( (i!=n-1) ? " < " : ""); //operador condicional ternario "|vari?vel| = `if`(condi��o) ? <valor1> : <valor2>;" . uilizei para trar o simbolo separador apos o ultimo n?mero 
 
  }

cout << "\n"; 

return 0;

}

