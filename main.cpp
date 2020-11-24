#include <iostream>
#include "string"
using namespace std;
class Graduate
{
public:
	string name;
	bool gender;
	int id;
	double score;
	string research;
	string tutor;
	const string university;
	Graduate():university("sdnu")
	{
		name = "000";
		gender = 0;
		id = 0;
		score = 0.0;
		research = "000";
		tutor = "000";
		const string university = "sdnu";
		//const string university="sdnu";
		cout << "Graduate() is called" << endl;
	}
	Graduate(string n, bool g, int i, double s, string r, string t) :university("sdnu")
	{
		//const string university = "sdnu";
		name = n;
		id = i;
		gender = g;
		score = s;
		research = r;
		cout << "Graduate(string n, bool g, int i, double s, string r, string t) is called" << endl;
	}
	void graduate(string n, bool g, int i, double s, string r, string t)
	{
		const string university = "sdnu";
		name = n;
		id = i;
		gender = g;
		score = s;
		research = r;
		cout << "graduate(string n, bool g, int i, double s, string r, string t) is called" << endl;
	}
	Graduate(const Graduate &graduate) :university("sdnu")
	{
		this->name = graduate.name;
		this->gender = graduate.gender;
		this->id = graduate.id;
		this->research = graduate.research;
		this->score = graduate.score;
		this->tutor = graduate.tutor;
		//this->university = "sdnu";
		cout << "Graduate(const Graduate &graduate)" << endl;
	}
	~Graduate()
	{
		cout << "~Graduate() is called" << endl;
		getchar();
	}
	void Display()
	{
		cout << "name:      " << name << endl;
		cout << "id:        " << id << endl;
		cout << "gender:    " << gender << endl;
		cout << "research:  " << research << endl;
		cout << "score:     " << score << endl;
		cout << "tutor:     " << tutor << endl;
		cout << "university:" << university << endl;
	}
	void Display(const Graduate &graduate) const
	{
		cout << "name:      " << graduate.name << endl;
		cout << "id:        " << graduate.id << endl;
		cout << "gender:    " << graduate.gender << endl;
		cout << "research:  " << graduate.research << endl;
		cout << "score:     " << graduate.score << endl;
		cout << "tutor:     " << graduate.tutor << endl;
		cout << "university:" << graduate.university << endl;
	}
	void Average(const Graduate *graduate)
	{
		double sum = 0.0;
		for (int i = 0; i < 5; i++)
		{
			sum += graduate->score;
		}
		cout << "average score:" << sum / 5 << endl;;
	}

protected:
private:
};
int main()
{
	Graduate student[5];
	Graduate studentone;
	int id = 1;
	string name = "qsy";
	string research = "AI";
	string tutor = "MISS.Q";
	double score = 97.5;
	bool gender = 0;
	Graduate studenttwo(name, gender, id, score, research, tutor);
	cout << "*************studentone***************" << endl;
	studentone.Display();
	cout << "*************studenttwo***************" << endl;
	studenttwo.Display();
	for (int i = 0; i < 5; i++)
	{
		cout << "name: ";
		cin >> name;
		cout << "gender: ";
		cin >> gender;
		cout << "id: ";
		cin >> id;
		cout << "score: ";
		cin >> score;
		cout << "research: ";
		cin >> research;
		cout << "tutor:";
		cin >> tutor;
		student[i].graduate(name,gender,id,score,research,tutor);
	}
	cout << "*************studenttwo***************" << endl;
	student[5].Average(student);
	system("pause");
	return 0;
}