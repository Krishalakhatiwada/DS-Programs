#include<iostream>
using namespace std;
class STUDENT{
	string sname;
	int marks[5], total;
	float avg;
	string result = "Pass";
public:	
	void assign(){
		cout<<"Name:";
		getline(cin,sname);
		cout<<"Enter the marks for 5 subjects: ";
		for(int i=0;i<5;i++){
			cin>>marks[i];
		}
	}
	
	void compute(){
		total = 0;
		avg = 0;
		for(int i=0;i<5;i++){
			total += marks[i];
			if(marks[i]<40){
				result = "Fail";
			}

		}
		
		avg = float(total)/5;
	}
	
	void disp(){
		cout<<"Name: "<<sname<<endl;
		cout<<"Total: "<<total<<endl;
		cout<<"Average: "<<avg<<endl;
		cout<<"Result: "<<result;
	}
};
int main(){
	STUDENT S1;
	S1.assign();
	S1.compute();
	S1.disp();
}