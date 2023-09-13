#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введит вероятности отправки 0 и 1:";
    double pb1, pb2;
    std::cin >> pb1 >> pb2;
    std::cout << "Ведите вероятность, что при отправке 0 и 1 была принята единица:";
    double trash, pab2, pab1;
    std::cin >> trash >> pab2;
    std::cout << "Ведите вероятность, что при отправке 0 и 1 был принят ноль:";
    std::cin >> trash >> pab1;
    std::cout << "Вероятность принятия нуля = ";
    std::cout << pb1 * pab1 + pb2 * pab2;
}
