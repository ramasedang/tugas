#include <iostream>

using namespace std;

int main( )
{
    string x;
    int y;
    char ch;
    cout << "Ketik nama anda:\n"; // menginput nama
    getline(cin,x);
    cout << "masukan umur anda:\n"; // menginput umur
    cin >> y;
    cout << "Selamat datang Sdr/I "+x+" di bioskop Mitra"; // 

    return 0;
}

