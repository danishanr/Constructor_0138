#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    public :
        mahasiswa(int nim, string nama);
};

// definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama)
{
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}