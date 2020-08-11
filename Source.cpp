#include <iostream>

class Student
{
public:
    Student(std::string fName, std::string lName, int const& Grade, int Age)
    {
        m_fName = fName;
        m_lName = lName;
        m_Grade = Grade;
        m_Age = Age;
    }

    Student(Student const& other)
    {
        m_Grade = other.m_Grade;
    }

    Student& operator=(Student const& other)
    {
        m_Grade = other.m_Grade;

        return *this;
    }

    std::string getfName()
    {
        return m_fName;
    }

    std::string getlName()
    {
        return m_lName;
    }

    int getAge()
    {
        return m_Age;
    }

private:
    std::string m_fName;
    std::string m_lName;
    int m_Grade;
    int m_Age;
};
int main()
{
    Student p1("Joe", "Smith", 1, 5);
    Student p2(p1);
    Student p3 = p1;
}