#include <iostream>
using namespace std;

int main()
{
    int A[7];
    int j, k, c, temp;
    cout<<"Masukan nilai pada elemen array : "<< endl;
    for(int C=0; C<7; C++)
    {
        //menginput elemen array
        cout<<" A ["<< C << "] = ";
        cin>>A[C];
    }
    cout<<"\n Nilai elemen array sebelum diurutkan : "<< endl;
    for(int C=0; C<7; C++)
    {
        cout<<" A ["<< C << "] = "<<A[C]<<endl;
    }

    //pengurutan metode maksimum-minimun
    int jmaks, u=6;
    for (j=0; j<6; j++)
    {
        jmaks=0;
        for(k=1; k<=u; k++)
        {
            if(A[k]>A[jmaks])
            {
                jmaks=k;
            }
        }
        //penukaran elemen array
        temp = A[u];
        A[u] = A[jmaks];
        A[jmaks] = temp;
        u--;
    }

    cout<<"\n Nilai elemen array setelah diurutkan : "<< endl;
    for(int C=0; C<7; C++)
    {
        cout<<" A ["<< C << "] = "<<A[C]<<endl;
    }

    return 0;
}
