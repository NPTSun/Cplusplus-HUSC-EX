#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return false;
	}
	return true;
}
int main(){
    int n;
    cin >> n;
    if (checkPrime(n) == true){
    	cout << n;
	} else{
		int temp = n;
		for(int i = 2; i <= n/2; i++){
	        while(temp % i == 0){
	   	 		cout << i << " ";
				temp=temp/i;
	  	  }
	    }	
	}
    return 0;
}
