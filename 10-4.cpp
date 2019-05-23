#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
	Date();
	Date(int, int, int);
	void print();

private:
	int month;
	int day;
	int year;
};

	Date::Date()
	{

	}

	Date::Date(int mn, int dy, int yr)
	{
		month = mn;
		day = dy;
		year = yr;
	}

	void Date::print()
	{
		cout << month << "/" << day << "/" << year;
	}
	
class Student
{
public:
	Student();

	Student(string , Date, int );

	void setName(string);

	void setDate(Date);

	void setScore(int);

	string getName() const;

	Date getDate() const;

	int getScore() const;

	void print();

private:
	string name;
	Date birthDay;
	int score;
};

	Student::Student()
	{	}

	Student::Student(string newName, Date DateOfBirth, int newScore)
	{
		name = newName;
		birthDay = DateOfBirth;
		score = newScore;
	}

	void Student::setName(string newName)
	{
		name = newName;
	}

	void Student::setDate(Date DateOfBirth)
	{
		birthDay = DateOfBirth;
	}

	void Student::setScore(int newScore)
	{
		score = newScore;
	}

	string Student::getName() const
	{
		return name;
	}

	Date Student::getDate() const
	{
		return birthDay;
	}

	int Student::getScore()const
	{
		return score;
	}

	void Student::print()
	{
		cout << name << " ";
		birthDay.print();
		cout << " " << score << endl;
	}

int main()
{
	Date birth1(6, 1, 1999);
	Date birth2(10, 8, 1997);
	
	Student student1("John", birth1, 90);
	Student student2("Marry", birth2 , 80);

	string name;
	int day,mouth,year;
	cin>>name>>mouth>>day>>year;
	student1.setName(name);
	Date chang(mouth,day,year);
	student2.setDate(chang);

	student1.print();
	student2.print();

}
