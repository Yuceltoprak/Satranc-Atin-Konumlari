#include<stdio.h>

void athamle( int[][8] , int , int);


int main(){
	//8 e 8 matris oluþturuldu..
	int tahta[8][8];
	
	//her alanýna 0 atandý..
	
	int i,j;
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
			tahta[i][j]=0;
			
	srand(time(NULL));   

	int r,k;
	r=rand()%8;
	k=rand()%8;



athamle(tahta,r,k);


//yazdir...
		for(i=0;i<8;i++){
			for(j=0;j<8;j++)
			printf("%d",tahta[i][j]);
			printf("\n");
		}
		
		printf("\natin konumu %d %d",r+1,k+1);
    }




void athamle(int tahta[][8],int x,int y){

//at
tahta[x][y]=2;

//sag sað üst
if((x-1)>=0 && y+2<8)
tahta[x-1][y+2]=1;

//sað sað alt
if((x+1)<8 && y+2<8)
tahta[x+1][y+2]=1;

//sol sol üst
if((x-1)>=0 && y-2>=0)
tahta[x-1][y-2]=1;

//sol sol alt
if((x+1)>=0 && y-2>=0)
tahta[x+1][y-2]=1;

//üst üst sað
if((x-2)>=0 && y+1<8)
tahta[x-2][y+1]=1;

//üst üst sol
if((x-2)>=0 && y-1>=0)
tahta[x-2][y-1]=1;


//alt alt sað
if((x+2)<8 && y+1<8)
tahta[x+2][y+1]=1;

//alt alt sol
if((x+2)<8 && y-1>=0)
tahta[x+2][y-1]=1;
	
}
