#include <stdio.h>

int main()
{
    int bottom = 6;
    int height = 6;
    int area = 0;
    printf("밑변을 입력하시오 : \n");
    printf("%d\n", bottom);
    printf("높이를 입력하시오 : \n");
    printf("%d\n", height);
    area = (bottom * height) / 2;
    printf("삼각형의 넓이는 : %d 입니다.\n", area);
    return 0;
}