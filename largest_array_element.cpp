#include <iostream>
using namespace std;
int main() {
    int nums[]={10,24,25,15,34,-12};
    int size=6;
     //int INT_MAX;
     int INT_MIN;
   // int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++)
    {
       // smallest= min (nums[i],smallest);
        largest= max (nums[i],largest);
    }
    
    //cout<<"smallest:"<<smallest<<endl;
    cout<<"largest:"<<largest;
    
    return 0;
}