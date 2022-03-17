
// C++ program to swap every two bits in a byte.
#include<bits/stdc++.h>
using namespace std;
 
unsigned int swapBitsInPair(unsigned int x)
{
    // Extracting the high bit shift it to lowbit
    // Extracting the low bit shift it to highbit
    return ((x & 0b10101010) >> 1) |
            ((x & 0b01010101) << 1);   
}
 
/* Driver function to test above function */
int main()
{
    unsigned int x = 4;
    cout << swapBitsInPair(x);   
    return 0;
}