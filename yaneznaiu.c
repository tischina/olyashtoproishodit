#include <stdio.h>
 
#define H 5
#define W 4


int main(){
    int matrix[H][W] = {
        {4,3,7,-1},
        {2,7,4,0},
        {3,7,1,-12},
        {-4, 3, 10,15},
        {-20, 25,0,14}
    };
 

int i,j;     

for(i=0;i<H;++i){
    for(j=0;j<W;++j){
printf(" ");
printf("%d",matrix[i][j]);
    }
printf("\n");
}
printf("\n");
 

int sum[H] = {0}; 
int tmp;
for(i=0;i<H;i++){
    for(j=0;j<W;j++){
        if((matrix[i][j]>=0)&&(matrix[i][j]%2==0))sum[i]+=matrix[i][j]; 
    }
 
 
}
 

for(i=0;i<H-1;i++){
    for(j=i+1;j<H;j++){
        if(sum[j]<sum[i]){
        
        tmp  = sum[i];
        sum[i]=sum[j];
        sum[j]=tmp;
 
        int index;
        for(index=0;index<W;index++){
        tmp = matrix[i][index];
        matrix[i][index]=matrix[j][index];
        matrix[j][index]=tmp;
        }
 
        }
    }
}
 
 
printf("\n");
for(i=0;i<H;++i){
    for(j=0;j<W;++j){
printf(" ");
printf("%d",matrix[i][j]);
    }
printf("\n");
}
 
return 0;
}
