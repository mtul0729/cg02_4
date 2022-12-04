#include <stdio.h>

int main() {
    char a[100];
    int len=0;
    scanf("%s",a);
    while (a[len]!=0)len++;
    int i,j;
    /*for (i = 0; i < len-1; ++i) {//sort
        k=i;
        for (j = i+1; j < len;j++) {
            if(a[j]<a[k])k=j;
            else if(a[j]==a[k])a[j]=0;
        }
        if(k!=i){t=a[k];a[k]=a[i];a[i]=t;}
    }*/
    int cnt=0;
    for (i = 0;i  < len-1; i++) {
        for (j = 0;j < len-i-1;j++) {
            if(a[j]>a[j+1]){
                char t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            } else if(a[j]!=0&&a[j]==a[j+1]){a[j]=0;cnt++;}
        }
    }
    for (int l = cnt; l < len; ++l) {
        printf("%c",a[l]);
    }
    return 0;
}
