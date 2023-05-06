#include <stdio.h>
//#include <math.h>
#include <string.h>
#include <stdlib.h>
//#include <time.h>

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

void create_link( char* w, char letter, int free_indexes[4] ){
	if( free_indexes[0] == free_indexes[1] ){
		w[free_indexes[0]] = letter;
	} else {
		
	}
}

void clean_string(char* w, int l){ //finished
	for(int i=0; i<=l; i++){
		w[i] = '*';
	}
}


void nahodne_prepletene_slovo(char* w, int l, int n){
	int free[4] = {0,0,0+2,l-1};
	//first link
	w[0] = random_letter(n);
	
	//while(w[l]=='*'){
		//add link create_link(w, random_letter(n), free)
	//}
}

int main(){
	char string1[10]={30,31,32,33,34,35,36,37,38,39};
	clean_string(string1, 10);
	
	print_string(string1, 10);
	
}
