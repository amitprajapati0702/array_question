#include<iostream>
using namespace std;

int rightside(int arr[],int n){
    //Playing two pointer game   
    int i = 0 ;
    for(int j = 0 ; j<n;j++){
        if(arr[j]!=0){
             swap(arr[i],arr[j]);
             i++;
        }
    }
}

int main(){
    int arr[5]={1,0,3,12,0};
    int n=5;

    rightside(arr,n);
    for(int i = 0 ; i<n;i++){
         cout << arr[i] << " ";
    }
}