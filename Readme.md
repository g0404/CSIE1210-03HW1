## 說明 ##
輸入一整數 n 代表經歷年份(`0<n<=100`)  
接著輸入一整數 N 代表初始資本額 (`0<N<=1000000`)  
最後依序輸入 n 個**整數**為每年的投資報酬率ROI(%) (`-100<=ROI<=100`)，並  

1. 利用 $ \sqrt[n]{ROI_1ROI_2...ROI_N} $ 求出幾何平均**投資報酬率**(%)，需四捨五入至**整數位**  
2. 依序印出**每年結算的資本額**，每年結算時，資本皆需四捨五入至**整數位**  
3. 印出**最大獲利** **(若皆無獲利則求最小虧損)** 與 **最大虧損** **(若皆無虧損則求最小獲利)**  


## Input Format ##
第一行為一整數 n 代表經歷年份(`0<n<=100`)  
第二行為一整數 N 代表初始資本額(`0<N<=1000000`)  
第三行為 n 個**整數**代表每年的投資報酬率ROI(`-100<=ROI<=100`)，每個數值以空白間隔 : $ROI_1$ $ROI_2$ $ROI_3$ $...$ $ROI_N$ 
## Output Format ##
每年的資本額  
幾何平均投資報酬率  
最大獲利與最大虧損 (若皆無虧損則求最小獲利)
## Sample Input ##
```
6
100000
5 10 13 -2 -10 -20
```
## Sample Output ##
```
105000 115500 130515 127905 115115 92092
-8
15015 -23023
```
-5 -10 -50 -1 -2 -3 -6 -5 -9 -10