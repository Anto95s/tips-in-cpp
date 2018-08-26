#include<iostream>
#include<windows.h>
using namespace std;

main()
{
    int n = 2;
    int a = 5;
    int b = 8;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i] = i+a+1;
    }

    int *ptr = &a;
    int **ptr2 = &ptr;
    int *ptr3 = &arr[0];
    int *ptr4 = &a;

    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    *ptr4 = b;
    cout<<*ptr<<endl;
    cout<<*ptr3<<" "<<*ptr3+1<<endl;

    system("PAUSE");
}
