#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{	int i,s=0,b[1000000];
 for(i=0;i<d;i++)
    {
        b[i]=input[i];
        
    }
    for(i=d;i<n;i++)
    {
        input[s]=input[i];
        s++;
    }
 s=0;
 for(i=n-d;i<n;i++)
    {
        input[i]=b[s];
        s++;
    }
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
