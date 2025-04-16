#include <iostream>
using namespace std;
int main(){
    char vowels[5];
   for(char &element:vowels){
       cin>>element;
   }
    for(int ind=0;ind<5;ind++){
        cout<<vowels[ind]<<" ";
    }
}
    