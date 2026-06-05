#include <stdio.h>

int main() 
{
    char cArr[4] = {'a','b','c','d'};
    int iArr[4]  = {10,20,30,40};
    float fArr[4]  = {10.0f, 20.0f, 30.0f, 40.0f};
    double dArr[4]  = {10.0, 20.0, 30.0, 40.0};

    printf("Size of character Array : %lu \n", sizeof(cArr)); // 4 byte
    printf("Size of interger Array : %lu \n", sizeof(iArr));  // 16 byte
    printf("Size of float Array : %lu \n", sizeof(fArr));     // 16 byte
    printf("Size of double Array : %lu \n", sizeof(dArr));    // 32 byte

    return 0;
}