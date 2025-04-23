#include<iostream>
using namespace std;

int main(){

    int arr [] = {7,7,7,7,7,7};
    int n = 6;
    int max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int smax = 0;
    for(int i =0;i<n;i++){
        if(arr[i]<max && arr[i]>smax&&arr[i]!=max){
            smax = arr[i];
        }
    }
    

    cerr<<"Maximum element in array is "<<max<<endl;
    cerr<<"the second largest element is "<<smax<<endl;
}