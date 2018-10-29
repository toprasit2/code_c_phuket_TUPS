// Pascal's Triangle สามเหลี่ยมปาสคาล คือ ชุดตัวเลขจำนวนเต็มบวกที่มีลำดับและความสัมพันธ์กัน สามารถเขียนแสดงเป็นรูป

// สามเหลี่ยม วิธีการคำนวณทำได้หลายวิธี วิธีการหนึ่งแสดงดังรูป

// Pic Pascal 

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1 
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

// สามเหลี่ยมปาสคาล เริ่มต้นด้วยจุดยอดของสามเหลี่ยม มีค่าเป็น 1 และแถวต่อมา เพิ่มจำนวนแถวละหนึ่งจำนวน ไปเรื่อยๆ แถวที่ n จะมี n จำนวน หรือ n หลัก 
// สมมุติข้อมูล P[ i ][ j ] คือตัวเลขแถวที่ i หลักที่ j มีวิธีการคำนวณดังนี้ 
// - ตัวเลขหลักแรกและหลักสุดท้ายของแถวมีค่าเป็น 1 เสมอ นั่นคือเมื่อ j=1 หรือ j=i หรือ 
//             P[ i ][ 1 ] = 1 และ P[ i ][ i ] = 1
// - เมื่อ i>1 ตัวเลขหลักที่ j ของ แถวที่ i ได้จากผลบวกของสองค่าข้างบน นั่นคือจากแถวที่ i-1 ในหลักที่ j-1 และ j หรือ 

//             P[ i ][ j ] = P[ i-1 ][ j-1 ] + P[ i-1 ][ j ]

// Input
// จำนวนเต็มบวก ค่า n ซึ่งเป็นตัวกำหนดจำนวนแถวของสามเหลี่ยมปาสคาล ที่จะแสดง (n จะมีค่าไม่เกิน 15)

// Output
// แสดงสามเหลี่ยมปาสคาล จำนวน n แถว เช่น 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i,j;
    
    int pascal[n][n];
    pascal[0][0] = 1;
    printf("%d\n",pascal[0][0]);
    for(i=1; i<n; i++){
        for(j=0; j<=i; j++){
            if(j==0 || j==i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
            printf("%d\t", pascal[i][j]);
        }
        printf("\n");
    }
    
    
    exit(EXIT_SUCCESS);
}