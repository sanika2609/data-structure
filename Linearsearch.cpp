#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,10};
    int size=9;
    int target=10;
    
    cout<<LinearSearch(arr,size,target)<<endl;
    return 0;
}
