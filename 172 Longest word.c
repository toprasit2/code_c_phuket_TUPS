// Description
// จากคำศัพท์ จำนวน n คำ ให้หาคำที่ยาวที่สุด ถ้าหากมีหลายคำให้ เปรียบเทียบคำที่อยู่ลำดับหลัง โดยเรียงตามลำดับตัวอักษร เช่น 
// bat bell art hell cat mart rat zoo cell mail
// จะได้คำที่ยาวที่สุดคือ mart  ( มีความยาว 4 ตัวอักษร และ bell < cell < mail <mart ) 

// Input
// ค่าแรกเป็นจำนวนเต็มบวก n และ จะมีคำศัพท์ n คำที่ตามมา เป็นคำที่สะกดด้วยตัวอักษรพิมพ์เล็ก (a-z) เท่านั้น

// Output
// คำที่มีความยามมากที่สุด และอยู่ลำดับหลังสุด

// Hint
// - ใช้ฟังก์ชัน strlen(), strcpy() และ strcmp() จาก string.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    char words[n][100];
    int len_words[n];
    int index = 0;
    for(i=0; i<n; i++){
        scanf("%s", words[i]);
        len_words[i] = strlen(words[i]);
    }
    int max = len_words[0];
    for(i=0; i<n; i++){
        if(max <= len_words[i]){
            max = len_words[i];
            if(strcmp(words[i],words[index])>0)
                index = i;
        }
    }
    printf("%s", words[index]);
    exit(EXIT_SUCCESS);
}