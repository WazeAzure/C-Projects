#include <stdio.h>

int main(){
	int n,x,y;
	scanf("%d", &n);

	int arr[n][3];
	for(int i=0;i<n;i++){
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		while(arr[i][0] != arr[i][1] && arr[i][0] < arr[i][1]){
			arr[i][0] += 7;
			arr[i][1] -= 5;
			if(arr[i][0] == arr[i][1]){
				arr[i][2] = arr[i][0];
			} else {
				arr[i][2] = 0;
			}
		}
	}
	for(int j=0;j<n;j++){
		if(arr[j][2] == 0){
			printf("Case #%d: impossible\n", j+1);
		} else {
			printf("Case #%d: %d\n", j+1, arr[j][2]);
		}
	}
	return 0;
}
