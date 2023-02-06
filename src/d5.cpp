#include <iostream>
#include <string>
#include <vector>
#include <stack>

std::string part1();
std::string part2();

int main(){
	std::cout << "part 1: " << part1() << std::endl;
	//std::cout << "part 2: " << part2() << std::endl;
	
}

std::vector<std::stack<char>> getStacks(){
	std::string input;
	std::vector<std::string> lines = {};
	std::getline(std::cin,  input);
	while(!input.empty()){
		lines.push_back(input);
		std::getline(std::cin,  input);
	}
	input = lines[lines.size()-1]; 
	int stack_cnt = input[input.length()-2]-'0';
	std::vector<std::stack<char>> res;
	for(int i = 0; i < stack_cnt; i++){
		std::stack<char> s;
		res.insert(s);
	}
	for(unsigned int i = 0; i < lines.size() -1; i++){
		input = lines[lines.size() - 2 - i];
		for(int j = 0; j < stack_cnt; j++){
			res[j].push(input[1+j*4]);
		}
	}
	return res;
}

std::string part1(){
	std::vector<std::stack<char>> stacks = getStacks();
	return "";
}

std::string part2(){
	return "";
}
