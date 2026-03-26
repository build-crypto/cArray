
#include "cArray.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    cout<<"Nhap so phan tu mang: "<<endl;
    int n;
    cin>>n;
    cArray Temp(n);
    Temp.Array_in();
    cout<<"Mang vua nhap la:"<<endl;
    Temp.Array_out();
    cArray Rand(n);
    Rand.Random_Array();
    cout<<"Mang ngau nhien la:"<<endl;
    Rand.Array_out();
    cout<<"Nhap X can dem trong mang ban dau: ";
    int X;
    cin>>X;
    cout<<"Trong mang ban dau co "<<Temp.Count_X(X)<<" phan tu co gia tri "<<X<<endl;
    if (Rand.Increase()) cout<<"Mang ngau nhien tang dan"<<endl;
    else cout<<"Mang ngau nhien ko tang dan"<<endl;
    Rand.Lowest_Odd();
    Rand.quick_sort(0,n-1);
    cout<<"Mang sau khi sap xep la:"<<endl;
    Rand.Array_out();
}
