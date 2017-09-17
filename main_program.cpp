#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("file.in", ios::in);

	if(!inFile){
		cerr << "ERROR! FILE OPEN FAILURE" << endl;
		exit(EXIT_FAILURE);
	}

	int cow_num;
	int current_cow_weight;
	vector<int> cow_weight;
	
	inFile >> cow_num;

	if(cow_num <= 5 || cow_num >= 10000)
	{
		return 0;
	}

	for(int i = 0; i < cow_num; ++i)
	{
		inFile >> current_cow_weight;
		cow_weight.push_back(current_cow_weight);
	}

	sort(cow_weight.begin(), cow_weight.end());

	int top_five_cow_total_weight = 0;

	for(int i = 0; i < 5; ++i)
	{
		top_five_cow_total_weight += cow_weight.back();
		cout << cow_weight.back() << "\n";
		cow_weight.pop_back();
	}

	cout << top_five_cow_total_weight << endl;

	return 0;
}
