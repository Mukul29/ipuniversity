#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <stdlib.h>

#define N 5
#define LEN 10

using namespace std;
class students
{
        char names[N][LEN];
        //int status[N];

        public:
                students();
                //students(char str[N][LEN]);
                void input();
                void displayRandom();
                void display();
                ~students()
                {
                        cout<<"Destructor is called.\n";
                }
};
