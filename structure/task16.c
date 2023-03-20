#include<stdio.h>
int main()
{
    struct play
    {
        char name[10];
        int playnum;
    };
    struct play p1={"virat",18};
    srtuct play p2=p1;
    if(p1==p2)
    printf("rwo structure members are equal");
}