#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Node 
{
public:
    char letter;
    Node* next;
    Node* prev;
    Node() { next = prev = NULL; };
    Node(char c) { next = prev = NULL; letter = c; };
};


int main() 
{


    Node* start=nullptr;
    Node* end=nullptr;
    char c;

    cout << "Start typing!" << endl;
    while(1)
    {
        char c = _getch();
        cout << c;
        if (c == 27)
        {
            break;
        }
        if (start == nullptr)
        {
            Node* p(c);
            start = p;
            end = start;
        }
        else
        {
            Node* p(c);
            end->next = p;
            p->prev = end;
            end = p;

        }


    }

    cout << "print linked list: " << endl;
    Node* T;
    T = start;
    //T = end; print backwards 
    while (T!= nullptr)
    {
        cout << T->letter << " ";
        T = T->next;
    }






    return 0;
}