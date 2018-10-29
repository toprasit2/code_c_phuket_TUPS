// Description
// จงเขียนฟังก์ชัน หาค่าน้อยที่สุดในอาร์เรย์ 
// ใช้โครงร่างโปรแกรมนี้ และเขียนโปรแกรมให้สมบูรณ์
// #include 
// #define MAX 50
// int fmin(int x[], int n);
// int main()
// {  int nums[MAX], n, i;    
//    scanf("%d",&n);   
//    for(i=0; i<n; i++) scanf("%d", &nums[i]);   
//    printf("%d", fmin(nums,n) );   
//    return 0; 
// }


// Input
// จำนวนเต็มตัวแรก (n) คือ จำนวนข้อมูลของอาร์เรย์ (n<=50) 
// และ มีข้อมูลตามมาอีก n จำนวน คือข้อมูลของสมาชิกของอาร์เรย์

// Output
// แสดงค่าที่น้อยที่สุดของอาร์เรย์

// Hint

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int fmin(int x[], int n);

int main()
{  int nums[MAX], n, i;    
   scanf("%d",&n);   
   for(i=0; i<n; i++) scanf("%d", &nums[i]);   
   printf("%d", fmin(nums,n) );   
    exit(EXIT_SUCCESS);
}

int fmin(int x[], int n){
    int min = x[0];
    for(int i=0; i<n; i++)
        if(min > x[i])
            min = x[i];
    return min;
}