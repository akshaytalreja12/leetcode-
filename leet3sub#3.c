#include <stdio.h>

void rotate(int row,int col,int arr[][col]){
int i,j,y=0;
int temp=0;
for(i=0;i<row;i++){
	for(j=i+1;j<col;j++){
		 temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
	}
	
}	
temp=0;
for(i=0;i<row;i++){
	for(j=0;j<col/2;j++){
		 temp =arr[i][j];
		arr[i][j]=arr[i][col-j-1];
		arr[i][col-j-1]=temp;
	}
}	

for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		printf("%d ",arr[i][j]);
	}
	printf("\n");
	
}	
}

int main(){
	int x,y,i,j;
	scanf("%d %d",&x,&y);
	int arr[x][y];
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	if (x==y){
		rotate(x,y,arr);
	}
	return 0;
}
