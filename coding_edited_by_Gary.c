#include <stdio.h>
#include <math.h>
int main() {
    int ROI[100];
    int i,n,N,b,max,min,avg;
    float a=1.00,c,d;
    scanf("%d",&n);
    scanf("%d",&N);
    for(i=0;i<n;i++){
    	scanf("%d", &ROI[i]);
	}
	for(i=0;i<n;i++){
		b=N;
		N = N*(1+ROI[i]/100.00)+0.5;
		if(i==0){
			max=N-b;
			min=N-b;
		}
		if (N-b>max){
			max=N-b;
		}
		if(N-b<min){
			min=N-b;
		}
		a=(1+ROI[i]/100.00)*a;
		printf("%d ",N);
	}
	d = 1.0/n;
	c=pow(a,d)*100;
	if(c>0){
		avg=c+0.5;
	}
	if(c<0){
		avg=c-0.5;
	}
	if(c==0){
	    avg=-100;
	}
    printf("\n%d\n",avg);
    printf("%d %d",max,min);
    return 0;
}
