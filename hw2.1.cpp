// File: hw2.1.cpp
// Authors: zyap

#include <iostream>
using namespace std;

int main() {

  int a[5];
  int b[5] { 1, 2, 3, 4, 5 };
  int c[5] { 6, 7, };   // add semi-colon to end of expression
  int d[6] { 8, 9, 10, 11, 12, 13 };  // fix size from 5 -> 6
  int e[5] { 0 };
  int f[] { 14, 15, 16, 17, 18, 19, 20, 21 };

  // Part (b)
  // Output: 6 16 84941568 1922690890 0
  // Comment: Yes, the array is not initialized during declaration. 
  // All values are set to random values by default
  cout << "In hw2.1:\n";
  int i = 0;
  for (; i < 5; i++) {
    cout << a[i] << ' ';
  }
  cout << endl;

  // Part (c)
  // Output: 1 2 3 4 5
  // Comment: Yes, the array is declared and initialized to 
  // the values same as the output
  cout << "\nPart (c)" << endl;
  for (int i = 0; i < 5; i++) {
    cout << b[i] << ' ';
  }
  cout << endl;

  // Part (d)
  // Output: 6 7 0 0 0
  // Comment: Yes, the variable i is a local variable within the 
  // scope of the for loop. Corresponding memory is deallocated upon upon 
  // exiting the loop, thus will not result in a clash
  cout << "\nPart (d)" << endl;
  for (int i = 0; i < 5; i++) {
    cout << c[i] << ' ';
  }
  cout << endl;

  // Part (e)
  // Output: 22.2 23.2 24.2 25.2
  cout << "\nPart (e)" << endl;
  double g[4] { 22.2, 23.2, 24.2, 25.2 };
  for (int i = 0; i < 4; i++) {
    cout << g[i] << ' ';
  }
  cout << endl;

  // Part (f)
  // Comment: int type value occupies 4 byte, double type value occupies 8 byte
  // array b holds 5 int values, 5x4 = 20 bytes
  // array f holds 8 int values, 8x4 = 32 bytes
  // array g holds 4 double values, 4x8 = 32 bytes
  cout << "\nPart (f)" << endl;
  cout << "sizeof(b): " << sizeof(b) << endl;
  cout << "sizeof(f): " << sizeof(f) << endl;
  cout << "sizeof(g): " << sizeof(g) << endl;

  // Part (g)
  // Comment: b[0] and f[0] hold int type values, which each occupies 4 bytes
  // g[0] holds a double type value, which occupies 8 bytes in memory
  cout << "\nPart (g)" << endl;
  cout << "sizeof(b[0]): " << sizeof(b[0]) << endl;
  cout << "sizeof(f[0]): " << sizeof(f[0]) << endl;
  cout << "sizeof(g[0]): " << sizeof(g[0]) << endl;

  // Part (h)
  cout << "\nPart (h)" << endl;
  cout << "Number of bytes in f: " << sizeof(f) << endl;
  cout << "Number of byts in one element of f: " << sizeof(f[0]) << endl;
  cout << "Number of elements in f: " << sizeof(f)/sizeof(f[0]) << endl;

  // Part (i)
  double h[] = { 2.2, 4.4, 1.1, 5.5, 3.3, 6.6, 8.8, 0.0 };
  char ca[] = { 65, 'p', 112, 108, 'e' };
  // h array
  cout << "\nPart (i)" << endl;
  cout << "Size of h: " << sizeof(h) << endl;
  cout << "Size of initial element of h: " << sizeof(h[0]) << endl;
  int hCount = sizeof(h)/sizeof(h[0]);
  cout << "Number of elements in h: " << hCount << endl;
  cout << "Values of elements:" << endl;
  for (int i = 0; i < hCount; i++) {
    cout << h[i] << ' ';
  }
  cout << endl;
  // ca array
  cout << "Size of ca: " << sizeof(ca) << endl;
  cout << "Size of initial element of ca: " << sizeof(ca[0]) << endl;
  int caCount = sizeof(ca)/sizeof(ca[0]);
  cout << "Number of elements in h: " << caCount << endl;
  cout << "Values of elements:" << endl;
  for (int i = 0; i < caCount; i++) {
    cout << ca[i] << ' ';
  }

  return 0;
}
