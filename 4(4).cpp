//4 Вычислить произведение отрицательных/положительных элементов массива

#include <iostream>
#include<ctime>
#include<array>
int main()
{
    const int N = 10;
 std::array<int, N> numbers;
    srand(time (0));
    for (int i = 0; i < N; i++)
 numbers[i] = rand() % 11;
 std::cout << "----mas----" << std::endl;
    for (int i = 0; i < N; i++)
 std::cout << numbers[i] << std::endl;

    for (int i = 0; i < N; i++)
        if(numbers[i] > 0)
 numbers[i] *=numbers[i] ;
        else
 numbers[i] = 1;
 std::cout << "----mas----" << std::endl;
    for (int i = 0; i < N; i++)
 std::cout << numbers[i] << std::endl;
}
