#include <iostream>
using namespace std;

class persegiPanjang
{
    public :
        void inputData(bangunDatar &bd);
        void outputData(bangunDatar &bd);
};

class bangunDatar
{
    private :
        float panjang;
        float lebar;
    
        float hitungLuas(){   
            return panjang * lebar;
        }

        float hitungKeliling(){
            return 2 * (panjang + lebar);
        }
        // untuk mengakses panjang dan lebar
        friend void persegiPanjang::inputData(bangunDatar &bd);
        // untuk mengakses fungsi
        friend void persegiPanjang::outputData(bangunDatar &bd);
};

void persegiPanjang::inputData(bangunDatar &bd)
{
    cout << "Masukkan Panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan Lebar : ";
    cin >> bd.lebar;
}

void persegiPanjang::outputData(bangunDatar &bd)
{
    cout << "Luas : " << bd.hitungLuas();
    cout << "Keliling : " << bd.hitungKeliling() << endl;
}

int main()
{
    persegiPanjang pP;
    bangunDatar bD;
    pP.inputData(bD);
    pP.outputData(bD);
};