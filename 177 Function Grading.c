// Description
// จงเขียนโปรแกรมสำหรับ ตัดเกรดตามค่าคะแนน ดังช่วงต่อไปนี้ 
//  คะแนน 0-49  เกรด E 
//  คะแนน 50-59 เกรด D
//  คะแนน 60-69 เกรด C 
//  คะแนน 70-79 เกรด B
//  คะแนน 80-100 เกรด A   
//    โปแกรมวนลูปรับค่าคะแนน แล้วแสดงค่าเกรดที่ได้ และจะหยุดเมื่อค่าคะแนนอยู่นอกช่วง 0-100 คะแนน 
// กำหนดให้ ในโปรแกรม มีฟังก์ชัน สำหรับการคิดเกรด ดังนี้  
//   char  grading(score s) เป็นฟังก์ชันคิดเกรด (ตัวอักษรเดี่ยว A-E) จากค่าคะแนน s
// จงเขียนโปรแกรม ให้สมบูรณ์ (โดยใช้โครงร่างนี้)

// #inlclude  
// // function prototype ต้นแบบของฟังก์ชัน
// char grading(int s);
// int main(){   
//     int score;  
//     scanf("%d", &score);   
//     // กำหนดเงืื่อนไข การวนลูปรับค่าคะแนนให้ถูกต้อง 
//     while ( ____  ) 
//    {  printf("%c\n", grading(score) );
//         scanf("%d", &score);
//     }
//     return 0;
// }

 

// Input
// ค่าคะแนนซึ่งเป็นจำนวนเต็ม จาก 0-100 ใส่ค่าคะแนนจำนวนหนึ่ง และค่าสุดท้ายเป็นค่า -1 เพื่อจบโปรแกรม  

// Output
// พิมพ์ค่าเกรด A-E ของแต่ละคะแนน บรรทัดละหนึ่งเกรด ตามลำดับ

// Hint

#include <stdio.h>
#include <stdlib.h>

char grading(int s);

int main(){   
    int score;  
    scanf("%d", &score); 
    while (score != -1 ) 
    {  
        printf("%c\n", grading(score) );
        scanf("%d", &score);
    }
    exit(EXIT_SUCCESS);
}
char grading(int s){
    if (s >= 0 && s<=49)return 'E';
    else if(s>=50 && s<=59)return 'D';
    else if(s>=60 && s<=69)return 'C';
    else if(s>=70 && s<=79)return 'B';
    else if(s>=80 && s<=100)return 'A';
}