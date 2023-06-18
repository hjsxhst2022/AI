#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> ask;
	vector<string> answer;
	fstream r;
	r.open("D:\\ask.data");
	if(!r.is_open()){
		cout<<"error"<<endl;
		system("pause");
		exit(1);
	}
	for(int i=0;!r.eof();i++){
		string a;
		r>>a;
		ask.push_back(a);
	}
	fstream r1;
	r1.open("D:\\answer.data");
	if(!r1.is_open()){
		cout<<"error"<<endl;
		system("pause");
		exit(1);
	}
	for(int i=0;!r1.eof();i++){
		string a;
		r1>>a;
		answer.push_back(a);
	}
	while(1){
		string ask_;
		getline(cin,ask_);
		bool answers=0;
		for(int i=0;i<ask.size();i++){
			if(ask[i]==ask_){
				cout<<answer[i];
				answers=1;
			}
		}
		if(answers==0)
		cout<<"I not know, I'll study again when I grow up";
		cout<<endl;
	}
}
