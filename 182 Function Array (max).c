// Description
// จงเขียนฟังก์ชัน หาค่าน้อยที่สุดในอาร์เรย์ 
// ใช้โครงร่างโปรแกรมนี้ และเขียนโปรแกรมให้สมบูรณ์
// #include 
// #define MAX 50
// int fmax(int x[], int n);
// int main()
// {  int nums[MAX], n, i, mx;    
//    scanf("%d",&n);   
//    for(i=0; i<n; i++) scanf("%d", &nums[i]); 
//    mx = _____ 
//    printf("%d", mx );   
//    return 0; 
// }

// Input
// จำนวนเต็มตัวแรก (n) คือ จำนวนข้อมูลของอาร์เรย์ (n<=50) 
// และ มีข้อมูลตามมาอีก n จำนวน คือข้อมูลของสมาชิกของอาร์เรย์

// Output
// แสดงค่าที่มากที่สุดของอาร์เรย์

// Hint

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int fmax(int x[], int n);

int main()
{  int nums[MAX], n, i, mx;    
   scanf("%d",&n);   
   for(i=0; i<n; i++) scanf("%d", &nums[i]); 
   mx = fmax(nums, n);
   printf("%d", mx );
    exit(EXIT_SUCCESS);
}

int fmax(int x[], int n){
    int max = x[0];
    for(int i=0; i<n; i++)
        if(max < x[i])
            max = x[i];
    return max;
}