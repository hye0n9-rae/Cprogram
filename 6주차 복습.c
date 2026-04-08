#pragma warning(disable:4996)
#include <stdio.h>
#include <ctype.h>
#define START 0
#define MOVE 1
#define WORK 2
#define STOP 3

int main()
{
	/* 예제 5-2
	int num;  // 정수를 저장할 num변수
	printf("정수를 입력하세요: ");  // 정수를 입력하세요 출력
	scanf("%d", &num);  // 입력받은 정수를 num에 저장

	if (num > 0)  // num이 0보다 클시
	printf("%d는 양수입니다.\n", num);  // 양수입니다 출력

	if (num < 0)  // num이 0보다 작을시
	printf("%d는 음수입니다.\n", num);  // 음수입니다 출력

	if (num == 0)  // num이 0일시
	printf("0입니다.\n");  // 0입니다 출력
	return 0;
	*/


	/* 예제 5-4
	char ch;  // 문자를 저장할 char변수
	printf("알파벳을 입력하세요: ");  // 사용자에게 알파벳 입력 안내
	scanf(" %c", &ch);  // 문자 입력을 받아 ch에 저장 (앞 공백은 이전 입력 버퍼 제거용)

	if (ch >= 'a' && ch <= 'z') {  // 입력된 문자가 소문자일때
		ch = (ch - 'a' + 3) % 26 + 'a';  // 3글자 뒤로 이동
	}
	else {  // 입력된 문자가 대문자일때
		ch = (ch - 'A' + 3) % 26 + 'A';  // 3글자 뒤로 이동
	}

	printf("변경된 문자: %c\n", ch);  // 변경된 문자 출력
	return 0;
	*/

	/* 예제 5-6
	int age, fee; //나이, 요금 지정할 변수

	printf("나이를 입력하세요: "); //나이를 입력하세요 출력
	scanf("%d", &age); //age에 나이 입력받기

	if (age <= 5) { //5세 이하일때
		fee = 0; //요금 0원
	}
	else if (age <= 12){ //6세 ~ 12세일때
		fee = 1000; //요금 1000원
	}
	else if (age <= 18) { //13세 ~ 18세일때
		fee = 1500; //요금 1500원
	}
	else if (age <= 60) { //19세 ~ 60세일때
		fee = 3000; //요금 3000원
	}
	else { //61세 이상일때
		fee = 0; //요금 0원
	}
	printf("요금은: %d원\n", fee); //요금 출력
	return 0;
	*/


	/* 예제 5-7
	char first, second;  // first, second로 MBTI 첫 번째, 두 번째 글자를 저장할 변수 정하기
	printf("MBTI의 첫 번째와 두 번째 글자를 입력하세요 (예: E/I, N/S): ");  // 첫번째 두번째 mbti를 입력하세요 출력
	scanf(" %c %c", &first, &second);  // 첫 번째, 두 번째 글자 입력받기

	if (first == 'E') {  // 첫 번째 글자가 E이면
		printf("당신은 외향적인 성격을 가지고 있습니다.\n");  // 외향적인 성격 출력
		if (second == 'S') {  // 두 번째 글자가 S이면
			printf("감각형입니다.\n");  // 감각형 출력
		}
		else if (second == 'N') {  // 두 번째 글자가 N이면
			printf("직관형입니다.\n");  // 직관형 출력
		}
	}
	else if (first == 'I') {  // 첫 번째 글자가 I이면
		printf("당신은 내향적인 성격을 가지고 있습니다.\n");  // 내향 성격 출력
		if (second == 'S') {  // 두 번째 글자가 S이면
			printf("감각형입니다.\n");  // 감각형 출력
		}
		else if (second == 'N') {  // 두 번째 글자가 N이면
			printf("직관형입니다.\n");  // 직관형 출력
		}
	}

	char third, fourth;  // third와 fourth로 MBTI 세 번째, 네 번째 글자를 저장할 변수 정하기
	printf("MBTI의 세 번째와 네 번째 글자를 입력하세요 (예: F/T, P/J): ");  // 세번째, 네번째 mbti를 입력하세요 출력
	scanf(" %c %c", &third, &fourth);  // 세 번째, 네 번째 글자 입력

	if (third == 'T') {  // 세 번째 글자가 T이면
		printf("논리적이고 객관적으로 판단하는 사고형입니다.\n");  // 사고형 설명 출력
		if (fourth == 'J') {  // 네 번째 글자가 J이면
			printf("계획형입니다.\n");  // 계획형 출력
		}
		else if (fourth == 'P') {  // 네 번째 글자가 P이면
			printf("즉흥적입니다.\n");  // 즉흥적 출력
		}
	}
	else if (third == 'F') {  // 세 번째 글자가 F이면
		printf("감정적이고 사람 중심적으로 판단하는 감정형입니다.\n");  // 감정형 설명 출력
		if (fourth == 'J') {  // 네 번째 글자가 J이면
			printf("계획형입니다.\n");  // 계획형 출력
		}
		else if (fourth == 'P') {  // 네 번째 글자가 P이면
			printf("즉흥적입니다.\n");  // 즉흥적 출력
		}
	}
	return 0;
	*/

	/* 실습-1
	int year; //year 변수에 연도 저장

	printf("연도를 입력하세요: "); //연도를 입력하세요 출력
	scanf("%d", &year); // year에 연도 입력받기

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { //4로 나누어떨어지면서 100으로 나누어떨어지지 않거나, 400으로 나누어 떨어질때 윤년
		printf("윤년입니다.\n"); //윤년입니다 출력
	}
	else { // 윤년 조건이 아니면
		printf("평년입니다.\n"); //평년입니다 출력
	}
	return 0;
	*/

	/* 실습-2
	int x, y; //x, y 변수에 좌표 저장

	printf("x좌표를 입력하세요: "); //x좌표 입력하세요
	scanf("%d", &x); // x좌표 입력받기

	printf("y좌표를 입력하세요: "); //y좌표 입력하세요
	scanf("%d", &y); // y좌표 입력받기

	if (x > 0 && y > 0) { //이 조건이면(아래 동일반복)
		printf("(%d, %d) 좌표는 제 1사분면에 있습니다.\n", x, y); //1사분면 출력
	}
	else if (x < 0 && y > 0) {
		printf("(%d, %d) 좌표는 제 2사분면에 있습니다.\n", x, y);
	}
	else if (x < 0 && y < 0) {
		printf("(%d, %d) 좌표는 제 3사분면에 있습니다.\n", x, y);
	}
	else if (x > 0 && y < 0) {
		printf("(%d, %d) 좌표는 제 4사분면에 있습니다.\n", x, y);
	}
	else if (x == 0) {
		printf("(%d, %d) 좌표는 y축 위에 있습니다.\n", x, y);
	}
	else {
		printf("(%d, %d) 좌표는 x축 위에 있습니다.\n", x, y);
	}

	return 0;
	*/

	/* 실습2
	int currentState = START;
	int input;

	while (1) {
		switch (currentState) {
		case START:
			printf("로봇 시작 상태입니다.\n");
			printf("(1) 이동 상태로 변경\n");
			printf("상태 입력>> ");
			scanf("%d", &input);
			printf("입력하신 번호: %d\n", input);
			if (input == 1) {
				currentState = MOVE;
			}
			else {
				printf("잘못된 입력입니다. 다시 입력하세요.\n");
			}
			break;

		case MOVE:
			printf("로봇 이동중 입니다.\n");
			printf("(2) 작업 상태로 변경\n");
			printf("상태 입력>> ");
			scanf("%d", &input);
			printf("입력하신 번호: %d\n", input);
			if (input == 2) {
				currentState = WORK;
			}
			else {
				printf("잘못된 입력입니다. 다시 입력하세요.\n");
			}
			break;

		case WORK:
			printf("로봇 작업중 입니다.\n");
			printf("(3) 작업 상태로 변경\n");
			printf("상태 입력>> ");
			scanf("%d", &input);
			printf("입력하신 번호: %d\n", input);
			if (input == 3) {
				currentState = STOP;
			}
			else {
				printf("잘못된 입력입니다. 다시 입력하세요.\n");
			}
			break;
		case STOP:
			printf("로봇이 종료되었습니다.\n");
			return 0;
		default:
			printf("알 수 없는 상태입니다.\n");
			return 1;
		}
	}

	return 0;
	*/
}