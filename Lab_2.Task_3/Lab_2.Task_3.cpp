#include <iostream>
#include <cmath>

using namespace std;

void menu()
{
    cout << "\nМеню\n";
    cout << "\n1. Поиск максимума/минимума для двух чисел";
    cout << "\n2. Поиск максимума/минимума для трёх чисел";
    cout << "\n3. Вычисление sin x";
    cout << "\n4. Вычисление факториала числа";
    cout << "\n5. Перестановка двух чисел с целью их упорядочения";
    cout << "\n6. Вывести меню";
    cout << "\n7. Выход\n";
}

double taylor_sin(double x)
{
    double el, sum = 0, eps;
    int k{ 1 };
    eps = 0.0000001;
    el = x;
    while (abs(el) > eps)
    {
        sum += el;
        el *= -1 * x * x / (2 * k) / (2 * k + 1);
        k++;
    }
    return sum;
}

int factorial(int n)
{
    int f;
    f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

inline void max_min_2()
{
    int a, b;
    int min;
    int max;
    cout << "\nВведите первое число: "; cin >> a;
    cout << "\nВведите второе число: "; cin >> b;
    if (a > b)
    {
        max = a; min = b;
    }
    else
    {
        max = b; min = a;
    }
    cout << "Min: " << min << "\nMax: " << max << endl;
}

inline void max_min_3()
{
    int a, b, c;
    int min;
    int max;
    cout << "\nВведите первое число: "; cin >> a;
    min = a; max = a;
    cout << "\nВведите второе число: "; cin >> b;
    cout << "\nВведите третье число: "; cin >> c;
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
    cout << "Min: " << min << "\nMax: " << max << endl;
    return;
}

void my_swap()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a; 
    cout << "\nEnter b: ";
    cin >> b;
    (a > b) ? cout << b << ' ' << a : cout << a << ' ' << b;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    bool flag = true;
    int s;
    menu();
    while (flag)
    {
        cout << "\nВведите номер пункта: "; cin >> s;
        switch (s)
        {
        case 1: max_min_2(); break;
        case 2: max_min_3(); break;
        case 3: 
        {
            double x;
            cout << "Введите x: ";
            cin >> x;
            cout << "\nAnswer: " << taylor_sin(x);
            break;
        }
        case 4: 
        {
            int n;
            cout << "Введите число: ";
            cin >> n;
            cout << "\nAnswer: " << factorial(n);
            break;
        }
        case 5: my_swap(); break;
        case 6: menu(); break;
        case 7: flag = false; break;
        }
    }
    return 0;
}