#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main()
{
    //Deklarasi object dari struct orang
    orang mhs;
    //isi object
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Desa : " << endl;
    cin >> mhs.alamat.desa;
    cout << "Alamat Kota : " << endl;
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    //Meampilkan Isi Object
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}
