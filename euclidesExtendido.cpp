#include <iostream>
using namespace std;
 
int euclidesExtendido(int a, int b, int *x, int *y)
{
    // Caso base
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
 
    int x1, y1;
    int mcd = euclidesExtendido(b, a%b, &x1, &y1);
 
    *x = y1;
    *y = x1 - (a/b) * y1;
 
    return mcd;
}
 
int main()
{
    int x, y, a = 54, b = 36;
    int g = euclidesExtendido(a, b, &x, &y);
    cout << "MCD(" << a << ", " << b
         << ") = " << g << endl;
    cout << "x: "<< x << " y: "<< y << endl;
    return 0;
}
