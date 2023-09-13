#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введит вероятности покупки продукции для каждого предприятия:";
    int pa1, pa2, pa3;
    std::cin >> pa1 >> pa2 >> pa3;
    std::cout << "ВВедите вероятность, Что продукция будет высшего сорта для каждого предприятия:";
    int pba1, pba2, pba3;
    std::cin >> pba1 >> pba2 >> pba3;
    std::cout << "ероятность покупки товара высшего сорта = ";
    std::cout << (pa1 * pba1 + pa2 * pba2 + pa3 * pba3)*0.0001;
}
