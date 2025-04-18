#include<iostream>
using namespace std;
int main(){
    int array[]={3,5,8,12,23};
    int max=array[0];
    for(int i=1;i<5;i++){
        if(array[i]>max)
        max=array[i];
    }
    cout<<"Max="<<max;
    return 0;
}