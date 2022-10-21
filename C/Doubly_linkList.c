#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
/*
\\\\\\\\\\\\\\\\\\\\\\\\
 \\\\\\\\\\\\\\\\\\\\\\\\
 ////////////////////////
////////////////////////
*/
typedef struct node Node;

struct node
{
    int num;
    Node *next;
    Node *prev;

}*head,*tail;
void animation();
void create_node();
void Insert_Begin(int num);
void Insert_End(int num);
void insert_Middle(int num,int pos);
void delete_begin();
void delete_end();
void delete_mid(int pos);
void delete_all();
void display();

void animation()
{
    system("CLS");

    printf("\t\t\t\t\t       __________________________\n");
    printf("\t\t\t\t\t      |                          |\n");
    printf("\t\t\t\t\t      |                          |\n");
    printf("\t\t\t\t\t      |                          |\n");
    printf("\t\t\t\t\t      |       Windows xp         |\n");
    printf("\t\t\t\t\t      |                          |\n");
    printf("\t\t\t\t\t      |                          |\n");
    printf("\t\t\t\t\t      |                          |\n");
    printf("\t\t\t\t\t      '--------------------------'\n");
    printf("\t\t\t\t\t     /                       o  /\n");
    printf("\t\t\t\t\t    /  Q W E R T Y U I O P     /\n");
    printf("\t\t\t\t\t   /    A S D F G H J K L     /\n");
    printf("\t\t\t\t\t  /      Z X C V B N M <     /\n");
    printf("\t\t\t\t\t /                          /\n");
    printf("\t\t\t\t\t'--------------------------'\n");

    printf("\n\n\t\t\t\t  ");
    for(int i=0; i<40; i++)
    {
        printf(GREEN"%c"RESET, 178);
        usleep(45000);
    }
}


int main()
{
    system("CLS");
    int c,ch,num,pos;
    printf(BLUE"\t\t\t\t1. Create Node"RESET);
    printf(GREEN"\n\t\t\t\t2. Insert"RESET);
    printf(RED"\n\t\t\t\t3. Delete"RESET);
    printf(YELLOW"\n\t\t\t\t4. Display"RESET);
    printf(MAGENTA"\n\t\t\t\t5. Exit\n\n"RESET);
    printf("\t\t\t\tEnter choice: ");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        create_node();
        break;
    case 2:

        if(head==NULL)
        {
            printf("\n\t\t\t\tNode is Not Created Yet\n\n\t\t\t\tAt first Create a Node");
            getch();
            main();
        }
        else
        {
            system("CLS");
            printf(YELLOW"\t\t\t\t1. Insert In First\n"RESET);
            printf(CYAN"\n\t\t\t\t2. Insert In End\n"RESET);
            printf(BLUE"\n\t\t\t\t3. Insert In Middle\n\n"RESET);
            printf("\t\t\t\tEnter Choice: ");
            scanf("%d", &ch);
            if(ch==1)
            {
                printf("\n\t\t\t\tEnter Value: ");
                scanf("%d", &num);
                Insert_Begin(num);
                getch();
                main();
            }
            else if(ch==2)
            {
                printf("\n\t\t\t\tEnter Value: ");
                scanf("%d", &num);
                Insert_End(num);
                getch();
                main();
            }
            else if(ch==3)
            {
                printf("\n\t\t\t\tEnter Value: ");
                scanf("%d", &num);
                printf("\n\t\t\t\tEnter Position: ");
                scanf("%d", &pos);
                insert_Middle(num,pos);
                getch();
                main();
            }
            else
            {
                printf(RED"\n\t\t\t\tWrong Choice!!\n"RESET);
                getch();
                main();
            }
        }
        break;
    case 3:
        if(head==NULL)
        {
            printf("\n\t\t\t\tNode is Not Created Yet\n\n\t\t\t\tAt first Create a Node");
            getch();
            main();
        }
        else
        {
            system("CLS");
            printf(BLUE"\n\t\t\t\t1. Delete From Begin\n"RESET);
            printf(GREEN"\n\t\t\t\t2. Delete From End\n"RESET);
            printf(MAGENTA"\n\t\t\t\t3. Delete From Middle\n"RESET);
            printf(RED"\n\t\t\t\t4. Delete All Node\n\n"RESET);
            printf("\n\t\t\t\tEnter choice:");
            scanf("%d", &ch);
            if(ch==1)
            {
                delete_begin();
            }
            else if(ch==2)
            {
                delete_end();
            }
            else if(ch==3)
            {
                printf("\n\t\t\t\tEnter Position : ");
                scanf("%d", &pos);
                delete_mid(pos);
            }
            else if(ch==4)
            {
                delete_all();
            }
            else
            {
                printf(RED"\n\t\t\t\tWrong Choice!!"RESET);
                getch();
                main();
            }
        }
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
    default:
        printf(RED"\n\t\t\t\tWrong Choice!!!\n\n\t\t\t\tTry Again"RESET);
        getch();
        main();
    }
    return 0;
}
void create_node()
{
    Node *fnode;
    int num;
    int i,n;
    head=(Node*)malloc(sizeof(Node));
    if(head==NULL)
    {
        printf("\n\t\t\t\tMemory can not be allocated");
    }
    else
    {
        printf("\n\t\t\t\tEnter the number of nodes:");
        scanf("%d", &n);
        printf("\n\t\t\t\tEnter data for node 1:");
        scanf(" %d", &num);
        head->num=num;
        head->prev=NULL;
        head->next=NULL;
        tail=head;
        for(i=2; i<=n; i++)
        {
            fnode=(Node*)malloc(sizeof(Node));
            if(fnode==NULL)
            {
                printf("\n\t\t\t\tMemory can not be allocated");
                break;
            }
            else
            {
                printf("\n\t\t\t\tEnter data for node %d:", i);
                scanf(" %d", &num);
                fnode->num=num;
                fnode->prev=tail;
                fnode->next=NULL;
                tail->next=fnode;
                tail=fnode;
            }
        }
        main();
    }
}
void Insert_Begin(int num)
{
    Node *newnode;
    if(head == NULL)
    {
        printf("\n\t\t\t\tlist is empty\n");
    }
    else
    {
        newnode = (Node*)malloc(sizeof(Node));
        newnode->num = num;
        newnode->next = head;
        newnode->prev=NULL;
        head->prev=newnode;
        head = newnode;
        printf("\n\t\t\t\tInsert Successful");
    }
}
void Insert_End(int num)
{
    Node *newnode, *tmp;

    if(tail == NULL)
    {
        printf("\n\t\t\t\tlist is empty");
    }
    else
    {
        newnode = (Node*)malloc(sizeof(Node));
        newnode->num = num;
        newnode->next = NULL;
        newnode->prev=tail;
        tail->next=newnode;
        tail = newnode;
        printf("\n\t\t\t\tInsert Successful");
    }
}
void insert_Middle(int num, int pos)
{
    int i;
    Node *newnode, *tmp;
    if(tail == NULL)
    {
        printf("\n\t\t\t\tlist is empty.");
    }
    else
    {
        tmp=head;
        i=1;
        while(i<pos-1 && tmp!=NULL)
        {
            tmp=tmp->next;
            i++;
        }
        if(tmp!=NULL)
        {
            newnode=(Node*)malloc(sizeof(Node));
            newnode->num=num;
            newnode->next=tmp->next;
            newnode->prev=tmp;
            if(tmp->next!=NULL)
            {
                tmp->next->prev=newnode;
            }
            tmp->next=newnode;
            printf(GREEN"\n\t\t\t\tInsert Successful"RESET);
        }
        else
        {
            printf(RED"\n\t\t\t\tInsert is not possible to the given position.\n"RESET);
            getch();
            main();
        }

    }

}
void delete_begin()
{
    Node *tmp;
    if(head==NULL)
    {
        printf(CYAN"\n\t\t\t\tList is Empty\n"RESET);
        getch();
        main();
    }
    else
    {
        tmp=head;
        head=head->next;
        head->prev=NULL;
        printf("\n\t\t\t\tData %d Deleted Successfully\n", tmp->num);
        free(tmp);
        tmp=head;
        printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %d %p %p\n",tmp, tmp->num,tmp->prev,tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_end()
{
    Node *tmp;
    if(tail==NULL)
    {
        printf(GREEN"\n\t\t\t\tList is Empty\n"RESET);
        getch();
        main();
    }
    else
    {
        tmp=tail;
        tail=tail->prev;
        tail->next=NULL;
        printf("\n\t\t\t\tData %d Deleted Successfully\n", tmp->num);
        free(tmp);
        tmp=head;
        printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %d %p %p\n",tmp, tmp->num,tmp->prev,tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_mid(int pos)
{
    Node *tmp;
    int i;
    tmp=head;
    for(i=1; i<pos && tmp!=NULL; i++)
    {
        tmp=tmp->next;
    }
    if(pos==1)
    {
        printf("\n\t\t\t\tThis Is First Position.\n\n\t\t\t\tIf you Want to delete this\n\n\t\t\t\tThen go back and try\n\n\t\t\t\tDelete from Begin");
        getch();
        main();
        //delete_begin();
    }
    else if(tmp==tail)
    {
        printf("\n\t\t\t\tThis Is Last Position.\n\n\t\t\t\tIf you Want to delete this\n\n\t\t\t\tThen go back and try\n\n\t\t\t\tDelete from End");
        getch();
        main();
        //delete_end();
    }
    else if(tmp!=NULL)
    {
        tmp->prev->next=tmp->next;
        tmp->next->prev=tmp->prev;
        printf("\n\t\t\t\tData %d Successfully deleted from position %d",tmp->num, pos);
        free(tmp);
        tmp=head;
        printf("\n\n\t\t\t\tAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %d %p\n",tmp, tmp->num, tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }
    else
    {
        printf(RED"\n\t\t\t\tInvalid Position!"RESET);
        getch();
        main();
    }
}
void delete_all()
{
    Node *tmp;
    if(head==NULL)
    {
        printf(YELLOW"\n\t\t\t\tList is Empty"RESET);
        getch();
        main();
    }
    while(head!=NULL)
    {
        tmp=head;
        head=head->next;
        free(tmp);
    }
    printf("\n\t\t\t\tSuccessfully Deleted All Nodes %c%c%c\n", 1,1,1);
    getch();
    main();
}
void display()
{
    Node *tmp;
    if(head==NULL)
    {
        printf(RED"\n\t\t\t\tList is empty"RESET);
        getch();
        main();
    }
    else
    {
        tmp=head;
        printf("\n\t\t\t\tData Entered in list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %d %p %p\n",tmp, tmp->num,tmp->prev,tmp->next);
            tmp=tmp->next;
        }
    }
    getch();
    main();
}
