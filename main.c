//
//  main.c
//  HHW14
//
//  Created by Mac on 2019/5/31.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    
    int length;
    int i;//loop
    char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
    char *check;
    
    length=strlen(input);
    check=input;
    for(i=0;i<length;i++){
        if(*(check+i)<122&&*(check+i)>=96){
            printf("%c", *(check+i));
        }
        else if(*(check+i)<91&&*(check+i)>64){
            printf("%c", *(check+i));
        }
        else if(*(check+i)==32){
            printf("%c", *(check+i));
        }
    }
    system("pause");
    return 0;
}
