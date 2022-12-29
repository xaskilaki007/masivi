#include <iostream>
#include <array>

int main()
{
    std :: array <int,5> arr_weight;
    std :: array <int,5> arr_cont;
    int min_weight=6;
    int max_cont=0;
    int counter = 0;

    for(int  i = 0; i < 5 ; i++)
    {
        std :: cout << "people" << i << " weight: ";
        std :: cin >> arr_weight[i];
    }

    for(int  i = 0; i < 5 ; i++)
    {
        std :: cout << "people" << i << " cont: ";
        std :: cin >> arr_cont[i];
    }

    for(int  i = 0; i < 5 ; i++)
    {
        if(arr_weight[i]<min_weight)
        {
            min_weight = arr_weight[i];
        }
    }
    for(int  i = 0; i < 5 ; i++)
    {
        if(arr_cont[i]>max_cont)
        {
            max_cont = arr_cont[i];
        }
    }

    for(int  i = 0; i < 5 ; i++)
    {
        if(arr_weight[i] == min_weight and arr_cont[i] == max_cont)
        {
            counter++;
        }
    }
    
     if(counter == 1)
        {
            std :: cout << "There is such a person" << std :: endl;
        }
    return 0;
}
