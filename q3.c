
#include <stdio.h>

int distinct(int arr[], int l, int r){
    int count=0;
    for(int i=l;i<=r;i++){
        int unique=1;
        for(int j=l;j<i;j++){
            if(arr[i]==arr[j]) unique=0;
        }
        if(unique) count++;
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int d = distinct(arr,i,j);
            sum += d*d;
        }
    }
    printf("%d",sum);
}
