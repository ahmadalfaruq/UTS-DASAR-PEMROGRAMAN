#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout<<"Kelulusan Siswa \n \n";
    double nilai_ujian;

    cout<<"Masukan Nilai Ujian : ";
    cin>>nilai_ujian;
    cout<<endl;
    char hasil_ujian[12] = "Tidak Lulus";
    if(nilai_ujian >=60)
        strcpy (hasil_ujian, "Lulus");
    cout<<"Hasil Ujian : ";
    cout<<hasil_ujian;
    cout<< endl << endl;

    return 0;
}
