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

    for (int i = 1; i < n; i++) {
        int aux = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > aux) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = aux;
    }

    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
