#include <iostream>

using namespace std;

int main()
{
    double cost , inflation ;

    int noYears ;


cout<<" cost :";
    cin >> cost ;
cout<<"yeaer";
    cin >> noYears ;
cout<<"infla ";
    cin >> inflation ;

    inflation /= 100 ;

    for (int i =0  ; i < noYears ; i++)
    {
        cost = cost + (inflation * cost);
    }
cout << " cost after " << noYears << " years  = "<< cost <<endl ;

    return 0;
}
