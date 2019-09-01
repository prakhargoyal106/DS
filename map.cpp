#include<bits/stdc++.h>

using namespace std;

int main(){

	map<int,int> gquiz1;

	gquiz1.insert(pair<int,int>(1,40));
	gquiz1.insert(pair<int,int>(2,30));
	gquiz1.insert(pair<int,int>(3,60));

	map<int,int>::iterator itr;
	cout<< "The map gquiz is: "<<endl;

	for(itr = gquiz1.begin();itr!=gquiz.end();itr++){
		cout<<'\t' << itr->first
			<<'\t' << itr->second
			<<endl;
			

	}
}