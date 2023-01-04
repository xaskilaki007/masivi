#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    
    srand(time(NULL));
    for (i = 0; i < n; i++)
        a[i] = rand() % 200;
        
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    int max = -1, min = 1000, imin, imax;
    
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            imax = i;
        }
        if (min > a[i])
        {
            min = a[i];
            imin = i;
        }
    }
    
    cout << "Max = " << max << " Max index " << imax << endl;
    cout << "Min = " << min << " Min index " << imin << endl;

    return 0;
}
