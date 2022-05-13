#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <time.h>

int main() {

srand(time(NULL));
char word[10] = "sonya";
char second_word[10] = "mouse";
char guessed_word[10] = "_____";
char second_guessed_word[10] = "_____";
char guessed_letter = '/';
int l = strlen(word);
int x = 0;
int lifes = 7;
int minus = 0;
int choose, menu = 0;
int end = 1;
	while(end == 1){
		printf("\n--Press 1 or 2 to choose the word and press 4 to exit--\n");
		scanf("%d", &menu);
		switch(menu){
		case 1:
		choose = 1;
		break;
		case 2:
		choose = 2;
		break;
		case 4:
		end = 0;
		return 1;
	}
	if(choose == 1) {
			while(lifes >= 0) {
		system("clear");
		printf("A feminine given name");
		printf("\n1.Is popular in many areas of the world");
		printf("\n2.Scandinavian countries spell the name with the letter j");
		printf("\n3.While many English speaking countries spell it with i or y");
		printf("\n------------------------------------");
		printf("\ntries you have : %d\n",lifes);
		printf("%s\n",guessed_word);
			if (!strcmp(word,guessed_word)) {
				system("clear");
				printf("The word was : %s",word);
				printf("\n/////////////\\\\\\\n(((((((((((((( \\\\ \tPOKAJ MNI SWOJE ZUBI\n))) ~~      ~~  ((( \tMALA SUKA KURWA ZUBI POKAJI\n(( [(*)]---[(*)] ))\n)))     <       (((\n((( '\\______/`  )))\n)))\\___________/(((\n       _) (_\n      / \\_/ \\\n     /(     )\\\n");
				printf("\nYOU ARE THE WINNER\n");
				break;
			} else if (strcmp(word, guessed_word) && lifes == 0) {
				system("clear");
				printf("Sorry but you were wrong :(");
				printf("\nTry again!\n");
				break;
			}
		printf("try to guess a letter:\t");
		scanf(" %c",&guessed_letter);
			for (int i = 0;i < l;i++) {
				if (guessed_letter == word[i]){
					guessed_word[i] = guessed_letter;
					minus = 0;
					break;
				} else {
					minus = 1;
				}
			}
			if(minus)
				lifes--;
			
	x++;
	}
	}
	if (choose == 2) {
			while(lifes >= 0) {
		system("clear");
		printf("---You are so!---");
		printf("\n1.You are so small!");
		printf("\n2.You are so pretty!");
		printf("\n3.You are so cute!");
		printf("\n4.You are a swetty!");
		printf("\n5.With a grasping tail and tiny feet");
		printf("\n6.You climb tall stems when looking for a cheese");
		printf("\n------------------------------------");
		printf("\ntries you have : %d\n",lifes);
		printf("%s\n",second_guessed_word);
			if (!strcmp(second_word, second_guessed_word)) {
				system("clear");
				printf("The word was : %s",second_guessed_word);
				printf("\n       ____()()\n      /      @@\n`~~~~~\\_;m__m._>o\n");
				printf("\nYOU ARE THE WINNER\n");
				break;
			} else if (strcmp(second_word, second_guessed_word) && lifes == 0) {
				system("clear");
				printf("Sorry but you were wrong :(");
				printf("\nTry again!\n");
				break;
			}
		printf("try to guess a letter:\t");
		scanf(" %c",&guessed_letter);
			for (int i = 0;i < l;i++) {
				if (guessed_letter == second_word[i]){
					second_guessed_word[i] = guessed_letter;
					minus = 0;
					break;
				} else {
					minus = 1;
				}
			}
			if(minus)
				lifes--;
			
	x++;
	}
	}
}	
	return 0;
}