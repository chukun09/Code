#include<stdio.h>
#include<string.h>
int n = 0 ;
char ds[30000][30], tg[30];
void bosung();
void sapxep();
void inds();
int main(){
    char ch;
    while(1){
        system("cls");
        printf("\n CHUONG TRINH QUAN LY SINH VIEN ");
        printf("\n 1. BO SUNG DANH SACH ");
        printf("\n 2. sap xep theo ABC ");
        printf("\n 3.In danh sach ");
        printf("\n Bam 1-3 de chon, phim khac de ket thuc ");
        ch = getch();
        if(ch=='1'){
            bosung();
        }
        else if(ch == '2') sapxep();
        else if(ch == '3') inds();
        else {
            printf("\n Chan roi a > Y/.....");
                    ch = getch();
        if(ch =='y'||ch =='Y') break;
        }

    }
}
void bosung(){
    while(n<30000){
        printf("\n Nhap vao ho va ten sv thu %d : ",n+1);
        gets(ds[n]);
        if(ds[n][0] == '\0') break;
        n++;
    }
}
void inds(){
    int i;
    printf("\n     Danh sách sinh viên \n");
    for( i=0; i<n; i++){
        puts(ds[i]);
    }
    getch();
}
void sapxep(){
    int k, i, j;
    for(i = 0; i<n-1;i++){
        k =i;
        for(j = i+1; j<n;j++){
            if(stricmp(ds[k], ds[j]) > 0 ){
                k = j;
            }
            if(k!= i){
                strcpy(tg,ds[i]);
                strcpy(ds[i], ds[k]);
                strcpy(ds[k], tg);
            }
        }
    }
    printf("\n Da sap xep xong !");
    getch();
}