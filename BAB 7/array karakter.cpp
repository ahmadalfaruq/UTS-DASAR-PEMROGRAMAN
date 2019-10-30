#include <iostream>
using namespace std;

int main()
{
    char NAMAKU [6]={'T','A','S','Y','A','\0'};
    char NAMAMU [6]="TASYA";

    for (int C=0; C<6; C++){
    cout<<NAMAKU [C]<< endl;
    }
    cout<<endl;
    cout<<NAMAMU;
    cout<< endl << endl;
    cout<<"jUMLAH ELEMEN NAMAKU :"<< sizeof (NAMAKU) << endl;
    cout<<"jUMLAH ELEMEN NAMAMU :"<< sizeof (NAMAMU) << endl << endl;

    return 0;
}
