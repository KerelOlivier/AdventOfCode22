#include <iostream>
#include <string>
#include <vector>

int part1();
int part2();

int  main(){
	//std::cout << "part 1: " << part1() << std::endl;
	std::cout << "part 2: " << part2() << std::endl;
	
}

int part1(){
	int score = 0;
	std::string input;
	

	while(std::cin >> input){
		//Parse the input
		std::vector<int> res;
		std::string val;
		for(unsigned int i = 0; i < input.length(); i++){
			if(input[i] == '-' || input[i]==','){
				res.push_back(std::stoi(val)); 
				val = "";
			}
			else val += input[i];
		}
		res.push_back(std::stoi(val));
		//See if contained
		if((res[0] <= res[2] && res[1] >= res[3]) || (res[2] <= res[0] && res[3] >= res[1])) score++;
	}
	return score;
}

int part2(){
	int score = 0;	
	std::string input;
	
	while(std::cin >> input){
		//Parse the input
		std::vector<int> res;
		std::string val;
		for(unsigned int i = 0; i < input.length(); i++){
			if(input[i] == '-' || input[i]==','){
				res.push_back(std::stoi(val)); 
				val = "";
			}
			else val += input[i];
		}
		res.push_back(std::stoi(val));
		//See if contained
		if((res[0] <= res[2] && res[1] >= res[3]) || (res[2] <= res[0] && res[3] >= res[1]) || (res[0] <= res[2] && res[1] >= res[2]) || (res[0] <= res[3] && res[1] >= res[3])) score++;	
	}
	
	return score;
}
