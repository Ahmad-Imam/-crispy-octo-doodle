#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n;
    char a[20][52];
    for(i=0;i<50;i++){
        if(i%5==0)
            printf(" ");
        else
            printf("_");
    }
    printf("\n");
    for(i=19;i>=0;i--){
        for(j=0;j<51;j++){
            if(j%5==0)
                a[i][j]='|';
            else if(i%2!=0)
                a[i][j]='_';
            else if(j%5==1 || j%5==4)
                a[i][j]=' ';
            else if(j%5==2){
                if(j==48){
                    if(i==18)
                        a[i][j]=48;
                    else
                        a[i][j]=48+((19-i)/2+1);
                }
                else
                    a[i][j]=48+((19-i)/2);
                }
            else
                a[i][j]=48+((j+1)/5)%10;

        }
        a[i][j]='\n';
    }
    a[i-1][j]='\0';
    n=0;
    for(i=1,j=98;n<6;i++,j--){
        if(a[i][j]<'0' || a[i][j]>'9'){
            a[i][j]='/';
        }
        if(a[i][j+3]<'0' || a[i][j+3]>'9'){
            a[i][j+3]='/';
        }
        n++;
    }
    n=0;
    for(i=12,j=11;n<6;i++,j--){
        if(a[i][j]<'0' || a[i][j]>'9'){
            a[i][j]='/';
        }
        if(a[i][j+3]<'0' || a[i][j+3]>'9'){
            a[i][j+3]='/';
        }
        n++;
    }

    n=0;
    for(i=4,j=16;n<12;i++,j++){
        if(a[i][j]<'0' || a[i][j]>'9'){
            a[i][j]='\\';
        }
        if(a[i][j+3]<'0' || a[i][j+3]>'9'){
            a[i][j+3]='\\';
        }
        n++;
    }
    puts(a);
}

