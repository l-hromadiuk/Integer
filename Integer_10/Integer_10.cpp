/*Integer10. ���� ����������� �����. ������� ������� ��� ��������� �����
(�������), � ����� � ��� ������� ����� (�������).*/
#include <iostream>
using namespace std;

int main()
{
    int a, j, i;
    cout << "Enter a number (3 digits) ";
    cin >> a;
    i = sizeof(a);
    while (i > 2) {
        j = a % 10;
        a /= 10;
        i--;
        cout << j << " ";
    }

    return 0;
}