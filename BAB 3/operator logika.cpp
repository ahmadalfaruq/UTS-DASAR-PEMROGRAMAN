#include <iostream>
using namespace std;
int main()
{
        cout<<" OPERASI OPERATOR LOGIKA \n";

        cout<<"\n Tabel Kebenaran Operator AND \n";
        cout<<"1 && 1 = "<< (1 && 1) <<endl;
        cout<<"1 && 0 = "<< (1 && 0) <<endl;
        cout<<"0 && 1 = "<< (0 && 1) <<endl;
        cout<<"0 && 0 = "<< (0 && 0) <<endl;

        cout<<"\n Tabel Kebenaran Operator OR \n";
        cout<<"1 || 1 = "<< (1 || 1) <<endl;
        cout<<"1 || 0 = "<< (1 || 0) <<endl;
        cout<<"0 || 1 = "<< (0 || 1) <<endl;
        cout<<"0 || 0 = "<< (0 || 0) <<endl;

         cout<<"\n Tabel Kebenaran Operator NOT \n";
        cout<<"!1 = " << !1 <<endl;
        cout<<"!0 = " << !0 <<endl;

        return 0;

}
