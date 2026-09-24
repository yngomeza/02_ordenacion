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

    int izq = 0;
    int der = n - 1;

    while (izq < der) {
        for (int j = izq; j < der; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
        der--;

        for (int j = der; j > izq; j--) {
            if (arr[j] < arr[j - 1]) {
                int aux = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = aux;
            }
        }
        izq++;
    }

    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
