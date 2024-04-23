#include <iostream>
using namespace std;

class bangunDatar { //membuat class bangunDatar

    private: //akses modifier private
        //membuat member private dari class bangunDatar
        float panjang, lebar;

    public : //akses modifier public
        //membuat member public dari class bangunDatar
        float luas;

        //membuat prosedur input sebagai member dari class bangunDatar
        void input() {
            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
            cout << "Masukkan Lebarnya = ";
            cin >> lebar;
        }

        //membuat method untuk menghitung luas persegi
        float hitungLuas() {
            return panjang * lebar;
        }

        //membuat prosedur input sebagai member dari class bangunDatar
        void display() {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungLuas() << endl;
        }

};

int main()
{
    bangunDatar pp; //deklarasi objek pp dari class bangunDatar
}
    