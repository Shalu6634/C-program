#include<iostream>
using namespace std;

int main()
{
	
	int arr[]={1,2,3,4,5,6,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Length is : "<<len;
	
	int left = 0;
	int right = len-1;
	
	
	while(left<right)
	{
		left++;
		right--;
	}
 
    cout<<"\n Left - "<<left<<endl;
    cout<<"\n Right - "<<right<<endl;
	int middleElement = arr[left];
	
	cout<<"\nmiddle element  is : "<<middleElement;
	
	return 0;	


}