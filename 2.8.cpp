#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Выедите кол-во символов алфавита:";
    int n = 0;
    double p = 0, result = 0;
    std::cin >> n;
    std::cout << "Последовательно вводите вероятность каждого символа:";
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> p;
        result += p * log2(p);
    }
    std::cout << "Кол-во информации, приходящейся на один символ = " << -result;
}