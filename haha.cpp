#include <iostream>
#include <string>

using namespace std;
int main()
{
    int a = 0;
    int b[10];
    cout << "nhap so luong phan tu: ";
    cin >> a;
    
    cout << "so luong phan tu cua mang la: " << a;
    for(int i = 0; i < a; i++)
    {
        cout << " ";
        cin >> b[i];
    }
    for(int i = 0; i < a; i++)
    {
        cout << "phan tu so " << i << "la: ";
        cout << b[i];
    }
    system("pause");
    return 0;
}

