#include <iostream>
using namespace std;
int main()

{
	const int SIZE=100;
    int arr[SIZE];
    int i, max, min, size;
    
    cout<<"Enter size of the array: ";
    cin>>size;
    
    cout<<"Enter "<<size <<" elements in the array: ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    
    max = arr[0];
    min = arr[0];
    
    for(i=1; i<size; i++)
    {
    
        if(arr[i] > max)
            max = arr[i];
        
        if(arr[i] < min)
            min = arr[i];
    }
    
    cout<<"Maximum element =" << max <<endl;
    cout<<"Minimum element =" << min<<endl;
    return 0;

}

