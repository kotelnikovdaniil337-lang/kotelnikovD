#include <iostream>
using namespace std;
int main()
{
    double sopr;
    double sumob = 0; 
    int k = 0;
    cout << "Введите сопротивления элементов (Ом).";
    while (true) {
        cout << "Сопротивление: ";
        cin >> sopr;
        if (sopr == 0) {
            break;
        }
        if (sopr < 0) {
            cout << "Сопротивление не может быть отрицательным! Попробуйте снова.\n";
            continue;
        }
        sumob += 1.0 / sopr;
        k++;
    }
    return 0;
}