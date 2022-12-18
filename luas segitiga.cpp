#include <iostream>

using namespace std;

int main()
{
    double alas, tinggi, L;
    
    cout<< "masukkan alas: ";
    cin>> alas;
    cout<< "masukkan tinggi: ";
    cin>> tinggi;
    L = 0.5*alas*tinggi;
    cout<< "luas segitiga: "<< L;

    return 0;
}
