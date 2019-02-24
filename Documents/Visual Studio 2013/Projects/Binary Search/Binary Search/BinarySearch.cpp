int binarysearch (int array[] , int numelems, int value)
{
	int first=0,last=numelems-1,middle , position= -1;
	bool found = false;

	while (!found && first<=last)
	{
		middle = (first+last) /2;
		if (array[middle] ==value)
		{
			found = true;
			position=middle;
		}
		else if (array[middle] > value)
			last = middle-1;
		else
			first= middle +1;
	}
	return position;
}

#include <iostream>
using namespace std;

int binarysearch (int [] , int , int);

int main()
{
	const int arrSize = 20;
	int tests [arrSize]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

	int results,empID;

	cout<<"Enter the Employee ID you wish to search for";

	cin>> empID;

	results = binarysearch (tests,arrSize,empID);

	if (results==-1)
	
		cout<<"That number does not exist in the array.\n";
	else
	{
		cout<<"That ID is found at element " <<results+1<<"in the array\n";
	}

	system("pause");
	return 0;

}