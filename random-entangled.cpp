#include <stdio.h>
//#include <math.h>
#include <string.h>
#include <stdlib.h>
//#include <time.h>

#define nl printf("\n")

//TODO
//Define the global array
//Define the function 
//Function to print an array
//Cycle in main to test on random inputs

char random_letter(int n){
	return rand()%n+65
}

void print_string(char* ptr, int L){ //works
	nl;
	for(int i=0; i < L; i++){
		printf("%c", ptr[i]);
	}
	nl;
}


void nahodne_prepletene_slovo(char* w, int l, int n){
	//first link
	w[0] = random_letter(n);
	
	//while(w[l]<65){
		//add link
	//}
}




int main(){
	char string1[10]={30,31,32,33,34,35,36,37,38,39};
	
	
	print_string(string1, 10);
	
}
