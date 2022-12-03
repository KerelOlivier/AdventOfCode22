#include <iostream>
#include <string>
#include <cmath>

int part1();
int part2();

int main(){
	//std::cout << "Part 1: " << part1() << std::endl;
  std::cout << "Part 2: " << part2() << std::endl;
	return 0;
}

int part1(){
	int score =0;
	char a;
	char b;

	while(std::cin >> a >> b){
		char s = b - a;
		score += b-'X'+1;
		switch(s){
			case 'X'-'A':
				score+=3;
				break;
			case 'X'-'C':
			case 'Y'-'A':
				score+=6;
				break;
		}
	}
	return score;	
}

int part2(){
	int score = 0;
	char a, b;
		
	while(std::cin >> a >> b){		
		switch(b){
			case 'Z':
				score += 6;
				score += (a-'A'+1)%3+1; 
				break;
			case 'X':
				score += (a-'A'+2)%3+1;
				break;
			default:
				score+=3;
				score+= (a-'A')+1;
		}
	}

	return score;
}	
