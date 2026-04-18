#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main()
{
    /* 예제 6-2
    int number, count = 0, sum = 0; // 정수, 자릿수 개수, 자릿수 합 초기화

    printf("\n정수입력: "); //정수입력 출력
    scanf("%d", &number); //정수 입력 받기
    printf("당신이 입력한 수: %d\n\n", number); //입력받은 정수 출력

    while (number != 0) { // 숫자가 0이 아닌동안 다음 작업을 반복
        count++;          // 자릿수 1 증가
        sum += number % 10; // 마지막 자릿수를 합 더하기
        number /= 10;     // 마지막 자릿수 제거
    }

    printf("정수의 각 자릿수 개수: %d\n", count); // 자릿수 출력
    printf("입력한 숫자의 합계: %d\n", sum);     // 자릿수 합 출력

    return 0;
    */

    /* 예제 6-3
    int n = 0, sum = 0;

    printf("숫자 입력(종료: ctrl+z): \n");

    while (scanf("%d", &n) != EOF) {
        sum = sum + n;
    }
    printf("\n 합계: %d \n", sum);
    
    return 0;
    */

    /* while문 lab
    int salary, monthlyExpense, targetAmount; // 월급, 월 지출, 목표 금액
    int totalSavings = 0; // 누적 저축액
    int months = 0; // 걸린 개월 수

    printf("월급을 입력하세요(만 원 단위로 입력하세요): ");
    scanf("%d", &salary);

    printf("월간 지출을 입력하세요(만 원 단위로 입력하세요): ");
    scanf("%d", &monthlyExpense);

    printf("월간 지출을 입력하세요(만 원 단위로 입력하세요): ");
    scanf("%d", &targetAmount);

    while (totalSavings < targetAmount) { // 목표 금액 달성 전까지 반복
        totalSavings += (salary - monthlyExpense); // 매달 저축액 누적
        months++; // 개월 수 증가
}

    printf("\n월급 %d만 원\n", salary);
    printf("월간 지출 %d만 원\n", monthlyExpense);
    printf("목표 금액 %d만 원\n\n", targetAmount);
    printf("#목표 금액을 달성하는데 %d개월이 걸립니다.\n", months);

    return 0;
    */


    /* 예제 6-7
    int n; // n변수 지정

    printf("정수를 입력: ");
    scanf("%d", &n); // 정수입력받기

    for (int i = 1; i <= n; i++) { // 1부터 n까지 반복
        printf("%d의 제곱: %d\n", i, i * i); //현재 i의 값과 그 제곱을 출력

    }

    return 0;
    */

    /* 예제 6-8
    char ch; //문자 변수 선언

    for (ch = 'A'; ch <= 'Z'; ch++){ // A부터 Z까지 반복
        printf("%c ", ch); // 현재 문자 출력
    }

    return 0;
    */


    /* 구구단 실습 for문
    int n;

    printf("숫자 입력: ");
    scanf("%d", &n); // 정수 입력

    for (int i = 1; i <= 9; i++) { // 1~9까지 반복
        printf("%d X %d = %d\n", n, i, n * i); // 구구단 출력
    }

    return 0;
    */

    /* 구구단 실습 while문
    int n, i = 1;

    printf("숫자 입력: ");
    scanf("%d", &n); // 정수 입력

    while (i <= 9) { // 1~9까지 반복
        printf("%d X %d = %d\n", n, i, n * i); // 구구단 출력
        i++; // 증가
    }

    return 0;
    */

    /* 구구단 실습 do-while문
    int n, i = 1;

    printf("숫자 입력: ");
    scanf("%d", &n); // 정수 입력

        printf("%d X %d = %d\n", n, i, n * i); // 구구단 출력
        i++; // 증가
    } while (i <= 9); // 조건 검사
    do {

    return 0;
    */

    /*구구단 출력(중첩 for문 활용)
    int num;

    printf("출력할 최대 단 입력: ");
    scanf("%d", &num); // 최대 단 입력

    for (int i = 2; i <= num; i++) { // 2단부터 n단까지
        printf("=== %d단 ===\n", i);

        for (int j = 1; j <= 9; j++) { // 1 ~ 9까지 곱하기
            printf("%d * %d = %d \n", i, j, i * j);
        }
        printf("\n"); // 단 사이 rhdqor
    }
    return 0;
    */



    /* 확인문제 1
   char ch;

   for (ch = 'Z'; ch >= 'A'; ch--) { // Z부터 A까지 감소
   printf("%c ", ch); // 문자
   출력
   }

   return 0;
   */


   /* 확인문제 2
   int i, j;

   for (i = 90; i >= 65; i--) {     // 바깥 for문: Z(90) ~ A(65)
       for (j = i; j >= i; j--) {  // 안쪽 for문 (출력용)
           printf("%c ", j);      // 아스키코드 문자 출력
       }
   }

   return 0;
   */

   /* 확인문제3
   int i, j;

   for (i = 6; i >= 1; i--) {        // 줄 개수 (6 → 1)
       for (j = 1; j < i; j++) {     // # 출력 개수
           printf("#");
       }
       printf("\n");                 // 줄 바꿈
   }

   return 0;
   */

    /* lab 계좌 이자 계산하기
    double first;            // 초기 예금액을 저장할 변수
    double yearly, inter;    // yearly: 연 이자율, inter: 1년 동안 발생한 이자
    int year, numyear;       // year: 현재 몇 년째인지, numyear: 총 저축 기간

    printf("초기 예금액을 입력하세요: ");   // 초기 돈 입력 안내
    scanf("%lf", &first);                // 초기 예금액 입력 (double이라 %lf 사용)

    printf("연 이자율을 입력하세요 (퍼센트): "); // 이자율 입력 안내
    scanf("%lf", &yearly);              // 연 이자율 입력 (예: 5 입력하면 5%)

    printf("저축 기간을 입력하세요 (년): ");   // 기간 입력 안내
    scanf("%d", &numyear);              // 몇 년 동안 저축할지 입력

    for (year = 1; year <= numyear; year++) {  // 1년부터 마지막 년도까지 반복
    inter = (first * yearly / 100);        // 현재 돈에 대한 1년 이자 계산
    first += inter;                        // 원금에 이자를 더함 (복리 효과)

        printf("%d년: 예금액 = %.2lf, 이자 = %.2f\n", year, first, inter);
    // year: 현재 년도
    // first: 이자가 더해진 총 금액
    // inter: 그 해에 생긴 이자
    // %.2lf / %.2f: 소수점 둘째 자리까지 출력
    }   

    return 0;   // 프로그램 종료
    */

    /* lab 암스트롱 수 구하기
    int limit, num, sum, temp, n, digit;  // 변수 선언

    printf("최대 범위를 입력하세요: ");     // 사용자에게 최대 범위 입력 요청
    scanf("%d", &limit);                  // 최대 범위 입력 받기

    printf("최대 범위 내의 암스트롱 수를 찾습니다.\n");  // 안내 메시지 출력

    for (num = 1; num <= limit; num++) {  // 1부터 limit까지 반복
        sum = 0;                         // 자릿수 제곱의 합 초기화
        temp = num;                      // 원래 숫자를 보존하기 위해 복사
        n = log10(num) + 1;              // 숫자의 자릿수 계산

        while (temp > 0) {               // 모든 자릿수를 처리할 때까지 반복
            digit = temp % 10;           // 현재 숫자의 마지막 자릿수 추출
            sum += pow(digit, n);        // (자릿수)^n 값을 sum에 누적
            temp /= 10;                  // 마지막 자릿수 제거
        }

        if (sum == num) {                // 계산한 합이 원래 숫자와 같으면
            printf("%d ", num);          // 암스트롱 수 출력
        }
    }

    return 0;                            // 프로그램 종료
    */




}