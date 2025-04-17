#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,6,7,8};
    int key=8;
    int ans=-1;
    for(int i=0;i<5;i++){
        if(array[i]==key)
        ans=i;
    }
    cout<<ans;
    return 0;
}