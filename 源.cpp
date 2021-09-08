#include <stdio.h>
#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;

void f(int* a)
{
    cout << *a << endl;
    cout << a << endl;
    cout << a + 1 << endl;
    cout << *(a + 1) << endl;
    cout << a[1] << endl;
    cout << "===============" << endl;
    cout << *a + 4 << endl;
    cout << *(a + 3) << endl;
    *(a + 3) = 1111;
    cout << "pppppppppp" << endl;
}

void w(string &s)//如果不用取地址，那么就是值传递，里面的修改不会影响到原数据
{
    int len = s.length();
    s[2] = 'h';
    cout << "len=" << len << endl;
}
int main_1() {

    //int b[7] = { 1,13,35,77,85,96,7322 };

    //f(b);
    //cout << b[0] << endl;
    //cout << b[1] << endl;
    //cout << b[2] << endl;
    //cout << b[3] << endl;
    //cout << b[4] << endl;
    //cout << b[5] << endl;

    //cout << "2222222222222222222222222222" << endl;
    //string ss = "qwer";
    //w(ss);
    //cout << ss << endl;
    //char p[] =  { 'q','w','e'};//3的长度
    //char p1[] = "qqq";//
    //cout << sizeof(p) << endl;
    //cout << sizeof(p1) << endl;//4的长度
    // 
    // 
    // 
    //return 0;


    struct stu
    {
        int Height;
        int Weight;
        int id;
    };
    int num = 0;
    cin >> num;
    stu st[10];
    stu tmp;
    tmp.Height = 0;
    tmp.Weight = 0;
    tmp.id = 0;
    for (int i = 0; i < num; i++)
    {
        st[i].id = i;
    }  
    for (int i = 0; i < num; i++)
    {
        cin >> st[i].Height;
    }
    for (int i = 0; i < num; i++)
    {
        cin >> st[i].Weight;
    }

    for (int i = 0; i < num-1; i++)
    {
        for (int j = 0; j < num -i-1 ; j++)
        {
            if (st[j].Height > st[j + 1].Height)
            {
                tmp.Height = st[j].Height;
                tmp.Weight = st[j].Weight;
                tmp.id = st[j].id;

                st[j].Height = st[j + 1].Height;
                st[j].Weight = st[j + 1].Weight;
                st[j].id = st[j + 1].id;

                st[j + 1].Height = tmp.Height;
                st[j + 1].Weight = tmp.Weight;
                st[j + 1].id = tmp.id;
            }
            else if (st[j].Height == st[j + 1].Height)
            {
                //cout<<"H:"<<st[i].Height<<endl;
                if (st[j].Weight > st[j + 1].Weight)
                {
                    tmp.Height = st[j].Height;
                    tmp.Weight = st[j].Weight;
                    tmp.id = st[j].id;

                    st[j].Height = st[j + 1].Height;
                    st[j].Weight = st[j + 1].Weight;
                    st[j].id = st[j + 1].id;

                    st[j + 1].Height = tmp.Height;
                    st[j + 1].Weight = tmp.Weight;
                    st[j + 1].id = tmp.id;
                }
            }



        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << st[i].id+1 << " ";
    }
    return 0;

}

char *tt1()
{
    char a[10] = "123456789";//只能放9个元素，因为最后面还有一个'\0'

    cout << sizeof(a) << " a=" << a << endl;

    return a;
}


int main_122()
{

    char *b = tt1();

    cout << "b:"<< b << endl;

    int fFF();
    fFF();
    return 0;

}
int fFF()
{
    int b;
    cout << "ffffff" << endl;
    cout << "ffffff" << endl;
    return 0;
}