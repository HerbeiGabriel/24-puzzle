#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_menu1() {
	printf("Welcome to the game of 24.\n");
	printf("Use one of the following four numbers shown below exactly once,");
	printf("combining them somehow with the basic math operatores(+, -, :, *) to get the value of 24.");
}
void show_menu2() {

}
int calc(int x, int y,char a) {
	int sol = 0;
	if (a == '+')
		sol = x + y;
	else if (a == '-')
		sol = x - y;
	else if (a == '*')
		sol = x * y;
	else if (a == '/')
		sol = x / y;
	else return 666;
	return sol;
}
void game(){
	int arr[7][4] = { 1, 1, 4, 6, 1, 1, 3, 8, 1, 2, 2, 6, 1, 2, 3, 4, 1, 1, 3, 9, 4, 4, 4, 6, 1, 8, 8, 8 };  
		srand(time(NULL));
	int i = rand() % (0 - 8 + 1);
	char a, b, c;
	int sol, sol1;
	printf("Here are your numbers:%i, %i, %i, %i \n", arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
	printf("please enter your operators: ");
	scanf("%c, %c, %c", &a, &b, &c);
	sol = calc(arr[i][0], arr[i][1], a);
	sol1 = sol;
	printf("%i %c %i = %i \n", arr[i][0], a, arr[i][1], sol);


	sol = calc(sol1, arr[i][2], b);
	printf("%i %c %i = %i \n", sol1, b, arr[i][2], sol);
	sol1 = sol;


	sol = calc(sol1, arr[i][3], c);
	printf("%i %c %i = %i \n", sol1, c, arr[i][3], sol);\
	int* psol = &sol;
}
int main() {
	int z=1;
	show_menu1();
	while (z == 1) {
		game();
		printf("If you want to play again, please press 1, if you want to stop please enter 0: ");
		scanf("%i", &z);
	}
}