#include <iostream>
#include <string>

using namespace std;
int main()
{
    int a = 0;
    int b[10];
    cout << "nhap so luong phan tu: ";
    cin >> a;
    
    cout << "\nso luong phan tu cua mang la: " << a;
    for(int i = 0; i < a; i++)
    {
        cout << "\n";
        cin >> b[i];
    }
    for(int i = 0; i < a; i++)
    {
        cout << "\nphan tu so " << i << "la: ";
        cout << b[i];
    }
    system("pause");
    return 0;
}

