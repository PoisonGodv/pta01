#include <stdio.h>

int main() {
    char chang [2][1];
    chang [0][0]='B';//百位
    chang [1][0]='S';//十位
    int nub [1][9]={1,2,3,4,5,6,7,8,9};
    int one,two,three;
    one=0;
    two=0;
    three=0;
    int chuli=0;
    scanf("%d",&chuli);
    if(chuli>99 && chuli<1000){
        one=chuli/100;
        three=chuli%10;
        two=(chuli%100)/10;
    } else if(chuli>9 && chuli<100){
        two=chuli/10;
        three=chuli%10;
    } else if(chuli>0 && chuli<10){
        three=chuli;
    } else{
        printf("输入有误");
    }
    for (int i=0;i<one;i++){
        putchar(chang[0][0]);
    }
    for (int i=0;i<two;i++){
        putchar(chang[1][0]);
    }
    for (int i=0;i<three;i++){
        printf("%d",nub[0][i]);
    }
    return 0;
}


