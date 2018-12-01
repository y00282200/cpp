
/*
  2018年12月 1日 星期六 08时17分53秒 CST
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define RAN_COUNT    100
//#define RAN_COUNT    30000000

/* 
1  产生随机数 30, 000, 000 个并存储到文件 30M.txt 中
2  从 30M.txt中读入文件
3  用排序算法求出第 15, 000, 000 个值 
*/

void generateRandom();
void printRandom();
void bubbleSort();
void num2str(long, char*, int*);
    
int main(int argc, char* argv[]) {

    if (0 == strcmp("sort", argv[1])) {
        printf("%s\n", argv[1]);
    }

    if (0 == strcmp("gen", argv[1])) {
        printRandom();
    }
        
    return 0;
}

void printRandom() {
    printf("====================\n");
    long num;
    int len;
    char arr[20];
    char ch;
    char chRet = '\n';
    char chSpace = ' ';
    FILE* lf;
    
    const char* filename = "30M.txt";

    if (NULL == (lf = fopen(filename, "w")))
        return;
   
    for (int i = 0 ; i < RAN_COUNT; i++) {
        len = 0;
        memset(arr, '\0', 20);
        
        if (0 != i && 0 == i % 10) {
            printf("\n");
            fwrite(&chRet, 1, 1, lf);
        }
        
        num = rand();
        printf(" %ld", num);
        
        num2str(num, arr, &len);
        fwrite(&arr, 1, len + 1, lf);
        fwrite(&chSpace, 1, 1, lf);
    }

    printf("\n");
    fclose(lf);
}

void num2str(long num,  char* arr, int* len) {
    if (num >= 10) {
        num2str (num / 10, arr, len);
        (*len)++;
        arr[*len] = num % 10 + '0';
    } else {
        arr[*len] = num + '0';
     }
}

void bubbleSort() {
    
}
