#include <iostream>

int main() {
    int arr[10]={0};
    printf("%p\n",arr);//首元素的地址
    printf("%p\n",arr+1);

    printf("%p\n",&arr[0]);//首元素的地址
    printf("%p\n",&arr[0]+1);

    printf("%p\n",&arr);//整个数组元素的地址
    printf("%p\n",&arr+1);    
    return 0;
}
