// Description
// จงเขียนโปรแกรมคำนวณ เกรดเฉลี่ย (Grade Point Average) ของนักศึกษาคนหนึ่ง โดยกำหนดให้มีการกำหนดจำนวนวิชาเรียนในหนึ่งเทอม และ แต่ละวิชาจะมีเกรดเป็น A,B,C,D,E โดยมีค่าน้ำหนักเป็น 4,3,2,1 และ 0 ตามลำดับ 

// Input
// อินพุตตัวแรกคือค่า n หรือจำนวนวิชาในหนึ่งเทอม แล้วตามมาด้วยอินพุตอีก n บรรทัด แต่ละบรรทัด มี 2 ข้อมูล คือ จำนวนหน่วยกิต (ตัวเลขจำนวนเต็ม เช่น 1, 2, 3) และ เกรด (เป็นตัวอักษรเดี่ยว A,B,C,D หรือ E) เช่น

// 5
// 2 A
// 2 A
// 2 B
// 3 A
// 3 A

// Output
// ผลลัพธ์ คือ ค่า GPA ซึ่งแสดงเป็นเลขทศนิยม 2 ตำแหน่ง เช่น 

// 3.83 

 

// Hint
#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    int point, sumPoint = 0;
    char grade;
    int sumPointGrade = 0;
    float gpa;
    int i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %c", &point, &grade);
        sumPoint += point;
        switch(grade){
            case 'A': sumPointGrade+=(point*4); break;
            case 'B': sumPointGrade+=(point*3); break;
            case 'C': sumPointGrade+=(point*2); break;
            case 'D': sumPointGrade+=(point*1); break;
            case 'E': sumPointGrade+=(point*0); break;
        }
    }
    gpa = (float)sumPointGrade/sumPoint;
    printf("%.2f", gpa);
    exit(EXIT_SUCCESS);
}
