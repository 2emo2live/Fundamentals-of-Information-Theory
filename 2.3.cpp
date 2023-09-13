#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Для отсановки порграммы введите -1";
    int n = 0, m = 0;
    while (n != -1 and m!=-1)
    {
        std::cout << "Введите кол - во качетвенных признаков:";
        std::cin >> m;
        if (m == -1)
            return 0;
        std::cout << "Введите кол-во элементов:";
        std::cin >> n;
        std::cout << "Кол-во возможных сообзений = " << pow(m, n) << "\n";
        std::cout << "Кол-во информации, приходящееся на один эелемент =  " << (n * log2(m)) << '\n';
    }
}