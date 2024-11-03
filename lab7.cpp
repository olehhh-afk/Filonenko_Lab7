#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Введіть число для пошуку: ";
    cin >> target;

    cout << "Індекси числа " << target << ": ";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "Число не знайдено";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
