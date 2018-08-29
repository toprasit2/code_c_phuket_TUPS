// Description
// จงเขียนโปรแกรมคำนวณ เกรดเฉลี่ย (Grade Point Average) ของนักศึกษาคนหนึ่ง โดยกำหนดให้มีวิชาเรียน 5 วิชา และมีเกรดเป็น A,B,C,D,E โดยมีค่าน้ำหนักเป็น 4,3,2,1 และ 0 ตามลำดับ 

// Input
// อินพุตมี 5 บรรทัด แต่ละบรรทัด มี 2 ข้อมูล คือ จำนวนหน่วยกิต (ตัวเลขจำนวนเต็ม เช่น 1, 2, 3) และ เกรด (เป็นตัวอักษรเดี่ยว A,B,C,D หรือ E)  เช่น
// 2   A
// 2   A
// 2   B
// 3   A
// 3   A

// Output
// ผลลัพธ์ คือ ค่า GPA ซึ่งแสดงเป็นเลขทศนิยม 2 ตำแหน่ง เช่น 
// 3.83

// Hint
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5], point;
    int i, sum_n = 0;
    char g[5];
    float gpa=0;
    for(i=0; i<5; i++){
        scanf("%d %c", &n[i], &g[i]);
        switch(g[i]){
            case 'A': point =4; break;
            case 'B': point =3; break;
            case 'C': point =2; break;
            case 'D': point =1; break;
            case 'E': point =0; break;
        }
        gpa+=(point*n[i]);
        sum_n+=n[i];
    }
    printf("%.2f", gpa/sum_n);
    exit(EXIT_SUCCESS);
}