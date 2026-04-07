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
    orang mhs[3];
    for (int i = 0; i <= 2; i++)
    {
        //isi object
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);
        cout << "Alamat Desa : " << endl;
        getline(cin, mhs[i].alamat.desa);
        cout << "Alamat Kota : " << endl;
        getline(cin, mhs[i].alamat.kota);
        cout << "Umur : ";
        cin >> mhs[i].umur;
        cout << endl;
    }       
    //Meampilkan Isi Object
    for (int i = 0; i <= 2; i++)
    {
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Desa : " << mhs[i].alamat.desa << endl;
        cout << "Kota : " << mhs[i].alamat.kota << endl;
        cout << "Umur : " << mhs[i].umur << endl;
    }
}
