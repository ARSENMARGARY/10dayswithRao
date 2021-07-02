#include <iostream>
#include <vector>
#include <string>

using namespace std;

	char FindRepeatChar(const char* pstr){
		if(NULL == pstr)
			return 0;

		int count[256] = {0};
		int max = 0;
		char s;

		while (*pstr){
			if(++count[*pstr] > max && *pstr != ' '){
				max = count[*pstr];
				s = *pstr;
			}
			++pstr;
		}

		return s;
	}

int main(){
	
	int numbers = 10;
	int array[numbers] = {7,-24,67,22,-234,34,-66,64,12,56};
	int secondarray[numbers] = {34,75,33,68,-24,-7,66,86,23,1};
	int sumarrays[numbers];
	int mularrays[numbers];
	int minvalue = array[0];
	int minindex = 0;
	int maxvalue = array[0];
	int maxindex = 0;
	int sumvaluearray = 0;
	int mulvaluearray = 0;
	int odd_quantity = 0;
	int even_quantity = 0;
       	for(int i = 0; i < numbers; ++i){
		if(array[i] < minvalue)
			minvalue = array[i];
			minindex = i + 1;
		
		if(array[i] > maxvalue)
			maxvalue = array[i];
			maxindex = i + 1;
		
	}	
	
	cout << "Min Value is: " << minvalue << "\t" << "Min Value's index: " << minindex << endl;
	cout << "Max Value is: " << maxvalue << "\t" << "Max Value's index: " << maxindex << endl;
	cout << minvalue << " + " << maxvalue << " = " << minvalue + maxvalue << endl;
	
	for(int i = 0; i < numbers; ++i){
		cout << array[i] << "\t";
	}

	cout << endl <<  "_______________________________________________________________" << endl << endl;

	for(int i = numbers-1; i >= 0; --i){
		cout << array[i] << "\t";
	}

	cout << endl;

	for(int i = 0; i < numbers; ++i){
		array[i] % 2 == 0 ? ++odd_quantity : ++even_quantity;
	}

	cout << "Odd Value's quantity: " << odd_quantity << endl;
	cout << "Even Value's quantity: " << even_quantity << endl;

	cout << endl;
	
	for(int i = 0; i < numbers; ++i){
		sumarrays[i] = array[i] + secondarray[i];
		cout << array[i] << " + " << secondarray[i] << " = " << sumarrays[i] << endl;
	       	mularrays[i] = array[i] * secondarray[i];	
		cout << array[i] << " * " << secondarray[i] << " = " << mularrays[i] << endl;
	}


	for(int i = 0; i < numbers; ++i){
		sumvaluearray += array[i];
		mulvaluearray *= array[i];
	}


	cout << "Array value's sum and mul the arithmetic average: " << (sumvaluearray + mulvaluearray) / 2 << endl;

	int x = 4;

	int matrix[x][x] = {
			    {1,2,3,4},
			    {5,6,7,8},
			    {8,2,5,6},
			    {6,5,4,3}   
			   };

	int sumfirst = 0;
	int sumsecond = 0;
	
	cout << "MATRIX FIRST AND SECOND DIOGANALS ELEMENT'S " << endl;
	for(int i = 0; i < x; ++i){
		for(int j = 0; j < x; ++j){
			if(i == j || (i + j == x -1))
				cout << matrix[i][j] << "\t";
			else
				cout << " " << "\t";
		}cout << "\n" ;
	}



	for(int i = 0; i < x; ++i){
		for(int j = 0; j < x; ++j){
			if(i == j)
				
				sumfirst += matrix[i][j];
			if((i + j) == x - 1)
				
				sumsecond += matrix[i][j];
		}
	}

	cout << "first and second dioganals elements sum is: " << sumfirst + sumsecond << endl;

	cout << "___________________________________" <<  endl;




	const char str[] = "Hello my freind.My name is Arsen.How old are you?)";
	char result = FindRepeatChar(str);

	cout << "Most Repeat character is: " << "{" << result <<  "}" << endl;

	



	


	return 0;
}
