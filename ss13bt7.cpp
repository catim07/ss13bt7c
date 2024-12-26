#include<stdio.h>
#define maxhang 100
#define maxcot 100
void input(int hang,int cot,int array[maxhang][maxcot]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("moi ban nhap array[%d][%d]=",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
}
void printfValue(int hang,int cot,int array[maxhang][maxcot]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int hang,cot;
	printf("moi ban nhap so hang: ");
	scanf("%d",&hang);
	printf("moi ban nhap so cot: ");
	scanf("%d",&cot);
	int array[maxhang][maxcot];
	input(hang,cot,array);
	printfValue(hang,cot,array);
	return 0;
	
}
