// Description
// จงเขียนฟังก์ชัน แก้ไขข้อความ ให้กลายเป็นตัวอักษรพิมพ์เล็ก(lower-case) ทั้งหมด

// ให้ใช้โครงร่างโปรแกรมนี้ และเขียนโปรแกรมให้สมบูรณ์

// #include 
// #include 
// void lower(char str[]);
// int main()
// { char message[100]; 
// gets(message); 
// lower(message); 
// printf("%s", message); 
// return 0; 
// }

// Input
// โปรแกรมรับข้อความหนึ่งบรรทัด

// Output
// แปลงข้อความให้กลายเป็นตัวอักษรพิมพ์เล็กทั้งหมด (ตัวอักษรที่ไม่ใช่ aA-zZ ยังคงเดิม) 

// Hint

#include <stdio.h>
#include <stdlib.h>

void lower(char str[]);

int main()
{ 
    char message[100]; 
    gets(message); 
    lower(message); 
    printf("%s", message);
    exit(EXIT_SUCCESS);
}

void lower(char str[]){
    for(int i=0; str[i] != '\0'; i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]-='A'-'a';
}