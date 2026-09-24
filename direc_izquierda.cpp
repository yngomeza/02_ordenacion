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
        for (int j = n - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                int aux = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = aux;
            }
        }
    }

    cout << "\nArreglo ordenado (por la izquierda): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
