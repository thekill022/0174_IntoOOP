#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa

    public: //akses modifier public
        //membuat member dari class mahasiswa
        string nama;
        int umur;
        string jurusan;

        //membuat prosedur output sebagai member dari class mahasiswa
        void output() {
            cout << "Nama \t: " << nama << endl;
            cout << "Umur \t: " << umur << endl;
            cout << "Jurusan \t: " << jurusan << endl;
        }

};

class Matakuliah { //membuat class Matakuliah

    private: //akses modifier private
        //membuat member dari class matakuliah
        string kodeMk;
        string namaMk;
        int sks;

    public: //akses modifier public
        //membuat prosedur input sebagai member dari class matakuliah
        void input() {
            cout << "Kode MK : ";
            cin >> kodeMk;
            cout << "Nama MK : ";
            cin >> namaMk;
            cout << "SKS : ";
            cin >> sks;
        }

        //membuat prosedur output sebagai member dari class matakuliah
        void output() {
            cout << "Kode MK \t: " << kodeMk << endl;
            cout << "Nama MK \t: " << namaMk << endl;
            cout << "SKS \t: " << sks << endl;
        }

};


int main()
{
    Mahasiswa mhs; //deklarasi objek mhs dari class mahasiswa
}
