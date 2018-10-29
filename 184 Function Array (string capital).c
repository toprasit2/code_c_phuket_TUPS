// Description
// จงเขียนฟังก์ชัน แก้ไขข้อความ ให้กลายเป็นตัวอักษรพิมพ์ใหญ่ทั้งหมด 

// ให้ใช้โครงร่างโปรแกรมนี้ และเขียนโปรแกรมให้สมบูรณ์

// #include <stdio.h>
// #include <string.h>
// void capitalize(char str[]);
// int main()
// {  char message[100];    
//     gets(message);   
//     capitalize(message);   
//     printf("%s", message);   
//    return 0; 
// }

 

// Input
// โปรแกรมรับข้อความหนึ่งบรรทัด

// Output
// แปลงข้อความให้กลายเป็นตัวอักษรพิมพ์ใหญ่ทั้งหมด (ตัวอักษรที่ไม่ใช้ A-Z ยังคงเดิม)

// Hint

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capitalize(char str[]);

int main()
{  
    char message[100];    
    gets(message);   
    capitalize(message);   
    printf("%s", message);   
    exit(EXIT_SUCCESS);
}

void capitalize(char str[]){
    for(int i=0; str[i] != '\0'; i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]+='A'-'a';
}