#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
char a[20][52];
int main(){
    int d=0,game=0,h1,z1;
    char c,y1;
    char arr[10]={0},arr1[10]={0};
    FILE *fp;
    printf("/ / / M E N U / / /\n\n\n");
    printf("  Play \n\n\n  High Score \n\n\n  Credits \n\n\n  Quit");
    while (1){
        fflush(stdin);
        c=getche();

        system("cls");
        if (c=='o' && d==2){
            fp=fopen("score.txt","r");
                h1=0;
                while (fscanf(fp,"%c",&y1)!=EOF){
                    arr[h1]=y1;
                    h1++;
                    strcpy(arr1,arr);
                }
                z1=atoi(arr1);
                fclose(fp);
                printf("/ / /H I G H  S C O R E/ / /\n\n/ / / / / / %d / / / / / /",z1);
                printf("\n\n\n\n/ / Press any key to return to menu / /");
                d=0;
            continue;
        }
        if (c=='o' && d==1)
            game=1;
        if (c=='o' && d==4){
            system("cls");
            printf("/ / / E X I T / / /\n\n\nThanks for playing!");
            return 0;
        }
        if (c=='o' && d==3){
            d=0;
            system("cls");
            printf("/ / / C R E D I T S / / /\n");
            printf("\n\n  ~I m a m");
            printf("\n\n  ~M a s h r u r");
            printf("\n\n  ~R i s h a d");
            printf("\n\n\n\n/ / Press any key to return to menu / /");
            continue;
        }
        if (game!=1){
         printf("/ / / M E N U / / /\n\n\n");
        if (c=='w')
            d--;
        else if (c=='s')
            d++;
        if (d<1)
            d=4;
        else if (d>4)
            d=1;
       if (d==1){
        printf("=>PLAY \n\n\n  High Score \n\n\n  Credits \n\n\n  Quit");
       }
       else if (d==2){
        printf("  Play \n\n\n=>HIGH SCORE \n\n\n  Credits \n\n\n  Quit");
       }
       else if (d==3){
        printf("  Play \n\n\n  High Score \n\n\n=>CREDITS \n\n\n  Quit");
       }
       else if (d==4){
        printf("  Play \n\n\n  High Score \n\n\n  Credits \n\n\n=>QUIT");
       }
       continue;
        }

    //Menu ends here


    int i,j,p,q,r,m,n,a1,b1,a2,b2,k=0,dice=0,f=0,g=0,count=0,h,z,z1;
    char p1,p2,x,y,rc,ar[10]={0},ar1[10]={0};
    srand(time(NULL));

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
    a[19][j]='\0';
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

    n=0;
    for(i=1,j=36;n<17;i++){
        if(i==1){
            a[i][j]=' ';
            a[i][j+1]='*';
            a[i][j+2]='*';
            a[i][j+3]=' ';
            continue;
        }
        a[i][j]='{';
        a[i][j+3]='}';
        if(i%2!=0){
            a[i][j+1]=' ';
            a[i][j+2]=' ';
        }
        n++;
    }

    n=0;
    for(i=7,j=31;n<11;i++){
        if(i==7){
            a[i][j]=' ';
            a[i][j+1]='*';
            a[i][j+2]='*';
            a[i][j+3]=' ';
            continue;
        }
        a[i][j]='{';
        a[i][j+3]='}';
        if(i%2!=0){
            a[i][j+1]=' ';
            a[i][j+2]=' ';
        }
        n++;
    }

    n=0;
    for(i=3,j=1;n<11;i++){
        if(i==3){
            a[i][j]=' ';
            a[i][j+1]='*';
            a[i][j+2]='*';
            a[i][j+3]=' ';
            continue;
        }
        a[i][j]='{';
        a[i][j+3]='}';
        if(i%2!=0){
            a[i][j+1]=' ';
            a[i][j+2]=' ';
        }
        n++;
    }
    a[19][2]='A';
    a[19][3]='B';
    //Board making ends here
    i=19;j=2;p=19;q=3;m=0;n=0;
    p1='_';
    p2='_';
    print();
    k=1;
    while (k){
    if (k%2==1){
        a1=i;b1=j;

        printf("Player A roll your dice: \n");
        scanf("%c",&rc);
        r=rand()%6+1;
        if (f==0){
            if (r!=1){
                    k++;
            system("cls");
            print();
            printf("Player A Rolled %d\n\n",r);
            rolldice(r);
                continue;
            }
            else{
                f=1;
            }
        }
        if (i==1){
                if (j+r*5==52){
                a[i][j]='_';
                system("cls");
                print();
                printf("Player A Rolled %d\n",r);
                rolldice(r);
                printf("\nP L A Y E R << A >> W I N S ! !");
                count=(k+1)/2;
                system("cls");
                printf("P L A Y E R << A >> W I N S  I N  %d  M O V E S",count);
                fp=fopen("score.txt","r");
                h=0;
                while (fscanf(fp,"%c",&y)!=EOF){
                    ar[h]=y;
                    h++;
                    strcpy(ar1,ar);
                }
                z=atoi(ar1);
                fclose(fp);
                if(count<z){
                    printf("\n\nCONGRATULATIONS! YOU HAVE THE HIGHEST SCORE!");
                    z=count;
                }
                printf("\nHigh score %d",z);
                fp=fopen("score.txt","w");
                fprintf(fp,"%d",z);
                fclose(fp);
                break;
            }
            else if (j+r*5>52){
                system("cls");
                print();
                printf("Player A Rolled %d\n",r);
                rolldice(r);
                fflush(stdin);
                scanf("%c",&x);
                k++;
                continue;
            }
        }
        for (n=0;n<r;n++){
            j+=5;
            if (j>48){
                j=2;
                i-=2;
            }
        }
        a[a1][b1]=p1;

        //ladder and snake
        if (i==7 && j==42){
            i=3;j=47;
        }
        else if (i==15 && j==27){
            i=5;j=17;
        }
        else if (i==17 && j==7){
            i=13;j=12;
        }
        else if (i==3 && j==2){
            i=15;j=2;
        }
        else if (i==7 && j==32){
            i=19;j=32;
        }
        else if (i==1 && j==37){
            i=19;j=37;
        }
        p1=a[i][j];
        a[i][j]='A';
        system("cls");
        print();
        printf("Player A Rolled %d\n",r);
        rolldice(r);

        if(f==1){
            f=2;
            printf("\nPlayer A is on the board\n");
        }
        fflush(stdin);
        scanf("%c",&x);
    }
        //player 2
    else{
        a2=p;b2=q;

        printf("Player B roll your dice: \n");
        scanf("%c",&rc);
        r=rand()%6+1;
        if (g==0){
            if (r!=1){
                    k++;
            system("cls");
            print();
            printf("Player B Rolled %d\n\n",r);
            rolldice(r);
                continue;
            }
            else
                g=1;
        }
        if (p==1){
                if (q+r*5==53){
                a[p][q]='_';
                system("cls");
                print();
                printf("Player B Rolled %d\n",r);
                rolldice(r);
                printf("\nP L A Y E R << B >> W I N S ! !");
                count=(k+1)/2;
                system("cls");
                printf("P L A Y E R << B >> W I N S  I N  %d  M O V E S",count);

                fp=fopen("score.txt","r");
                h=0;
                while (fscanf(fp,"%c",&y)!=EOF){
                    ar[h]=y;
                    h++;
                    strcpy(ar1,ar);
                }
                z=atoi(ar1);
                fclose(fp);
                if(count<z){
                    z=count;
                    printf("\n\nCONGRATULATIONS! YOU HAVE THE HIGHEST SCORE!");
                }
                printf("\nHigh score %d",z);
                fp=fopen("score.txt","w");
                fprintf(fp,"%d",z);
                fclose(fp);
                break;
            }
            else if (q+r*5>53){
                system("cls");
                print();
                printf("Player B Rolled %d\n",r);
                rolldice(r);
                fflush(stdin);
                scanf("%c",&x);
                k++;
                continue;
            }
        }
        for (n=0;n<r;n++){
            q+=5;
            if (q>49){
                q=3;
                p-=2;
            }
        }
        a[a2][b2]=p2;
        if (p==7 && q==43){
            p=3;q=48;
        }
        else if (p==15 && q==28){
            p=5;q=18;
        }
        else if (p==17 && q==8){
            p=13;q=13;
        }
        else if (p==3 && q==3){
            p=15;q=3;
        }
        else if (p==7 && q==33){
            p=19;q=33;
        }
        else if (p==1 && q==38){
            p=19;q=38;
        }
        p2=a[p][q];
        a[p][q]='B';
        system("cls");
        print();
        printf("Player B Rolled %d\n",r);
        rolldice(r);
        fflush(stdin);
        if(g==1){
            g=2;
            printf("\nPlayer B is on the board\n");
        }
        scanf("%c",&x);
    }
    k++;
    }
    game=0;
    }
}
void print(){
    int i;
    for(i=0;i<50;i++){
        if(i%5==0)
            printf(" ");
        else
            printf("_");
    }
    printf("\n");
    puts(a);
}

int rolldice(int n){
    switch (n){
    case 6:
        printf(" _____\n|. . .|\n|. . .|\n|_____|");
        break;
    case 5:
        printf(" _____\n|. . .|\n| . . |\n|_____|");
        break;
    case 4:
        printf(" _____\n| . . |\n| . . |\n|_____|");
        break;
    case 3:
        printf(" _____\n| . . |\n|  .  |\n|_____|");
        break;
    case 2:
        printf(" _____\n|  .  |\n|  .  |\n|_____|");
        break;
    case 1:
        printf(" _____\n|     |\n|  .  |\n|_____|");
        break;
    }
    printf("\n");
}
