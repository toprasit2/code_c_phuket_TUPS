// Description
// ค่า Body Mass Index หรือ BMI หรือดัชนีมวลกาย คำนวณจาก น้ำหนักและส่วนสูงของบุคคล โดยใช้สูตรคำนวณ 
// BMI = w / (h*h)  หรือ bmi คือ ค่าน้ำหนักหารด้วยส่วนสูงยกกำลังสอง ซึ่งน้ำหนัก w มีหน่วยเป็น kg และ ส่วนสูง h มีหน่วยเป็นเมตร เช่น
// w = 60.5 kg, h=1.68 m ค่า BMI = 21.443566 เป็นต้น

// Input
// อินพุต มีตัวเลข สองค่า ค่าแรกคือ น้ำหนัก (w ในหน่วย kg) และ ค่าที่สองคือ ส่วนสูง (h ในหน่วย meter)  

// Output
// ผลลัพธ์ คือ ค่า BMI ที่คำนวณได้ ให้แสดงเป็นตัวเลขทศนิยม 2 ตำแหน่ง

// Hint
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight, height;
    float bmi;
    scanf("%f %f", &weight, &height);
    bmi = weight/(height*height);
    printf("%.2f", bmi);
    exit(EXIT_SUCCESS);
}