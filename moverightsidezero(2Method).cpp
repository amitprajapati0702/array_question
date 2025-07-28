#include<iostream>
using namespace std;
void move(int arr[],int n){
   
       for(int i = 0 ; i<n ; i++){
           for(int j = i+1; j<n;j++){
                if(arr[i]==0 && arr[j]!=0){
                     swap(arr[i],arr[j]);
                }
           }
       }
}

int main(){
    int arr[7]={2,0,4,0,6,0,8};
    int n=7;

    move(arr,n);
    for(int i = 0 ; i<n ; i++){
          cout << arr[i] << " ";
    }
}