#include <iostream>

using namespace std;

int main()
{
    int Ram=18,Shyam=20;
    cout<<"before swap age of Ram="<<Ram<<"Shyam="<<Shyam<<endl;
    Ram=Ram+Shyam;
    Shyam=Ram-Shyam;
    Ram=Ram-Shyam;
    cout<<"After swap age of Ram="<<Ram<<"Shyam="<<Shyam<<endl;

    return 0;
}
