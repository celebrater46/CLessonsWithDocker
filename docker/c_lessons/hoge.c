// V Read the package that has useful commands 
#include <stdio.h>

/* コメントの書き方は C# とかと同じ */

// 「プロトタイプ宣言」関数を呼び出し命令の後に書く場合、このように宣言が必要
float getMax(float a, float b);
void sayHi(void);

// C言語も一番最初に main 関数を実行する
int main(void) {
    /* 変数
    int（整数）%d,
    float（実数）%f, 
    char（1文字）%c
    */

    // int i;
    // i = 10;
    int i = 10;
    float f = 1.3;
    // char c = "a"; <- ダブルコートだとエラーになる
    char c = 'a';

    printf("Hello World.\n");
    printf("i = %d, f = %f, c = %c\n", i, f, c);

    int x = 10;
    x %= 3; // 1
    x++;
    printf("x = %d\n", x);

    // if
    // < > <= >= == !=
    int score = 80;
    if(score > 80) {
        printf("Great!\n");
    } else if(score > 60) {
        printf("Good.\n");
    } else {
        printf("Boo!!\n");
    }

    // switch
    int rank = 2;
    switch(rank) {
        case 1:
            printf("Gold.\n");
            break;
        case 2:
            printf("Silver.\n");
            // break; // <- break を外すと下の処理も実行される
        case 3:
            printf("Blonze.\n");
            break;
        default:
            printf("No Medal...\n");
            break;
    }

    // while, do while
    // 無限ループになってしまった時は Ctrl + C
    int m = 1;
    while(m < 10) {
        printf("m = %d\n", m);
        m++;
    }

    int n = 10;
    do {
        printf("n = %d\n", n);
        n++;
    } while(n < 10);

    // for, continue, break
    for(int j = 0; j < 10; j++) {
        if(j == 5) { continue; }
        if(j > 8) { break; }
        printf("Helloween!! (%d)\n", j);
    }

    float result;
    result = getMax(2.3, 5.3);
    printf("%f\n", result);

    sayHi();

    return 0; // 慣習「正常終了した証」
}

/* 関数
返り値の型 関数名(引数, ...) {
    処理
    return 返り値;
}
*/
// float getMax(a, b) { // 引数にも型を忘れずに
float getMax(float a, float b) {
    if(a >= b) {
        return a;
    } else {
        return b;
    }
}

// 最初と、引数がない時は引数にも void が必要
void sayHi(void) {
    printf("Hi!!!!!!!!!!!!!\n");
}
