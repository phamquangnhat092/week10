#include<stdio.h>
int main(){
    int n,i,a[100];
    int count = 0;
    int count1 = 0;
    int tmp = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i] == 0){
            count1 ++;
        }
    }
    for(i=0;i<n;i++){
        if(a[i] == 0){
            count++;
        }
        if(a[i] != 0){
            if(tmp < count){
                tmp = count;
                count = 0;
            }
        }
    }
    printf("%d", count1);
    printf("%d",tmp);
    return 0;
}
