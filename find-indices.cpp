#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int find_index(int A[],int size,int x,int output[]){
    if(size==0){
        return -1;
    }
    if(A[0]==x){
        return ;
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    int *indices=find_index(arr,n,ele);
    for(int i=0;i<strlen(indices);i++){

    }
    return 0;
}