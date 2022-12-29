//12. Увеличить все нечётные элементы массива на 3, а чётные в 2 раза

#include <iostream>
#include<ctime>
#include<array>
int main()
{
    const int N = 10;
    std::array<int, N> numbers;
    srand(time(0));
    for(int i = 0; i < N; i++)
        numbers[i] = rand() % 11;
    std::cout << "----mas----" << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << numbers[i] << std::endl;

    for(int i = 0; i < N; i++)
        if(numbers[i] % 2 ==  0)
            numbers[i] *= 2;
        else
            numbers[i] += 3;
    std::cout << "----mas----" << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << numbers[i] << std::endl;
    return 0;
}
