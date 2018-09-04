#include<iostream>
#include<string>
#include<algorithm>

int main(int argc, char ** argv){

	std::string rep{"thethe"};
	std::sort(rep.begin(), rep.end());
	for(int i = 0; i < rep.size()-1; ++i){
	if(rep.at(i)==rep.at(++i)) {std::cout<<"Rep"<<std::endl;break;
	}
	}
}
