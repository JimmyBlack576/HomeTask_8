#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double summa, proc;
    cout << "Введите сумму вклада: \n";
    cin >> summa;
    cout << "Введите ставку в процентах: \n";
    cin >> proc;

    proc = (proc / 100) / 12;
    cout << "Кажый месяц вы получите: " << summa * proc << endl;

    return 0;

}


