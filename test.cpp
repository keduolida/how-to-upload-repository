#include<iostream>
#include<vector>
#include<algorithm>
#include<ranges>
using namespace std;
int main(){
	vector<int>data{33,22,11};
	ranges::sort(data);
	
	char8_t a;
	
	for(auto n: views::iota(0,10))cout<<n<<endl;
}
