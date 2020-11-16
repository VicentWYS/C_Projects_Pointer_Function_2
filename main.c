#include <stdio.h>

char *toChinese(int d){
    char *week[] = {"星期日", "星期一","星期二", "星期三", "星期四", "星期五", "星期六"};

    return week[d];
}

//返回指针的函数(以字符串为例)
int main() {

    int d;

    printf("请输入星期几：(0-6)\n");
    scanf("%d", &d);

    printf("你输入的是：%s\n", toChinese(d));

    return 0;
}
