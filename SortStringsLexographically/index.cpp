#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

void printArray(string *A,int len);
int main(){
    string arr[4] ={"Apple","Pineapple","Mango","Guava"};
    sort(arr,arr+4);
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
void printArray(string A[],int len){
    for(int i=0;i<len;i++){
        cout<<A[i]<<endl;
    }
}
