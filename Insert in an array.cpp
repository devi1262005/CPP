#include <iostream>

using namespace std;

int main()
{
    int arr[20],n,ind,ele,i;
    cout<<"Enter the number of the elemnts: ";
    cin>>n;
    cout<<"\nEnter the array elemnts: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the index of the element to be inserted: ";
    cin>>ind;
    cout<<"\nEnter the element to be inserted: ";
    cin>>ele;

    for (i=n;i>ind;i--) {
    arr[i]=arr[i-1];
    }

    arr[ind] = ele;

    n++;

    cout<<"\nThe final array is: ";
    for( i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
