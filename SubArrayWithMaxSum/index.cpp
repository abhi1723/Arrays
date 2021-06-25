#include<iostream>

using namespace std;
int printSumOfArray(int *A,int len);
int main(){
    int A[] ={-4,1,3,-2,6,2,-1,-4,-7};
    int CS[9];
    CS[0]=A[0];
    int len =sizeof(A)/sizeof(A[0]);
    int maxSum =-9999;
    int left=0,right =0;
    for(int i=1;i<len;i++){
        CS[i]=CS[i-1]+A[i];
    }
    for(int i=1;i<len;i++){
        for(int j=0;j<i;j++){
            int currentSum = CS[i]-CS[j];
            if(currentSum>maxSum){
                maxSum=currentSum;
                right = i;
                left =j;
            }
        }
    }
    cout<<"Maximum sum of a subarray in the given array is "<<maxSum<<endl;
    cout<<"The range of this sub array is "<<left<<" to "<<right<<endl;
    return 0;
}
int printSumOfArray(int *A,int len){
    int sum = 0;
    for(int i=0;i<len;i++){
        sum+=A[i];
    }
    return sum;
}