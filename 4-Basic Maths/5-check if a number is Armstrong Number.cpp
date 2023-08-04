//Check if a number is Armstrong Number or not
//Problem Statement: Given a number, check if it is Armstrong Number or Not. Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number.

/*
Time Complexity: O(n) where n is the number of digits since we need to traverse every digit and add digits raised to power no. of digits to sum.
Space Complexity: O(1) since no extra space is required
*/

bool checkArmstrong(int n){
	int res=0;
	int num=n;
	int k=to_string(num).size();
	while (n!=0){
		int digit=n%10;
		res+=pow(digit, k);
		n/=10;
	}
	if (res==num)	return true;
	else return false;
	//Write your code here
}
