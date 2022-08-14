#include <iostream>
using namespace std;

class stu
{
    private:
        char name[100];
        char enroll[10];

    public:
        void getdata()
            {
                cout << "enter the name\n";
                cin >> name;
                cout << "enter the enrollment number";
                cin >> enroll;
            }
        void showdata()
            {
                cout << name << endl << enroll<<endl;
            }
};

class marks : public stu
{
    private:
        int p, c, m;
    public:
            void getmarks()
                    {
                        cout<<"enter the marks for p,c and m";
                        cin>>p>>c>>m;
                    }
                void showresult()
                    {
                        cout<<"total  "<<p+c+m<<endl;
                    }
};


int main()
{
    marks s;
    s.getdata();
    s.getmarks();
    s.showdata();
    s.showresult();
    return 0;
}