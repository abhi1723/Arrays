#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A[] ={-4,1,3,-2,6,2,-1,-4,-7};
    int cs=0,ms=0;
    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        cs = cs+ A[i];
        if(cs<0){
            cs=0;
        }
        ms = max(cs,ms);
    }
    cout<< " The max sum of any given sub array in the given array is "<<ms;
    return 0;
}