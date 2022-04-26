//  월급에 붙는 소득세를 계산하는 함수 작성
//1000만원 이하는 8%, 1000만원 초과는 10% 로가정

#include <stdio.h>

// 세금을 계산하는 함수
int taxCal(int num){
    int tax;
    if(num > 10000000){
        tax = num * 0.1;
    }
    else{
        tax = num * 0.08;
    }
    
    return tax;
}

// 입력 받는 함수
int readTax(void) {
    printf("소득 입력 : ");
    int income;
    scanf("%d", &income);
    
    return income;
}


//main 함수
int main(void) {
    printf("소득을 입력 하면 세금을 계산하는 프로그램 입니다 \n");
    
    int income = readTax();
    
    int tax = taxCal(income);
    printf("당신의 소득에 의한 세금은 %d원 입니다 \n", tax);
    
    return 0;
}
