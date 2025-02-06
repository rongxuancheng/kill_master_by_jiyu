#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
    cout<<"please wait for 5 seconds"<<endl;
    Sleep(5000);
    system("taskkill /f /im studentmain.exe");
    cout<<"Process killed successfully"<<endl;
    system("pause");
    return 0;
}
