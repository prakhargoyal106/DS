#include<bits/stdc++.h>
#include<iostream>
#include<iterator>

using namespace std;

int main(){

	map<int,int> gquiz1;

	gquiz1.insert(pair<int,int>(1,40));
	gquiz1.insert(pair<int,int>(2,30));
	gquiz1.insert(pair<int,int>(3,60));

	map<int,int>::iterator itr;
	cout<< "The map gquiz is: "<<endl;

	for(itr = gquiz1.begin();itr!=gquiz1.end();itr++){
		cout<<'\t' << itr->first
			<<'\t' << itr->second
			<<endl;
     }	
	//assigning	the elements from gquiz1 to gquiz2
	map<int,int> gquiz2(gquiz1.begin(),gquiz1.end());

	cout<< "\n The map gquiz2 after"
		<< "assign from gquiz1 is : \n"	

		for (itr= gquiz2.begin();itr!=gquiz2.end();itr++)
		{
			cout<< '\t' << itr->first
				<<'\t'  << itr->second<<endl;


		}

		//remove all elements upto element with key =3 in gquiz2

		gquiz2.erase(gquiz2.begin(),gquiz.find(3));
		for(itr=gquiz2.begin();itr!=gquiz2.end();itr++){
			cout<< '\t' << itr->first
				<< '\t' << itr->second << '\n';

        }
		
}