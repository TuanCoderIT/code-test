#include <iostream>
using namespace std;

double tinhTong(long &n)
{
    long double Sum = 0;
    for (int i = 1; i <= n; i++)
    {
        Sum += 1.0 / (2 * i - 1);
    }
    return Sum;
}
int main () {
    long n; 
    cout <<"Nhap n phan tu: " ;
    cin >> n;
    cout <<"Tong = " << tinhTong(n);
    cout << "Javascript" << endl;
}

