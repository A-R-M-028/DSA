/* C++ code to demonstrate a 2D vector
with elements(vectors) inside it. */
#include <iostream>
#include <vector>
using namespace std;
//M1
int main()
{
	
	vector<vector<int>> vect
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	//printing
	for (int i = 0; i < vect.size(); i++)
	{
		for (int j = 0; j < vect[i].size(); j++)
		{
			cout << vect[i][j] << " ";
		}	
		cout << endl;
	}

	return 0;
}
//M2
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    vector<vector<int> > arr(row, vector<int>(col, -8));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
