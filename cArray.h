#ifndef CARRAY_H
#define CARRAY_H


class cArray
{
    public:
        cArray(int x);
        void Array_out();
        void Array_in();
        void Random_Array();
        int Count_X(int x);
        bool Increase();
        void Lowest_Odd();
        void quick_sort(int l,int r);
    protected:

    private:
        int* Array;
        int n;
};

#endif // CARRAY_H
