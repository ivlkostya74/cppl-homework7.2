// notDublikat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//#include <windows.h>;
#include <list>
#include <algorithm>
#include <array>
#include <map>
#include <deque>
#include <set>


template<class T>
void printV(const T& list) {
    for (const auto& i:list){
        std::cout << i << std::endl;
    }
}


int main()
{
   /* SetConsoleCP(1251);
    SetConsoleOutputCP(1251);*/
    std::cout << "[IN]:" << std::endl;
    std::array<int, 10> list1 = { 1,5,4,2,3,7,5,3,5,6 };
    printV(list1);
    std::cout << "[OUT]:" << std::endl;
   /* std::sort(list1.begin(), list1.end(),std::greater<int>());
    printV(list1);*/
    std::set<int, std::greater<>>deque;

    std::cout << "\n\n";
    for (const auto& i : list1) {
        deque.insert(i);
        }
    
    printV(deque);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
