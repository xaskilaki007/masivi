#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int mat[5][5];
int mas[5];

void fillingMat() {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            mat[i][j] = (rand() % 26) + 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void fillingMas() {
    int max = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] > max)
                max = mat[i][j];
        }
        for (int k = 0; k < 5; k++)
            mas[k] = max;
        cout << mas[i] << " ";
        max = 0;
    }
}

int main() {
    fillingMat();
    cout << endl;
    fillingMas();
    return 0;
}
