#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n){
    for(int i = 0 ; i<n; i++){
            cout<<arr[i]<<" ";
        }
}

void ZeroToLast(int arr[] , int n ){
     int j = 0;
            for(int i = 0 ; i<n; i++){
                    if(arr[i]!=0){
                            swap(arr[i] , arr[j++]);
        }
       
    }

}

int main(){
    int arr[6] = {0,0,0,0,0,0};
    int n = 6;
    ZeroToLast(arr,n);
    PrintArray(arr , n);
}