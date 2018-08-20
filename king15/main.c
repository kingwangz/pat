//
//  main.c
//  king15
//
//  Created by kingwang on 2018/7/25.
//  Copyright © 2018年 kingwang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    while (a<-1000000) {
        scanf("%d",&a);
    }
    while (b>1000000) {
        scanf("%d",&a);
    }
    c=a+b;
    printf("%d\n",c);
    char str[25];
    sprintf(str ,"%d",c);
    printf("%s\n",str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        printf("%c",str[i]);
        if (str[i] == '-') continue;
        if ((i + 1) % 3 == len % 3 && i != len - 1){
        printf(",");
    }
    }
    return 0;
}
