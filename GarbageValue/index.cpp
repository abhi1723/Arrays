#include <iostream>

using namespace std;
int main(){
    int A[10];
    /* When we do not assign values to an array but attempt to print it , we get garbage values */
    for(int i=0;i<=9;i++){
        cout<<A[i]<<endl;
    }
    return 0;
}