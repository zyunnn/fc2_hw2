// File: hw2.2.cpp - pointers and ararys
// Author(s): zyap

#include <iostream>
using namespace std;

int main() 
{
    int i = 3;
    int j(-7);
    int k{21};

    cout << "i: " << i << "\n";
    cout << "j: " << j << "\n";
    cout << "k: " << k << "\n";
       
    // Part (b)
    // i, j, and k are in ascending memory locations
    cout << "address of i: " << &i << '\n'; 
    cout << "address of j: " << &j << '\n';
    cout << "address of k: " << &k << '\n';

    // Part (c)
    // pointers pi, pj and pk hold address of variables i, j, and k
    // dereference operator retrieve the value stored at the address held by the pointer
    int* pi = &i;
    int* pj = &j;
    int* pk = &k;
    cout << "value of pi: " << pi << ", contents at pi: " << *pi << endl;
    cout << "value of pj: " << pj << ", contents at pj: " << *pj << endl;
    cout << "value of pk: " << pk << ", contents at pk: " << *pk << endl; 

    // Part (d)
    double a[] { 0.9, 1.8, 2.7, 3.6, 4.5 };
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    // Part (e)
    // Yes, the 2 values are the same. The pointer pa2 holds address of a[2] value
    // Dereferencing the pointer will retrieve the value of a[2]
    double* pa2 = &a[2];
    cout << "value of a[2]: " << a[2] << ", contents at pa2: " <<  *pa2 << endl;

    // Part (f)
    // Dereferencing pa2 gives a[2] value, which is 2.7. Thus, 2.7-1 = 1.7
    cout << "*pa2 - 1: " << *pa2 - 1 << "\n";
    // pa2 holds the address to a[2]. Subtracting 1 from the value moves the pointer
    // 1 unit up the memory location which stores a[1]. Dereferencing the pointer 
    // therefore gives value of a[1] = 1.8
    cout << "*(pa2 - 1): " << *(pa2 - 1) << "\n";
    // Dereferencing pa2 gives a[2] value, which is 2.7. Thus, 2.7+1 = 3.7
    cout << "*pa2 + 1: " << *pa2 + 1 << "\n";
    // pa2 holds the address to a[2]. Adding 1 to the address value moves the pointer
    // 1 unit down the memory location which stores a[3]. Dereferencing the pointer
    // therefore gives value of a[3] = 3.6
    cout << "*(pa2 + 1): " << *(pa2 + 1) << "\n";

    // Part (g)
    cout << "1[pa2]: " << 1[pa2] << endl;

    // Part (h)
    for (int i = -2; i < 3; i++) {
        cout << *(pa2+i) << ' ';
    }
    cout << endl;

    // Part (i)
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        cout << *(a+i) << ' ';
    }
    cout << endl;
}