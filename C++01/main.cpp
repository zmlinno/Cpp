#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

//int main()
//{
//	string s;
//	cin >> s;
//
//	for (char c : s)
//	{
//		cout << c << endl;
//	}
//	return 0;
//}

//
//int main()
//{
//	int sum;
//	cin >> sum;
//	if (sum % 2 == 0)
//	{
//		cout <<sum<<" " << "is even" << endl;
//	}
//	else
//	{
//		cout <<sum<<" " << "is odd" << endl;
//	}
//	return 0;
//}





//string solution(string my_string, string overwrite_string, int s)
//{
//	//��һ��������ԭ�ַ�����ǰ���� ��0��s-1
//	string prefix = my_string.substr(0, s);
//
//	//�ڶ�����ֱ���滻�м䲿��Ϊoverwrite_string
//	string middle = overwrite_string;
//
//	//������������ʣ�ಿ�� ��s+overwrite_string.length()������
//	string suffix = my_string.substr(s + overwrite_string.length());
//
//	return prefix + middle + suffix;
//}
//
//int main()
//{
//	string result1 = solution("HelloWorld", "22oWor2", 2);
//	cout << result1 << endl;
//
//	string result2 = solution("Program2988UYP", "mers123", 7);
//	cout << result2 << endl;
//	return 0;
//}

//֪ʶ���ܽ�1 ����STL�е�string��ĳ�Ա���� substr

//int main()
//{
//	string my_write = "HelloWorld";
//	string subb = my_write.substr(0, 5);
//	cout << subb << endl;
//
//	string subb1 = my_write.substr(5);
//	cout << subb1 << endl;
//	//���������5��ʼ��ʣ���ַ�
//	
//	string subb2 = my_write.substr(3, 4);
//	cout << subb2 << endl;
//	//��ȡ������3��ʼ��4���ַ�
//	return 0;
//}





//string mengString(const string& str1, const string& str2)
//{
//	int len1 = str1.size();
//	int len2 = str2.size();
//	int length = max(str1, str2);
//	string result;
//	for (int i = 0; i < length; i++)
//	{
//		if (i < len1)
//		{
//			result += str1[i];
//		}
//		if (i < len2)
//		{
//			result += str2[i];
//		}
//		return result;
//	}
//}
//int main()
//{
//	string str1 = "aaaaa";
//	string str2 = "bbbbb";
//
//	string result = mengString(str1, str2);
//	cout << result << endl;
//
//	cout << endl;
//	return 0;
//}





//int main()
//{
//	int length = 5;
//	for (int i = 0; i < length; i++)
//	{
//		cout << i << endl;
//	}
//	cout << endl;
//	
//	return 0;
//}



//
//int main()
//{
//	string length = "helloworld";
//	for (int i = 0; i < length.size(); i++)
//	{
//		cout << length[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}







//int main()
//{
//	string str;
//	cin >> str;
//	string answer;
//	for (const char& arr : str)
//	{
//		answer += arr;
//	}
//	cout << answer << endl;
//	cout << endl;
//	return 0;
//}







//int main()
//{
//	string s;
//	int k;
//	cin >> s;
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		cout << s << "";
//	}
//	cout << endl;
//	return 0;
//}



//
//int main()
//{
//	int a = 0, b = 0;
//	cin >>a>>b;
//	string num1 = to_string(a);
//	string num2 = to_string(b);
//	string A = num1 + num2;
//	string B = num2 + num1;
//
//	if (A > B)
//	{
//		cout << A << endl;
//		return stoi(A);
//		
//	}
//	else if (B > A)
//	{
//		cout << B << endl;
//		return stoi(B);
//		
//	}
//	else
//	{
//		cout << A << endl;
//		return stoi(A); //����ֵ��ȵĻ�����������һ��
//		
//	}
//	cout << endl;
//	return 0;
//}







//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	string num = to_string(a);
//	string num1 = to_string(b);
//
//	string number = num + num1;
//
//	int number1 = 2 * a * b;
//	string number2 = to_string(number1);
//
//	if (number > number2)
//	{
//		cout << "1��2��:" << endl;
//	}
//	else
//	{
//		cout << "1��2С:" << endl;
//	}
//	cout << endl;
//	return 0;
//}




//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int num = stoi(to_string(a) + to_string(b));
//	int num1 = 2 * a * b;
//	if (num > num1)
//	{
//		cout << "num��" << endl;
//	}
//	else
//	{
//		cout << "num1��" << endl;
//	}
//	return 0;
//}






//int main()
//{
//	int a = 10; 
//	int sum = 0;
//	int num = 0;
//	while (a % 2 == 0)
//	{
//		sum += pow(a, 2);
//		a = a - 2;
//		if (a < 0)break;
//	}
//	cout << sum << endl;
//
//	int b = 7;
//	while (b % 2 != 0)
//	{
//		num += b;
//		b = b - 2;
//		if (b < 0)break;
//	}
//	cout << num << endl;
//	cout << endl;
//	
//	return 0;
//}




//int main()
//{
//	int a = 10, b = 20;
//	string num1 = to_string(a);
//	string num2 = to_string(b);
//
//	string Number = num1 + num2;
//
//	bool Greater = (Number < num2);
//	if (Greater)
//	{
//		cout << "����" << endl;
//	}
//	else
//	{
//		cout<<"��ȷ" << endl;
//	}
//	cout << Number << endl;
//	cout << endl;
//	return 0;
//}






//
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int sum = a + b;
//	int sum1 = a - b;
//	cout << sum << endl;
//	cout << sum1 << endl;
//	cout << endl;
//
//	return 0;
//}

//bool sum(int result, int expected)
//{
//	return result == expected;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int result = a + b;
//	int expected;
//	cin >> expected;
//
//	if (sum(result, expected))
//	{
//		cout << "��ȷ" << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
//	}
//	cout << endl;
//	return 0;
//}




//int main()
//{
//	vector<int>result = { 2,1,6 };
//	cout << result.back() << endl;//�����Ļ���ӡ���һ��Ԫ��
//	//������
//	cout << result.size() - 1 << endl;
//	cout << result[result.size() - 1] << endl;//���Ҳ�Ǵ�ӡ6
//	//cout << result[result.back() - 1] << endl; //���Ϊ�α���
//	cout << result[result.size() - 2] << endl;//��ӡ�����ڶ���
//	
//	
//	cout << endl;
//	return 0;
//}




int main()
{
	int sum = 0;
	//vector<int>result = { 2,1,6 };
	vector<int>result = { 5,2,1,7,5 };
	if (result.back() > result[result.size() - 2])
	{
		//cout << "True" << endl;
		sum = result.back() - result[result.size() - 2];
		result.push_back(sum);
	}
	else
	{
		sum = result.back() * 2;
		result.push_back(sum);
		//cout << "False" << endl;
	}
	for (int number : result)
	{
		cout << number << " ";
	}
	//cout << sum << " ";
	cout << endl;
	cout << result.size() << " ";
	cout << endl;
	return 0;
}