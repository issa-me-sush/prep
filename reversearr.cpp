#include <iostream>
using namespace std;

void reversearray(int arr[],int size){

             
int temp;
for(int i=0;i<size/2;i++){
temp = arr[size-i-1];
arr[size-i-1] = arr[i];
arr[i]=temp;
// cout << arr[i];
}


}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6,7};

     int size= sizeof(arr)/sizeof(arr[0]);
    // Function calling
    reversearray(arr,size);
     
    cout << "Reversed array is" <<endl;

    printArray(arr,size);
     
    // To print the Reversed array
    
     
    return 0;
}