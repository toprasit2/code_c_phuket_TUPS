// Description
// โปรแกรมรับจำนวนเต็ม 3 ค่า แล้วตรวจสอบว่า มีจำนวนบวก Positive (ค่ามากกว่าหรือเท่ากับศูนย์) กี่ตัว มีจำนวนลบ Negative กี่ตัว มีเลขคู่ Even กี่ตัว และมีเลขคี่ Odd กี่ตัว

// Input
// จำนวนเต็ม 3 จำนวน เช่น 

// 12  3   45

// Output
// โปรแกรมนับจำนวนข้อมูลแต่ละประเภท แล้วพิมพ์ผลลัพธ์มี 4 บรรทัด ดังรูปแบบที่กำหนด 

// Positive: 3
// Negative: 0
// Even: 1
// Odd: 2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[3];
    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;
    int i;
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(i=0; i<3; i++){
        if(x[i]%2 == 0)
            even++;
        else
            odd++;
        if(x[i] >= 0)
            positive++;
        else
            negative++;
    }
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Even: %d\n", even);
    printf("Odd: %d", odd);
    
    

    exit(EXIT_SUCCESS);
}