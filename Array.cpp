#include <iostream>
using namespace std;    

int main(){
    //Deklarasi Array dengan inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //Deklarasi Array tanpa inisialisasi
    int datamu[5];
    int x;
    //cara membaca Array dataku
    cout << "Data ke - 3 : " << dataku[2]<<endl;

    //Operasi Matematika
    x = dataku[2]*3;
    //cara menulis atau mengisi array
    dataku[2] = 600;
    cout << "Data ke - 3 yang baru : " << dataku[2]<<endl;

}