
#include <stdio.h>

int exists(int arr[], int n, int x){
    for(int i=0;i<n;i++) if(arr[i]==x) return 1;
    return 0;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],b[m];

    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);

    int c1=0,c2=0;

    for(int i=0;i<n;i++) if(exists(b,m,a[i])) c1++;
    for(int i=0;i<m;i++) if(exists(a,n,b[i])) c2++;

    printf("%d %d",c1,c2);
}
