#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//int main()
//{
//	vector<int>numLog = { 0,1,0,10};
//	string result;
//	int Number = 0;
//	//string num = to_string(result);
//	vector<string>num_string;
//	for (int n : numLog)
//	{
//		num_string.push_back(to_string(n));
//	}
//
//	for (string s : num_string)
//	{
//		if (s == "1")
//		{
//			result += 'w';
//		}
//		else if (s == "-1")
//		{
//			result += 's';
//		}
//		else if (s == "10")
//		{
//			result += 'd';
//		}
//		else if (s == "-10")
//		{
//			result += 'a';
//		}
//	}
//	cout << result << " ";
//
//	return 0;
//}






//int main()
//{
//	vector<int>Num = { 0,1,0,1,0 };
//	vector<string>Num_list;
//	string result;
//	string Number;
//	for (int n : Num)
//	{
//		Num_list.push_back(to_string(n));
//		for (int i = 0; i < Num_list.size(); i++)
//		{
//			result += Num_list[i] + Num_list[i + 1];
//			if (result == "1")
//			{
//				Number += "w";
//			}
//			else if (result == "-1")
//			{
//				Number += "s";
//			}
//			else if (result == "10")
//			{
//				Number += "d";
//			}
//			else if (result == "-10")
//			{
//				Number += "a";
//			}
//
//		}
//		cout << Number << " ";
//	}
//	return 0;
//}







//int main()
//{
//	vector<int>num = { 0,1,0,1,1,1,1,10,-10,-10 };
//	//vector<string>Num_list;
//	string Number;
//	//for (int n : num)
//	//{
//		//Num_list.push_back(to_string(n));
//		for (int i = 0; i < num.size(); i++)
//		{
//			if (num[i] == 1)
//			{
//				Number += "w";
//			}
//			else if (num[i] == -1)
//			{
//				Number += "s";
//			}
//			else if (num[i] == 10)
//			{
//				Number += "d";
//			}
//			else if (num[i] == -10)
//			{
//				Number += "a";
//			}
//			/*else
//			{
//				return 0;
//			}*/
//		}
//		cout << Number << " ";
//	//}
//	
//	return 0;
//}





//int main()
//{
//	vector<int>num = { 0,1,1,-1,1,1 };
//	string Num;
//	int result = 0;
//	for (int i = 0; i < num.size(); i++)
//	{
//		result += num[i];
//
//		if (result == 1)
//		{
//			Num += "w";
//		}
//		else if (result == -1)
//		{
//			Num += "s";
//		}
//		else if (result == 10)
//		{
//			Num += "d";
//		}
//		else if (result == -10)
//		{
//			Num += "a";
//		}
//	}
//	
//	cout << Num << " ";
//	return 0;
//}






//int main()
//{
//	vector<int>sum = { 0,1,1,-1,0,-1 };
//	int result = 0;
//	string Number;
//	for (int i = 0; i < sum.size(); i++)
//	{
//		if (sum[i] + 1)
//		{
//			Number += "w";
//			//return false;
//		}
//		else if (sum[i] - 1)
//		{
//			Number += "s";
//		}
//		else if (sum[i] + 10)
//		{
//			Number += "d";
//		}
//		else if (sum[i] - 10)
//		{
//			Number += "a";
//		}
//		/*else if (sum[i] + 1)
//		{
//			Number += "w";
//		}*/
//		else
//		{
//			break;
//		}
//	}
//	cout << Number << " ";
//	return 0;
//}




//int main()
//{
//	vector<int>sum = { 0,1,-1,1,0,1 };
//	string Number;
//	for (int num : sum)
//	{
//		if (num + 1)
//		{
//			Number += "w";
//		}
//		else if(num - 1)
//		{
//			Number += "s";
//		}
//		else if (num + 10)
//		{
//			Number += "d";
//		}
//		else if (num - 10)
//		{
//			Number += "a";
//		}
//	}
//	cout << Number << " ";
//	return 0;
//}





int main()
{
	//vector<int>num = { 0,-1,1,0,2,1,10 };
	vector<int>num = { 0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1 };
	int result = 0;
	string Number = "";
	for (size_t i = 1; i < num.size(); i++)
	{
		result = num[i] - num[i - 1];
		if (result == 1)
		{
			Number += "w";
		}
		else if (result == -1)
		{
			Number += "s";
		}
		else if (result == 10)
		{
			Number += "a";
		}
		else if (result == -10)
		{
			Number += "d";
		}
	}
	cout << Number << " ";
	return 0;
}