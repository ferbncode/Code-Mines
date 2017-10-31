#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 46;
    // 00 00 00 00 00 00 00 01
    char *c = (char*)&i;
    *c == 0 ? printf("You machine is a Little Endian Machine\n") : printf("Big Endian\n");
    // Integer is 4 byte
    // Char is 1 byte
    char* p = (char*)&i;
    printf("%u\n", p);
    p = p + 3*(sizeof(int));
    printf("%u\n", p);
    cout << (int)*p << endl;






}
