﻿// DanaPlusi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <vector>



double площадьКруга(double радиус) {
    return 3.14 * радиус * радиус;
}
int main() {
    double внешнийРадиус, внутреннийРадиус;

    // Запрос внешнего и внутреннего радиусов
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> внешнийРадиус;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> внутреннийРадиус;

    // Вычисление площади кольца
    double площадьКольца = площадьКруга(внешнийРадиус) - площадьКруга(внутреннийРадиус);

    // Вывод результата
    std::cout << "Площадь кольца: " << площадьКольца << std::endl;

    return 0;
}