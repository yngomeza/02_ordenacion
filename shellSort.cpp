#include <iostream>
using namespace std;

void shellSort(int A[], int n){
	int k = n + 1;
	
	while(k > 1){
		k = k/2;
		
		for(int i = k; i < n; i++){
			int aux = A[i];
			int j = i;
			
			while(j >= k && A[j - k] > aux){
				A[j] = A[j - k];
				j = j - k;
			}
			A[j] = aux;
		}
	}
}

int main(){
	int n;
	
	cout << "Ingrese la cantidad de elementos que tendrá el arreglo: ";
	cin >> n;
	
	int A[n];
	
	cout << "Ingrese los " << n << " numeros: " << endl;
	for (int i = 0; i < n; i++){
		cout << "Elemento [" << i + 1 << "]: ";
		cin >> A[i];
	}
	
	shellSort(A, n);
	
	cout << "\nArreglo ordenado: ";
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	cout << endl; 
	
	return 0;
}