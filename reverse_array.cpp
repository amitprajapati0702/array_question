#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
      int start = 0 ; 
      int end = n-1;
      
      for(int i = 0 ; i<n ;i++){
          if(start<=end){
           swap(arr[start],arr[end]);
           start++;
           end--;
          }
      }

}

int main(){

     int arr[5]={5,8,2,4,10};
     int n = 5 ;
      reversearray(arr,n);

      for(int i = 0 ; i<n ; i++){
         cout<<   arr[i] << " ";
      }
}