#include <iostream>
#include <string>
#include <cmath>

int part1();
int part2();

int main(){
	//std::cout << "part 1: "<< part1() << std::endl;
	std::cout << "part 2: "<< part2() << std::endl;
}

int part1(){
	int max = 0;
	int tmp = 0;
	std::string input;
	while(std::getline(std::cin, input)){
		if(input.empty()){
			max = max < tmp ? tmp : max;
			tmp = 0;
		}else
			tmp += std::stoi(input);
	}
	return max;
}

int part2(){
	int top1 = 0, top2 = 0, top3 = 0;

	int tmp = 0;
	std::string input;
	while(std::getline(std::cin, input)){
		if(input.empty()){
			if(tmp >= top1){
				top3 = top2;
				top2 = top1;
				top1 = tmp;
			}else if(tmp >= top2){
				top3 = top2;
				top2 = tmp;
			}else	if(tmp >= top3) top3 = tmp; 
			tmp =0;
		}else{
			tmp += std::stoi(input);			
		}
	}
	return top1+top2+top3;
}
