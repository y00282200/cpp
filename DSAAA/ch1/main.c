
/*
  2018年12月 1日 星期六 08时17分53秒 CST
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define RAN_COUNT    1000000
//#define RAN_COUNT    30000000
#define ARR_LEN      RAN_COUNT

/* 
1  产生随机数 30, 000, 000 个并存储到文件 30M.txt 中
2  从 30M.txt中读入文件
3  用排序算法求出第 15, 000, 000 个值 
*/

void generateRandom();
void printRandom();
void readData();
void num2str(long, char*, int*);
void print(int* arr, int len);

void bubbleSort(int* arr, int len);
void swap(int* a, int* b);

void timestamp();

int main(int argc, char* argv[]) {

    
    // 排序
    if (0 == strcmp("sort", argv[1])) {
        readData();
    }
    // 生成随机数功能
    if (0 == strcmp("gen", argv[1])) {
        //starttime
        printRandom();
        //endtime
        //print time used 
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

    printf("==generate start:");
    timestamp();
    
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

    printf("==generate end:");
    timestamp();
}

void readData() {
    const char* filename = "30M.txt";

    int arrNum[RAN_COUNT]; 
    char ch;
    int temp;
    int sum;
    int i;
    FILE* lf;

    printf("==read start: ");
    timestamp();
    
    lf = fopen(filename, "r");
    if (NULL == lf)
        return;

    i = 0;
    sum = 0;
    do {
        ch = fgetc(lf);
        if (EOF != (int)ch && isalnum(ch)) {
            //            printf("%c", ch);
            temp = ch - '0';
            sum = sum * 10 + temp;
        } else if (' ' == ch) {
            //            printf("%d", sum);
            printf("%c_", ch);
            printf("i:%d ", i);
            arrNum[i] = sum;
            printf("%d ", arrNum[i]);
            i++;
            sum = 0;
        } else if ('\n' == ch) {
            printf("%c|", ch);

        }
    } while (EOF != (int)ch);
    printf("\n");
   
    //print(arrNum, i);
    bubbleSort(arrNum, i);
    print(arrNum, i);
}

void print(int* arr, int len) {

    printf("==print start:");
    timestamp();
    
    for (int i = 0 ; i < len; i++) {
        if (i !=0 && i % 10 == 0) {
            printf("\n");
        }
        printf(" %d", arr[i]);
    }

    printf("==print end:");
    timestamp();
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

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int* arr, int len) {
    printf("len: %d\n", len);
    
    printf("==sort start: ");
    timestamp();
        
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
         }
    }

    printf("==sort end: ");
    timestamp();
}

void timestamp() {
    char buf[100];
    time_t t0;
    time(&t0);
    strftime(buf, sizeof buf, "%A %X", localtime(&t0));
    printf("%s\n", buf);
}
