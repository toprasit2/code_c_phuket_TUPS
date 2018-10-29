// Description
// จงเขียนโปรแกรมสำหรับคำนวณผลรวมของจำนวนเต็มจาก a ถึง b เช่น ผลรวมจาก 10 ถึง 15 = 10 +11 +12 + 13 +14 +15 = 75 เป็นต้น
// กำหนดให้ มีการสร้าง  int    sumRange(int a, int b)  สำหรับการคำนวณค่าผลลัพธ์  

// จงเขียนโปรแกรม ให้สมบูรณ์ (โดยใช้โครงร่างนี้)

// #inlclude <stdio.h> 
// int sumRange(int a, int b);
// int main(){   
//     int a, b;  
//     scanf("%d%d", &a, &b);   
//     printf("%d", sumRange(a, b) ); 
//     return 0;
// }

// Input
// จำนวนเต็มสองค่า คือค่า a และ b ตามลำดับ

// Output
// ผลรวมจำนวนเต็มจาก a ถึง b

// Hint

#include <stdio.h>
#include <stdlib.h>

int sumRange(int a, int b);

int main(){   
    int a, b;  
    scanf("%d%d", &a, &b);   
    printf("%d", sumRange(a, b) ); 
    exit(EXIT_SUCCESS);
}

int sumRange(int a, int b){
    int sum = 0;
    for(int i=a; i<=b; i++){
        sum+=i;
    }
    return sum;
}