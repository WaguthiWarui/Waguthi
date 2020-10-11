/*

{Group Members A
     Ryan Koech 134138
     Waguthi Warui 134093
     Immaculate Haayo 134111
     Millicent Cheptoi 133928
     Melissa Mungai 134128
}

**********************PSEUDOCODE*************************

 Create boolean function which accepts an integer year in the boolean function 
  CHECK IF year % 4 = 0
   return true
  ELSE return false
  
  in  the main function declare an integer prompt user to keep in an integer 
  
  call the boolean function feeding it the integer
  
*/

#include<iostream>
using namespace std;

bool checkLeap(int year){
	
  if(year % 4 == 0){
  	
  	cout<< "\n\nLEAP YEAR!";
  	return true;
  }
  else{
  	
  	cout<< "\n\nNOT LEAP YEAR!";
  	return false;
  }
  
  
}

int main(){
	
	int year;
	
	cout << "\nPlease enter the year to verify if it is a leap year: ";
	cin >> year;
	
	checkLeap(year);
	
	return 0;
	
}


