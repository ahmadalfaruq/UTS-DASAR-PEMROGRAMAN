#include <iostream>
using namespace std;

int main()
{
    typedef int matriks [3] [2];
    matriks A, B, C;
    int j,k;

        //nilai pada elemen A
   cout<<"Matriks A : " << endl;
   for(j=0; j<3; j++)
   {
       for(k=0; k<2; k++)
       {
           //menampilkan hasil dari indeks i dan j
           cout<< "A ["<< j << "] ["<< k << "] = "; //menanpilkan hasil inputan matriks
           cin>> A [j] [k]; // inputan matriks  A
       }
   }
     cout<<endl;

     //nilai pada elemen B
    cout<<"Matriks B : " << endl;
   for(j=0; j<3; j++)
   {
       for(k=0; k<2; k++)
       {
           cout<< "B ["<< j << "] ["<< k << "] = ";
           cin>> B [j] [k];
       }
   }
   cout<<endl;

   cout<<endl;

   //proses penjumlahan A dan B
   for(j=0; j<3; j++)
   {
       for(k=0; k<2; k++)
       {
            C [j] [k] = A[j] [k] + B[j] [k];
       }
   }

    cout<<"Hasil Penjumlahan Matriks  : " << endl;
   for(j=0; j<3; j++)
   {
       for(k=0; k<2; k++)
       {
           cout<< "C ["<< j << "] ["<< k << "] = "<<1C [j] [k]<< endl;
       }
   }
   cout<<endl;

    return 0;
}
