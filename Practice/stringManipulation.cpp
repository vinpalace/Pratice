#include<cstring>
#include<iostream>


#define reinitialize() { strcpy(one,"Vineeth"); strcpy(two,"Moturu"); }

using namespace std;



int main()

{

    char one[50], two[50];

    reinitialize();

    strcat(one, two);

    cout<<"strcat result->"<<endl;
    cout<<one<<endl;
    cout<<two<<endl;

    reinitialize();


    strncat(one, two, 3);

    cout<<"Strncat result"<<endl;
    cout<<one<<endl;
    cout<<two<<endl;

    reinitialize();

    char* temp;

    temp = strchr(one, 'n');
    cout<<"strchr results ->\n"<<temp;

    int result;

    strcpy(one,"vineeth");
    strcpy(two, "vineetH");

    result = strcmp(one, two);

    cout<<endl<<result;

    result = strlen(one);

    cout<<endl<<result;

    //STRPBRK;


    strcpy(one, "vineeth");
    strcpy(two, "zn");

    temp = strpbrk(one,two);

    cout<<temp<<endl;

    strcpy(one, "vineeth");

    temp = strrchr(one, 'e');

    cout<<endl<<temp;

    







    return 0;
}
