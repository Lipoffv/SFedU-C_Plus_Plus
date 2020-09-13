#include <iostream>

using namespace std;

int degree(int N, int K)
{
    int sum{0};
    while (N > 0)
    {
        sum += pow(N % 10, K);
        N /= 10;
    }
    return sum;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    long int N, K;
    cout << "Enter N: "; cin >> N;
    cout << "\nEnter K: "; cin >> K;
    if (N == degree(N, K))
        cout << " Число N РАВНО сумме степеней K своих цифр" << endl;
    else
        cout << " Число N НЕ РАВНО сумме степеней K своих цифр" << endl;
    return 0;
}

