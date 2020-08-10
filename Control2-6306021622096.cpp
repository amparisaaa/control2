#include<iostream>
#include<string>
using namespace std;
int score(int *midterm,int *final,int *hw);
int show(int *midterm,int *final,int *hw,int *sum);
int cal(int score);
int main()
{
	int midterm,final,hw,sum;
	score(&midterm,&final,&hw);
	sum=midterm+final+hw;
	show(&midterm,&final,&hw,&sum);
	return 0;
}
int score(int *midterm,int *final,int *hw)
{
	cout << "Enter your midterm score : ";
	cin >> *midterm;
	cout << "Enter your final score : ";
	cin >> *final;
	cout << "Enter your homework score : ";
	cin >> *hw;
	return 0;
}
int cal(int score)
{
	int score;
	string gpa;
	cout << "Enter your score : ";
	cin >> score;
	//**********************************************************
	if (score > 100 || score < 0 )
	{
		cout << "Your Score Inccorect " << endl;
	exit(0);
	}
	//************************************************************
	if (score >= 80 && score <= 100)  gpa =" A ";
	if (score >= 75 && score <= 79)  gpa = " B+" ;
	if (score >= 70 && score <= 74 )  gpa =  " B ";
	if (score >= 65 && score <= 69 )  gpa =  " C+";
	if (score >= 60 && score <= 64)  gpa =  " C " ;
	if (score >= 55 && score <= 59 )  gpa =  " D+";
	if (score >= 50 && score <= 54 ) gpa = " D ";
	if (score < 50 )  gpa = " F " ;
	//************************************************************
	cout << "Your score is : " << gpa << endl;
	return(0);
}
int show(int *midterm,int *final,int *hw,int *sum)
{
	cout << "Midterm score : " << *midterm << endl ;
	cout << "Final score : "<< *final << endl;
	cout << "Homework score : " << *hw << endl;
	cout << "Grade : ";
	cal(*sum);
	cout << endl;
	return 0;
}