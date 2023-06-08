#include <iostream>
#include <limits.h>

using namespace std;

int findmaxno(int arr[][30],int rows,int cols){
    int maxi=INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

int main(){
    int rows, cols;
    cout<<"Enter the no of rows:-";
    cin>>rows;
    cout<<"Enter the no of columns:-";
    cin>>cols;

    int arr[30][30];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=findmaxno(arr,rows,cols);
    cout<<"The maximum no. is:-"<<max;

    return 0;

}