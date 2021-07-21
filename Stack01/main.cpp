#include <iostream>
#include <stdio.h>

using namespace std;
int top= -1;
int S[100];

bool IsEmpty(int top)
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Insert (int S[], int val, int top)
{
    if (top < 0)
    {
        S[0]=val;
        top = 0;
    }
    else
    {
        S[top+1]=val;
        top++;
    }

}
bool IsFull(int top)
{
    if(top >= top - 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}
void Print(int S[], int top)
{
    for (int i=0; i<=top; i++)
    {
        cout<<S[i];
    }
}
int Size()
{
    return top+1;
}
int Topstack(int S[])
{
    return S[top];

}
void Delete()
{
    if(IsEmpty()== true)
    {
        cout<<"Stack rong";
    }
    else
    {
        --top;
    }
}

int main()
{
    int S[100];

    Insert(S, 1, top);
    Print(S, top);
}
