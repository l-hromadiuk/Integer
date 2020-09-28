/*Дано двузначное число. Вывести число, полученное при перестанов-
ке цифр исходного числа.*/

#include <iostream>
using namespace std;

int main()
{
    int a, j, b;
    cout << "Enter a number (2 digits) ";
    cin >> a;
    b= a % 10;
    j =a/ 10;
    cout << b << j;
    
}

