#include "Header.h"

// 정수 3개를 입력 받아서 입력한 숫자 중 가장 큰 수를 화면에 출력합니다

//힌트) scanf("%d %d %d", &a, %b, &c); 를 사용시 1 2 3과 같이 한번 에 적어 놓은 수만큼 입력이 됩니다.


// 연습문제 
////float a, b, c;     <- 내가 쓴 답
//int a, b, c;
//int largest;     // 가장 큰 수
//printf("정수 3개를 입력해 주세요.");
//scanf("%d %d %d", &a, &b, &c);
//
//largest = a;
//// 첫 번째 값을 가장 큰값으로 잡겠습니다.
//// 그리고 값을 비교해 더 큰 값이 나온다면 그 값으로 변경하겠습니다.
//
//if (largest < b)
//{
//	largest = b;
//}
//else if (largest < c)
//{
//	largest = c;
//}
//printf("가장 큰 수 = %d입니다.\n", largest);



// 조건 2개 이상 붙이는 방법
// if (a > 0 && b > 0) 
// a가 0보다 크면서 b가 0보다 크다면 (AND(논리곱)연산)
// if (a > 0 || b > 0)
// a가 0보다 크면서 b가 0보다 크다면 (OR(논리합)연산)
// if (a > 0 && b > 0 || c > 0) // &&를 먼저 계산합니다.
// a가 0보다 크면서 b가 0보다 크거나 c가 0보다 크다면

// 문제 ) 세변의 길이로 유효한 삼각형이지를 조사하는 프로그램을 구현합니다.

// 힌트 ) 두 변의 길이의 합이 나머지 한변의 길이보다 거야 합니다

// 출력 예시
// 변 A, B, C의 길이를 순서대로 입력해 주세요.

int main()
{
	// 내가 낸 답
	int A, B, C;
	printf("세 변의 길이를 순서대로 입력해 주세요. >>");
	scanf("%d %d %d", &A, &B, &C);

	if (A + B > C)
	{
		printf("삼각형이 성립됩니다.\n");
	}
	else if (A + B < C)
	{
		printf("삼각형이 성립되지 않습니다.\n");
	}
	else
	{
		printf("삼각형이 성립되지 않습니다.\n");
	}


	// 강사님이 내신 답
	//if (A + B > C && A + C > B && B + C > A)
	return 0;
}