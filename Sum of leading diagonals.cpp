#include <iostream>

using namespace std;

int main()
{
    int arr[10][10],sum=0,i,j;
    cout<<"Enter the matrix elements";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum+=arr[i][i];
            }
        }
    }
    cout<<"\nThe sum is: "<<sum;
    return 0;
}
