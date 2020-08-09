#include <iostream>
#include <cstdlib>
int main(){
	while(True){
		int n = rand()%10 + 2; //0-9 + 2
		cout << n << "\n" ; // Output n
		vector<int> a; // Array
		for(i =0;i<n; ++i){
			a.push_back(rand()%100000); //0-99999
		}
		for(i =0;i<n; ++i){
			cout << a[i] << " "; //Outputting the array
		}
		cout << "\n";
		long long test1 = func1();
		long long test2 = func2(); //Testing solution
		if(test1!=test2){
			cout << "Wrong Answer" << res1 << " " << res2 << "\n" ;
			break;
		}
		else{
			cout << ""
		}

	}


}
