#include <iostream>
using namespace std;
int main() {
    int nums[]={10,24,25,15,34,-12};
    int size=6;
    int INT_MAX;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++)
    {
        smallest= min (nums[i],smallest);
    
    }
    cout<<smallest;
    
    return 0;
}