/*as like in c language c++ also has either one dimensinal array or two dimensional array
so here we got the example of one dimesional array*/
// C++ program to illustrate the traversal
// of the array
#include "iostream" //we found new method of pointing the header file here
using namespace std;
  
// Function to illustrate traversal in arr[]
void traverseArray(int arr[], int N)
{
  
    // Iterate from [1, N-1] and print
    // the element at that index
    for (int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
}
  
// Driver Code
int main()
{
  
    // Given array
    int arr[] = { 1, 2, 3, 4 };
  
    // Size of the array
    int N = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    traverseArray(arr, N);
}
