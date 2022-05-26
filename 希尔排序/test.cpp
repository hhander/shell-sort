#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < sz; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				int tmp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = tmp;
//			}
//			else
//			{
//				break;
//			}
//
//		}
//	}
//
//	for (int n = 0; n < sz; n++)
//	{
//		cout << arr[n] << " ";
//	}
//
//	return 0;
//}

//Ï£¶ûÅÅÐò shell sort

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int h = 1;
	while (h < (sz / 2))
	{
		h = 2*h + 1;
	}

	while (h >= 1)
	{
		for (int i = h; i <sz; i++)
		{
			for (int j = i; j >= h; j -= h)
			{
				if (arr[j - h] > arr[j])
				{
					int tmp = arr[j - h];
					arr[j - h] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		h = h / 2;
	}
	for (int n = 0; n < sz; n++)
	{
		cout << arr[n] << " ";
	}

	return 0;
}


