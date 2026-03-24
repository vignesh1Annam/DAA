
#include <stdio.h>

int main(){
    int m,n,N,i,j;
    scanf("%d %d %d %d %d",&m,&n,&N,&i,&j);

    int dp[50][50]={0};
    dp[i][j]=1;

    int count=0;

    for(int step=0;step<N;step++){
        int temp[50][50]={0};
        for(int x=0;x<m;x++){
            for(int y=0;y<n;y++){
                if(dp[x][y]>0){
                    int val=dp[x][y];
                    if(x==0) count+=val;
                    else temp[x-1][y]+=val;
                    if(x==m-1) count+=val;
                    else temp[x+1][y]+=val;
                    if(y==0) count+=val;
                    else temp[x][y-1]+=val;
                    if(y==n-1) count+=val;
                    else temp[x][y+1]+=val;
                }
            }
        }
        for(int x=0;x<m;x++)
            for(int y=0;y<n;y++)
                dp[x][y]=temp[x][y];
    }

    printf("%d",count);
}
