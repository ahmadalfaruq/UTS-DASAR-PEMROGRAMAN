#include <iostream>
using namespace std;

int main()
{
    int kode;

    cout<<"1 = SENIN  2 = SELASA  3 = RABU  4 = KAMIS"<<endl;
    cout<<"5 = JUMAT  6 = SABTU  7 = MINGGU"<<endl;
    cout<<"Masukan kode hari (1-7) : ";
    cin>>kode;

    switch(kode){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout<<"Hari Kerja"<<endl;
        break;
    case 6:
    case 7:
        cout<<"Hari Libur"<<endl;
        break;
    default:
        cout<<"Kode Hari Tidak Valid"<<endl;
    }
    return 0;
}
