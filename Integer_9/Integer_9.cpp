/*Дано трехзначное число. Используя одну операцию деления нацело,
вывести первую цифру данного числа (сотни).*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number (3 digits)  ";
    cin >> a;
    a /= 100;
    cout << a;
}

