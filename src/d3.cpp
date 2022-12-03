#include <iostream>
#include <string>

int part1();
int part2();

int main(){
	//std::cout << "part 1: " << part1() << std::endl;
	std::cout << "part 2: " << part2() << std::endl;
	return 0;
}

char getDuplicate(std::string s){
	int n = s.length()/2;
	for(int i = 0; i < n; i++){
		for(int j =0; j < n; j++){
			if(s[i]==s[n+j]) return s[i];
		}
	}
	return 0;
}

int part1(){
	int score = 0;
	std::string input;
	while(std::cin >> input){
		char dup = getDuplicate(input);
		if(dup > 'Z') score+= dup-'a'+1;
		else score+=dup-'A'+27;
	}
	return score;
}

char getBadge(std::string a, std::string b, std::string c){
	for(unsigned int i =0 ; i < a.length(); i++){
		for(unsigned int j = 0; j < b.length(); j++){
			if(a[i] != b[j]) continue;
			for(unsigned int k =0; k < c.length(); k++){
				if(b[j] == c[k]) return b[j];
			}
		}
	}
	return 0;
}

int part2(){
	int score = 0;
	std::string a, b, c;
	while(std::cin >> a >> b >> c){	
		char dup = getBadge(a,b,c);
		if(dup > 'Z') score+= dup-'a'+1;
		else score+=dup-'A'+27;
	}
	return score;
}
