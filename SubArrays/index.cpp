#include <iostream>

using namespace std;
 // Code to generate all possible sub Arrays of an array
int main(){
    int A [4] ={1,2,3,4};
    int len = sizeof(A)/sizeof(A[0]);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            for(int k=i;k<=j;k++){
                cout<<A[k]<< " ";
            }
            cout<<endl;
        }
    }
}