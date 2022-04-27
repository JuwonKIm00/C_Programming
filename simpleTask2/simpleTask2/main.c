// 절댓값 반환 함수작성
// 절댓값이 큰 숫자 반환 함수 작성

#include <stdio.h>

int absoluteValue(int x){
    int num;
    if(x > 0){
        num = x;
    }else{
        num = x *(-1);
    }
    return num;
}

int compareNum(int a, int b){
    
    return a > b ? a : b;
}

int main(void){
    
    int a, b, c, d;
    printf("정수 두개 입력 : ");
    scanf("%d %d", &a, &b);
    
    c = absoluteValue(a);
    d = absoluteValue(b);
    
    printf("두 수의 절댓값은 각각 %d, %d 입니다 \n", c,d);
    
    int num;
    if(compareNum(c, d) == c){
        num = a;
    }else{
        num = b;
    }
    
       printf("두 수 의 절댓값이 큰 숫자는 %d 입니다\n", num);
    
    
}
