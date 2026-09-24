#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Ingrese los " << n << " elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int aux = arr[i];
        arr[i] = arr[min];
        arr[min] = aux;
    }

    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
