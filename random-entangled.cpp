#include <stdio.h>
//#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define nl printf("\n")

char random_letter( int n ){
	return (char)(rand() % n + 65);
}

int random_between(int a, int b){
	return (a + rand() % (b-a+1) );
}

void print_string( char* ptr, int L ){ //works
	nl;
	for(int i=0; i < L; i++){
		printf("%c", ptr[i]);
	}
	nl;
}

void create_link( char* w, int length, char letter, int* free_indexes, int* rightmost, int* rightsecond ){
	int left = random_between(free_indexes[0], free_indexes[1]);
	int right = random_between(free_indexes[2], free_indexes[3]);
	w[left] = letter;
	w[right] = letter;
	*rightsecond = *rightmost;
	*rightmost = right;
	
	print_string(w, length);
	
	//redefine free indexes
	free_indexes[0] = *rightsecond+1;
	free_indexes[1] = *rightmost-1;
	if(free_indexes[3]-*rightmost < 2){
		free_indexes[2] = free_indexes[3];
	} else {
		free_indexes[2] = *rightmost + 2;
	}
}

void clean_string(char* w, int l){
	for(int i=0; i<l; i++){
		w[i] = '*';
	}
}


void nahodne_prepletene_slovo(char* w, int l, int n){
	clean_string(w, l);
	
	int free[4] = {0,0,0+2,l-1};
	int rightmost = 0;
	int rightsecond = 0;
	
	while(w[l-1]=='*'){
		create_link(w, l, random_letter(n), free, &rightmost, &rightsecond);
	}
	
	for(int i=0; i<l; i++){
		if(w[i] == '*'){
			w[i] = random_letter(n);
		}
	}
	
	nl;
	printf("Result:");
	print_string( w, l );
	printf("--------------------------------------------------------------");
	nl;
}

int main(){
	srand(time(NULL));
	
	for(int i = 0; i<50; i++){
		int length = rand()%30+3; //Minimum size for a link is currently 3.
		int n = rand()%26+1;
		printf("Test %d; \t Length %d; \t Alphabet size %d", i,length, n);
		char* string1 = (char*) malloc(sizeof(char)*(length));
		nahodne_prepletene_slovo(string1, length, n);
		free(string1);
	}

}
