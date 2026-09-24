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

    bool bandera = true;
    int i = 0;
    while (i < n - 1 && bandera) {
        bandera = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                bandera = true;
            }
        }
        i++;
    }

    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
