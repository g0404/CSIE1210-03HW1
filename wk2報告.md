<script type="text/javascript" 
  src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({ tex2jax: {inlineMath: [['$', '$']]}, messageStyle: "none" });
</script>
# Problem - 題目敘述 #
## 說明 ##
輸入一整數 n 代表經歷年份(`0<n<=100`)  
接著輸入一整數 N 代表初始資本額 (`0<N<=1000000`)  
最後依序輸入 n 個**整數**為每年的投資報酬率ROI(%) (`-100<=ROI<=100`)，並  

1. 依序印出**每年結算的資本額**，每年結算時，資本皆需重新四捨五入至**整數位**  
2. 利用 $ \sqrt[n]{(1+ROI_1)(1+ROI_2)...(1+ROI_N)}-1 $ 求出**幾何平均投資報酬率**(%)，需四捨五入至**整數位**  

3. 印出**最大獲利** **(若皆無獲利則求最小虧損)** 與 **最大虧損** **(若皆無虧損則求最小獲利)**  


## Input Format ##
第一行為一整數 n 代表經歷年份(`0<n<=100`)  
第二行為一整數 N 代表初始資本額(`0<N<=1000000`)  
第三行為 n 個**整數**代表每年的投資報酬率ROI(`-100<=ROI<=100`)，每個數值以空白間隔 :  
$ROI_1$ $ROI_2$ $ROI_3$ $...$ $ROI_N$ 
## Output Format ##
每年的資本額  
幾何平均投資報酬率  
最大獲利 **(若皆無獲利則求最小虧損)** 與 最大虧損 **(若皆無虧損則求最小獲利)**
## Sample Input ##
```
6
100000
5 10 13 -2 -10 -20
```
## Sample Output ##
```
105000 115500 130515 127905 115115 92092
-1
15015 -23023
```
<br>
<br>
<br>

# Solution - 解題思路 #
主要透過建立for迴圈來應對陣列式的數值輸入並進行陣列的數值運算，並利用if-else函數來判斷值與值的相對大小以及處理條件式的輸出，最後利用pow()來尋找幾何平均數。

# Code - 解法/語法 #
``` c
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
	c=(pow(a,d)-1)*100;
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
```
# TestData - 測資設計 #
### Input ###
- 1.in  
	1  
	100000  
	-100  
- 2.in  
	6  
	3000  
	30 20 -60 20 80 -50  
- 3.in  
	6  
	10000  
	20 -25 60 -15 70 -30  
- 4.in  
	9  
	100000  
	10 60 -20 40 -60 20 30 -50 10  

### Output ###
- 1.out  
	0  
	-100  
	-100000 -100000  
- 2.out  
	3900 4680 1872 2246 4043 2022   
	-6  
	1797 -2808  
- 3.out  
	12000 9000 14400 12240 20808 14566  
	6  
	8568 -6242  
- 4.out  
	110000 176000 140800 197120 78848 94618 123003 61502 67652  
	-4  
	66000 -118272  
<br>
<br>
<br>
<br>
<br>

# Teamwork - 團隊分工情況 # 
- B09501097 丁俊瑋  
    題目設計、報告統整、Coding debug
- B09401149 闕榮村  
    測資設計與調整
- 陳子弘  
    Coding、解法思考  
# Reference - 參考資料與資料收集統整 #
1. 利用C語言計算複利 : https://www.twblogs.net/a/5d4e3521bd9eee5327fc72a1
2. 利用C語言計算幾何平均數 : https://www.796t.com/post/NndnNg==.html
3. C語言如何四捨五入 : https://www.796t.com/content/1548205041.html

