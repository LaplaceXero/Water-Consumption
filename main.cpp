#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x;  //Chef water intake
	const int minX = 2000; //minimum water intake
	
	cin >> testCases;
	
	if((testCases < 1) || (testCases > 2000))
	       cout <<"out of bound,value must be in range 1-2000" <<endl;
	       
	else{
	    for(int i = 0; i < testCases; i++)
	    {
	        cin >>x;
	        
	        bool result = (x >= minX) ? true:false;
	        
	        if(result)
	            cout <<"Yes" <<endl;
	            
	        else
	            cout <<"No" <<endl;
	    }
	}     
	return 0;
}
