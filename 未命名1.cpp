#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> ask;
	fstream as;
	as.open("D:\\ask.data");
	if(!as.is_open()){
		cout<<"error"<<endl;
		system("pause");
		exit(1);
	}
	for(int i=0;!as.eof();i++){
		string a;
		as>>a;
		ask.push_back(a);
	}
	as.close();
	as.clear();
	
	fstream r1;
	r1.open("D:\\answer.data");
	if(!r1.is_open()){
		r1.open("D:\\answer.data",ios::out);
	}
	int x=0;
	for(int i=0;!r1.eof();i++){
		string a;
		r1>>a;
		x=i;
	}
	r1.close();
	r1.clear();
	system("start https://baidu.com");
	for(int i=x;i<ask.size();i++){
		r1.open("D:\\answer.data",ios::app);
		cout<<ask[i]<<endl;
		string answer="";
		getline(cin,answer);
		r1<<answer<<" ";
		r1.close();
		r1.clear();
	}
}
