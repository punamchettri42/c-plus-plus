//process of allocating and  freeing memory at runtime is known as dynamic memory allocation
//to find sum and average using dmac and pointer method
# include <iostream>
using namespace std;
int main()
{
    int n, i, *arr,total=0,avg;
    cout<< "total number=";
    for ( i=0;i<=n;i++)
    cin >> arr[i];
    for (i=0; i<=n;i++)
    total =arr[i] +total;
    avg =total/n;
    cout<<"\n total:"<<total;
    cout<< "end1" <<"average:" <<avg;
    delete[] arr;
    return 0;

}