// Description
// โปรแกรมตรวจสอบภาวะความดันโลหิต(blood pressure) ของผู้ป่วย โดยรับค่าอายุ(age) ความดันโลหิตตัวล่าง(low) และ ความดันโลหิตตัวบน(high) โดยมีสถานะดังนี้ 
// Hypertension (ภาวะความดันโลหิตสูง) เมื่อ ค่าความดันโลหิตตัวบนเกินกว่าผลบวกของ 100+อายุ  หรือ ความดันโลหิตตัวล่างเกินกว่า 90 
// Hypotension (ภาวะความดันโลหิตต่ำ) เมื่อ ค่าความดันโลหิตตัวบนต่ำกว่า 90  หรือ ความดันโลหิตตัวล่างต่ำกว่า 60
// ความดันนอกจากนี้  ถือว่าอยู่ในภาวะปกติ Normal 

// ให้สร้างฟังก์ชัน void  statusBP(int age, int low, int high) เพื่อตรวจสอบและพิมพ์สถานะตามเงื่อนไขดังกล่าว
// จงเขียนโปรแกรมให้สมบูรณ์ ดังโครงร่างโปรแกรมนี้ 
// #include 
// void statusBP(int age, int low, int high);
// int main(){   
//   int age, low, high;    
//    //input age, low and high blood pressure 
//    scanf("%d %d %d", &age, &low, &high);  
//    statusBP(age, low, high); 
//    return 0;
// }

// Input
// จำนวนเต็ม 3 ค่า คือ age low และ high ตามลำดับ

// Output
// สถานะความดันโลหิตของผู้ป่วย Hypertension หรือ Hypotension หรือ Normal

#include <stdio.h>
#include <stdlib.h>

void statusBP(int age, int low, int high);

int main(){   
  int age, low, high;    
  //input age, low and high blood pressure 
  scanf("%d %d %d", &age, &low, &high);  
  statusBP(age, low, high);
  exit(EXIT_SUCCESS);
}

void statusBP(int age, int low, int high){
    if(high > 100+age || low > 90)
        printf("Hypertension");
    else if(high < 90 || low < 60)
        printf("Hypotension");
    else
        printf("Normal");
}