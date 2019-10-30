#include <iostream>
using namespace std;

int main()
{
    int A[10];
    int nilai;
    cout<<"Nama : Dani Nugraha "<< endl;
    cout<<"NIM  : A2.1900035"<< endl<< endl;
    cout<<"nilai pada : "<< endl<< endl;
    for(int C=0; C<10; C++){
        cout<<" Indeks ["<< C << "] = ";
        cin>>A[C];
    }
    cout<<endl;

    cout<<"Nilai yang dicari adalah : ";
    cin>>nilai;
    for(int D=0; D<10; D++)
    {
        if(A[D] == nilai)
        {
        cout<<"Nilai yang terdapat pada Indeks ke  "<< D<<endl;
        break;
        }
    }
    cout<<"\n";

    return 0;
}
