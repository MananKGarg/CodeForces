#include<iostream>

int index_minimum(int arr[], int n)
{
	int temp{};
	temp = arr[0];
	int index{};

	for (int i{}; i < n; ++i)
	{
		if (temp > arr[i])
		{
			temp = arr[i];
			index = i;
		}
	}
	return index;
}

int main()
{
	int t{};
	std::cin >> t;
	for (int i{}; i < t; ++i)
	{
		int n{};
		int k{};
		int arr[1005];

		std::cin >> n >> k;

		for (int j{}; j < n; ++j)
		{
			std::cin >> arr[j];
		}

		int min_index{};
		min_index = index_minimum(arr, n);
		int min_element{};
		min_element = arr[min_index];

		int counter{};
		for (int p{}; p < n; ++p)
		{
			if (p != min_index)
			{
				counter = counter + ((k - arr[p]) / min_element);
			}
		}
		std::cout << counter << "\n";		
	}
	return 0;
}
