#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int size;
    cout<<"Введи натсроение(1:грусть,2:радость,3:хз): ";
    cin >> size;

    switch (size)
    {
    case 1:
        cout<<"Че грустный сосал не вкусный?"<<endl;
        return 1;
    case 2:
        cout<<"молодцом"<<endl;
        return 1;
    case 3:
        cout<<"Того кто знает и соси"<<endl;
        return 1;
    default:
        cout<<"Ахуел в край"<<endl;
        return 56;
    }
    
    return 0;
}
