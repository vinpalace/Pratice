#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;


struct node
{
    int info;
    struct node *next;

}*start;


//Class declaration

class single_llist
{
public:
    node* create_node(int);
    void insert_begin();
    void insert_pos();
    void insert_last();
    void display();

    single_llist()
    {
        start = NULL;
    }
};

main()
{
    int choice, nodes, element, position, i;
    single_llist sl;

    start = NULL;

    while(1)
    {
        cout<<endl;
        cout<<"1.Insert Node at begining"<<endl;
        cout<<"2.Insert NOde at last"<<endl;
        cout<<"3.Insert Node at position"<<endl;
        cout<<"4.Display"<<endl;

        cout<<"Enter your choice"<<endl;
        cin>>choice;


        switch(choice)
        {
            case 1:
            cout<<"Insert at beginning:"<<endl;
            sl.insert_begin();
            cout<<endl;
            break;

            case 2:
            cout<<"Insert node at last:"<<endl;
            sl.insert_last();
            cout<<endl;
            break;

            case 3:
            cout<<"Insert node at pos"<<endl;
            sl.insert_pos();
            cout<<endl;
            break;

            case 4:
            cout<<"Display"<<endl;
            sl.display();
            cout<<endl;
            break;
        }
    }
}

node* single_llist::create_node(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
    if(temp == NULL)
    {
        cout<<"Memory not allocated"<<endl;
        return 0;
    }
    else
    {
        temp ->info = value;
        temp -> next = NULL;
        return temp;
    }
}

void single_llist::insert_begin()
{
    int value;
    cout<<"Enter the value to be inserted";
    cin>>value;
    struct node *temp, *p;

    temp = create_node(value);
    if(start == NULL)
    {
        start = temp;
        start -> next = NULL;
    }

    else
    {
        p = start;
        start = temp;
        start -> next = p;
    }

    cout << "Element inserted at beginning"<<endl;
}


void single_llist::insert_last()

{

    int value;

    cout<<"Enter the value to be inserted: ";

    cin>>value;

    struct node *temp, *s;

    temp = create_node(value);

    s = start;

    while (s->next != NULL)

    {

        s = s->next;

    }

    temp->next = NULL;

    s->next = temp;

    cout<<"Element Inserted at last"<<endl;

}



/*

 * Insertion of node at a given position

 */

void single_llist::insert_pos()

{

    int value, pos, counter = 0;

    cout<<"Enter the value to be inserted: ";

    cin>>value;

    struct node *temp, *s, *ptr;

    temp = create_node(value);

    cout<<"Enter the postion at which node to be inserted: ";

    cin>>pos;

    int i;

    s = start;

    while (s != NULL)

    {

        s = s->next;

        counter++;

    }
    if (pos == 1)

    {

        if (start == NULL)

        {

            start = temp;

            start->next = NULL;

        }

        else

        {

            ptr = start;

            start = temp;

            start->next = ptr;

        }

    }

    else if (pos > 1  && pos <= counter)

    {

        s = start;

        for (i = 1; i < pos; i++)

        {

            ptr = s;

            s = s->next;

        }

        ptr->next = temp;

        temp->next = s;

    }

    else

    {

        cout<<"Positon out of range"<<endl;

    }

}


void single_llist::display()
{
    struct node *temp;
    if(start == NULL)
    {
        cout<<"The list is empty"<<endl;
        return;
    }

    temp = start;
    cout<<"Elements of list are:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}
