#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Выедите кол-во символов в одной комбинации:";
    int n = 0;
    std::cin >> n;
    std::cout << "Вероятность появления комбинации = " << 1 / (pow(2, n)) << '\n';
    std::cout << "Кол-во информации, приходящейся на однй комбинацию = " << -log2(1 / (pow(2, n)));
}