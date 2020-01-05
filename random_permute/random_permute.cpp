// random_permute.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void randomize(int arr[], int n)
{
    srand(time(NULL));  //一開始系統都是 0，所以每次產生出來的亂數會一樣。用 srand() 函數改變一開始的亂數值。通常以目前的時間傳入，也就是使用 time() 函數
    for(int i = n-1;i>0;i--)
    {
        int j = rand() % (i + 1);

        swap(&arr[i], &arr[j]);
    }
}

int main()
{

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    randomize(arr,n);
    for( int var : arr)
    {
        printf("%d\n",var);
    }
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
