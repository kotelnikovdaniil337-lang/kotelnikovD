#include <iostream>
using namespace std;
int main()
{
    double sopr;
    double sumobr = 0;  
    int k = 0;
    cout << "Введите сопротивления элементов (Ом). Для завершения введите 0:";
    while (true) {
        cout << "Сопротивление: ";
        cin >> sopr;
        if (sopr == 0) {
            break;
        }
        if (sopr < 0) {
            cout << "Сопротивление не может быть отрицательным";
            continue;
        }
        sumobr += 1.0 / sopr;
        k++;
    }
    return 0;
}
