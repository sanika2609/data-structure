#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    for(int ind=0;ind<size;ind++){
        cout<<array[ind]<<endl;
    }
}
