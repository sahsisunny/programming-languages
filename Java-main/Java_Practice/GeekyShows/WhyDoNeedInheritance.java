class WhyDoNeedInheritance{
	public static void main(String args[])
	{
		
	}
class Employee
	{
		int id;
		char Name[50];
		int age;
		char Department_Name[50];
		int salary;
		char Address[100];
		void display_name(void);
		void display_id(void);
		void raise_salary(float percent);
	};
class Manager
{
		int id;
		char Name[50];
		int age;
		char Department_Name[50];
		int salary;
		char Address[100];
		char Name_of_secretary[50];		//No Match
		void display_name(void);
		void display_id(void);
		void raise_salary(float percent);
		void display_secretary_name(void);	//No Match
};
class Manager extents Employee
{
	char name_of_secretary[50];
	void display_secretary_name(void);
};