// create two classes sports (with score) and academics (with marks). derive a class result that inherits from both and displays final score.
#include<iostream>
using namespace std;
class sports
{
    protected:
    int score;
        public:

    void input1()
    {
        cout <<"Enter the score : ";
        cin>>score;
    }
};

class academic
{
    public:
    int marks;

    public:

    void input2()
    {
        cout <<"Enter the marks : ";
        cin>>marks;
    }
};
class result : public sports , public academic
{
    public :

    void display()
    {
        int final_result = score + marks;
        cout <<" Final score = "<<final_result;
    }
};

int main()
{
    result r;
    r.input1();
    r.input2();
    r.display();
    return 0;
}
