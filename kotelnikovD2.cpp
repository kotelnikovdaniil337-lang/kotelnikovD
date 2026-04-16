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
    cout << "Количество элементов: " << k << endl;
     if (k > 0) {
        double obsopr = 1.0 / sumob;
        cout << "Общее сопротивление цепи: " << obsopr << " Ом" << endl;
    } else {
        cout << "Не было введено ни одного элемента!" << endl;
    }
    cout << "Нажмите Enter для завершения работы";
    cin.ignore(); 
    cin.get();  
    return 0;
}