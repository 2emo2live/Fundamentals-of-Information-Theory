#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите кол-во используемых символов:";
    int n = 0;
    double h=0, pab=0;
    std::cin >> n;
    std::cout << "Выедите рояятности появления символов A и B в сообщении:";
    std::vector<double>p(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> p[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> pab;
            h += p[i] * pab * log2(pab);
        }
    }
    std::cout << "ОБщая условня энтропия сообщения = " << -h;
}