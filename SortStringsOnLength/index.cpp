#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
bool compare(string a, string b){
    return a.length()>b.length();
}
void printArray(string *arr,int len);
int main(){
    string arr[] ={"Apple","Bannaanaaaaaaa","Pineapple","Mango","Guava"};
    sort(arr,arr+5,compare);
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
void printArray(string *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<endl;
    }
}