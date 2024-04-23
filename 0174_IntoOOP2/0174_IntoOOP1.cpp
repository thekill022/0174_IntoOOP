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

};


int main()
{
    
}
