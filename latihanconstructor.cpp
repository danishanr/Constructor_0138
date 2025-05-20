// Buatlah program C++ dengan class barang yang memiliki atribut: namaBarang dan kodeBarang
// program memiliki constructor berparameter untuk mengisi nilai namaBarang dan kodeBarang
// serta memiliki fungsi untuk menampilkan info barang

#include <iostream>
#include <string>
using namespace std;

class barang
{
    public :
    string namaBarang;
    int kodeBarang;

    barang(string namaBarang, int kodeBarang);

};

barang::barang(string namaBarang, int kodeBarang)
{
    cout << "===== Informasi Barang =====" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}

int main()
{
    barang brg("Pensil", 123);
    return 0;
}