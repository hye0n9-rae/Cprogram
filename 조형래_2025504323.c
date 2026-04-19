#pragma warning(disable:4996)
#include <stdio.h>

int main()
{   

	/* (문제 1 숫자 맞히기 게임)
	int answer = 7; //정답을 7로 가정해 변수 설정
	int num = 0;  //초기값 0설정, 숫자를 저장할 변수 설정
	int try = 0; //초기값 0설정, 시도횟수를 저장할 변수 설정

	printf("숫자 맞히기 게임 시작!\n"); //숫자 맞히기 게임시작 안내멘트 출력
	
	while (num != answer) { //입력받은 숫자와 정답이 다르면 계속 반복 
		printf("숫자를 입력하세요: "); //숫자를 입력하세요 출력
		scanf("%d", &num); //num에 숫자 입력받기

		try++; //반복할때마다 시도횟수 1씩 증가

		if (num < answer) { //입력한 숫자가 정답보다 작을때
			printf("더 큰 수 입니다.\n"); //더 큰 수 입니다 멘트 출력
		}
		else if (num > answer) { //입력한 숫자가 정답보다 클때
			printf("더 작은 수 입니다.\n"); //더 작은 수 입니다 멘트 출력
		}
		else { //둘다 아닌경우 즉 임력받은 숫자가 정답과 같을때
			printf("정답입니다!\n"); //정답입니다 출력
		}
	}
	printf("시도 횟수: %d번", try); //반복문 종료후 시도횟수를 출력

	return 0; //프로그램 종료
	*/


	/* (문제2. 자릿수 분석 프로그램)
	int num, temp; //num은 원래 입력받은숫자, temp는 각 자리수 계산위해 num을 복사해 사용
	int sum = 0; //자리수 합을 초기값 0설정
	int even = 0; //짝수 자리 숫자 개수 초기값 0설정
	int odd = 0; //홀수 자리 숫자 개수 초기값 0설정
	int digit = 0; //각 자리 숫자 하나씩 지정, 초기값 0설정
	
	printf("정수를 입력하세요: "); //정수를 입력하세요 출력
	scanf("%d", &num); //num에 정수 입력받기

	temp = num; //num은 그대로 두기 위해 num을 temp에 복사하여 temp로 계산

	while (temp > 0) { //temp가 0보다 클때 반복
		digit = temp % 10; //temp의 마지막 자리수 구해 digit에 저장
		sum += digit; //digit을 sum에 더해 합 구하기 

		if (digit % 2 == 0) { //만약 digit이 짝수이면
			even++; //짝수 개수 1추가
		}
		else { //digit이 짝수가 아니면(홀수 이면)
			odd++; //홀수 개수 1추가
		}
	
		temp /= 10; //temp는 10으로 나눈 몫 (=마지막 자리 제거)
	}
	printf("자리수의 합: %d\n", sum); //자리수 합 출력
	printf("짝수 개수: %d\n", even); //짝수 개수 출력
	printf("홀수 개수: %d\n", odd); //홀수 개수 출력

	return 0; //프로그램 종료
	*/
	

	/* (문제3. 메뉴 기반 계산기)
	int a, b, menu; //두 정수와 메뉴 저정할 변수
	
	printf("두 정수를 입력하세요: "); //두 정수를 입력하세요 출력
	scanf("%d %d", &a, &b); //a, b에 각각 정수 입력받기

	printf("\n=== 메뉴 ===\n"); //=== 메뉴 ===출력
	printf("1. 덧셈\n2. 뺄셈\n3. 곱셉\n4. 나눗셈\n5. 나머지\n"); //메뉴판 출력

	printf("메뉴 선택: "); //메뉴 선택 출력
	scanf("%d", &menu); //메뉴 입력받기

	switch (menu) { // 메뉴값에 따라 코드 실행

	case 1: //메뉴가 1인경우
		printf("결과: %d\n", a + b); //a와b의 합 출력
		break; //case 실행 종료, switch문 종료

	case 2: //메뉴가 2인 경우
		printf("결과: %d\n", a - b); //a와b의 차 출력
		break;

	case 3: //메뉴가 3인 경우
		printf("결과: %d\n", a * b); //a와b의 곱 출력
		break;

	case 4: //메뉴가 4인 경우
		if (b != 0) { //만약 b가 0이 아니면
			printf("결과: %d\n", a / b); //a와b의 나눗셈 출력
		}
		else { //b가 0이면
			printf("0일시 나눗셈 불가.\n"); //나눗셈 출력 불가
		}
		break;

	case 5: //메뉴가 5인 경우
		if (b != 0) { //만약 b가 0이 아니면
			printf("결과: %d\n", a % b); // a와b를 나눈 나머지 출력
		}
		else { //b가 0이면
			printf("0일시 나눗셈 불가.\n"); //나머지 출력 불가
		}
		break;

	default: //위의 경우들이 아니면
		return 0; //프로그램 종료
	}
	
	return 0; //프로그램 종료
	*/


}
