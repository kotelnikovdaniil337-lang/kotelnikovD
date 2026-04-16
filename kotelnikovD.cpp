#include <iostream>
using namespace std;
int main()
{
    double gruzpod;
    double obmas = 0;
    int k = 0;
    double maspred;
    cout << "Введите грузоподъёмность автомобиля (кг): ";
    cin >> gruzpod;
    cout << "Введите массу каждого предмета (кг). Для завершения введите 0:";
    while (true) {
        cout << "Масса предмета: ";
        cin >> maspred;
        
        if (maspred == 0) {
            break;
        }
         obmas += maspred;
        k++;
    }
    cout << "Общая масса предметов: " << obmas << " кг";
    cout << "Количество предметов: " << k << "\n";
    
    double процентЗагрузки = (obmas / gruzpod) * 100;
    cout << "Процент загрузки: " << процентЗагрузки << "%\n";
    return 0;
}
