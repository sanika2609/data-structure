#include <iostream>
using namespace std;
int main() {
    int marks[5]={10,20,30,40,50};
    cout<<sizeof(marks)<<endl;
    cout<<sizeof(marks)/sizeof(int)<<endl;
    return 0;
}