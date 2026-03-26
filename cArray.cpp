#include "cArray.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

cArray::cArray(int _size)
{
    n = _size;
    Array = new int[n];
}
void cArray::Array_out()
 {
     cout<<"[ ";
     for (int t=0;t<n;t++)
        cout<<Array[t]<<" ";
     cout<<"]"<<endl;
 }
 void cArray::Array_in()
{
    cout<<"Nhap cac phan tu cua mang"<<endl;
    for (int t=0;t<n;t++)
    cin>>Array[t];
}
 void cArray::Random_Array()
{
    srand(time(NULL));
    for (int t=0;t<n;t++)
    Array[t] = rand()%2001-1000;
}
int cArray::Count_X(int x)
{   int dem = 0;
    for (int t = 0;t<n;t++)
    {
        if (Array[t]==x) dem++;
    }
    return dem;
}
bool cArray::Increase()
{
    for (int t = 0;t<n-1;t++)
    {
        if (Array[t]>=Array[t+1]) return 0;
    }
    return 1;
}
void cArray::Lowest_Odd()
{    this->quick_sort(0,n-1);
     for (int t = 0;t<n;t++)
    {
        if (Array[t]%2!=0) {
                cout<<"Phan tu le nho nhat trong mang la: "<<Array[t]<<endl;
                return;
        }
    }
    cout<<"Mang ko co so le"<<endl;
}
void cArray::quick_sort(int l,int r)
{   int a = l,b = r;
    int A = Array[l];
    if (a>=b) return;
    while (a<b)
    {
        while (Array[a]<A) a++;
        while (Array[b]>A) b--;
        if (a<b)
        {
          swap(Array[a],Array[b]);
          a++;
          b--;
        }
    }
    if (b==r) b--;
    quick_sort(l,b);

    if (a==l) a++;
    quick_sort(a,r);
}
