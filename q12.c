
#include <stdio.h>

int max(int a,int b){return a>b?a:b;}

int rob(int arr[], int n){
    int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);

    for(int i=2;i<n;i++)
        dp[i]=max(dp[i-1], dp[i-2]+arr[i]);

    return dp[n-1];
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    if(n==1){ printf("%d",arr[0]); return 0;}

    int a[n-1], b[n-1];
    for(int i=0;i<n-1;i++) a[i]=arr[i];
    for(int i=1;i<n;i++) b[i-1]=arr[i];

    int res = max(rob(a,n-1), rob(b,n-1));
    printf("%d",res);
}
