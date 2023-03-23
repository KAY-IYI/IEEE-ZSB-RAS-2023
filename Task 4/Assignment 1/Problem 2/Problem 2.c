#include <stdio.h>
#include <stdlib.h>

typedef struct complex_num{
    int real;
    int imag;

}complex;

void Add(complex num1,complex num2){
    int r_part = num1.real + num2.real;
    int i_part = num1.imag + num2.imag;
    complex res = {r_part,i_part};
    if(i_part <0){
        printf(" Sum of two complex num : %d - %di \n",res.real,-1*res.imag);

    }
    else{
        printf("Sum of two complex num : %d + %di \n ",res.real,res.imag);

    }

}
int main(){

    complex num1 ={2,3};
    complex num2 ={3,2};
    Add(num1,num2);

    complex num3 ={2,-3};
    complex num4 ={3,2};
    Add(num3,num4);

    return 0;
}
