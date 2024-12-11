#include <iostream>
using namespace std;
class Student {
	int examscore[5];
public:
	int input() {
		for(int i=0; i<5; i++) {
			cin>>examscore[i];
		}
		return examscore[5];
	}
	int calculateTotalScore() {
		int sum=0;
		for(int i=0; i<5; i++) {
			sum += examscore[i];
		}

		return sum;
	}

};

int main(){
    int n;
	cin>>n;
	Student s[n];
	int arr[n];
	int count=0;
	for(int i=0; i<n; i++) {
		s[i].input();
		arr[i] = s[i].calculateTotalScore() ;
		
		if ( s[i].calculateTotalScore() > arr[0]) {
			count++;
		}
	}
	cout<<count<<endl;

	return 0;
}
