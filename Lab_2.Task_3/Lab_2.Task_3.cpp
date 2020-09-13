#include <iostream>

using namespace std;

void max_min(int a, int b, int c, int& min, int& max)
{
    if (b < min)
    {
        min = b;
        if (c < min)
            min = c;
    }
    else if (c < min)
        min = c;

    if (b > max)
    {
        max = b;
        if (c > max)
            max = c;
    }
    else if (c > max)
        max = c;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    int min;
    int max;
    cout << "\nВведите первое число: "; cin >> a;
    min = a; max = a;
    cout << "\nВведите второе число: "; cin >> b;
    cout << "\nВведите третье число: "; cin >> c;
    max_min(a, b, c, min, max);
    cout << "min: " << min << "\nmax: " << max << endl;
    return 0;
}
