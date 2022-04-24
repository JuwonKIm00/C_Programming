// 사용자에게 정수를 입력 받아
// 입력 받은 정수의 수만큼의 피보나치 수열을 출력하는 함수 만들기

#include <stdio.h>


int readNum(void){
    printf("출력 하고자 하는 수열의 개수를 입력하세요 : ");
    int num;
    scanf("%d", &num);
    
    return num;
}

void fiboSequence(int num){
    int f1, f2, f3, i;
    f1 = 0;
    f2 = 1;
    
    if(num == 1){
        printf("%d  ", f1);
    }
    else{
        printf("%d  %d  ", f1, f2);
    }
    
    for(i = 0; i < num - 2; i ++){
        f3 = f1 + f2;
        printf("%d  ",f3);
        f1 = f2;
        f2 = f3;
    }
}

int main(void){
    int num = readNum();
    
    if(num < 1){
        printf("1 이상의 숫자를 입력하세요 ");
    }
    else{
        
        fiboSequence(num);
        
    }
    
    return 0;
}

// 느낀점 : 배열로 만들면 기존의 수학적 알고리즘을 이용하여 더 쉽게 풀어 나갈수 있을것 같다
// 다음 c언어 업로드는 배열로 만들어 올려보자


