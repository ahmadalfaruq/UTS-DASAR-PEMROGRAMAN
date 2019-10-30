#include <iostream>
using namespace std;

int main()
{
    double nilai_ujian;
    char Indeks;

    cout<<"KONVERSI NILAI SISWA \n \n";
    cout<<"Masukan Nilai Ujian : ";
    cin>>nilai_ujian;
    cout<<endl;

    if(nilai_ujian >=85){
            Indeks='A';}
    else
        if(nilai_ujian >=75){
            Indeks='B';}
    else
        if(nilai_ujian >=55){
            Indeks='C';}
    else
        if(nilai_ujian >=40){
            Indeks='D';}
    else{
        Indeks='E';
    }
    cout<< "Indeks Siswa = "<<Indeks<<endl;

    return 0;
}
