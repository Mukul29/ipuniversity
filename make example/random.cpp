#include "random.h"

students::students()
{
        for(int i = 0; i < N; i++)
        {
                strcpy(names[i], "John Doe");
        }
}

void students::input()
{
        for(int i = 0; i < N; i++)
        {   
                cout<<"Enter name of student "<<i+1<<": ";
                cin.getline(names[i], LEN);
        }
}

void students::displayRandom()
{
        int j;
        srand(time(NULL));
        for(int i = 0; i < N; i++)
        {
                j = rand() % N;
                puts(names[j]);
        }
}

void students::display()
{
        for(int i = 0; i < N; i++)
        {
                cout<<"Name of student "<<i+1<<" is ";
                puts(names[i]);
        }
}

