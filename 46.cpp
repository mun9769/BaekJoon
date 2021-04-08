#include <cstdio>
#include <cstdlib>
#include <algorithm>

typedef struct __node{
    int data;
    __node *pre=NULL;
    __node *next=NULL;
}Node;

typedef struct {
    int size;
    int cnt=0;
    Node *head;
    Node *tail;
}List;

void Init(List *l,int size)
{
    l->size = size;
    l->cnt = 0;
    l->head = NULL;
    l->tail = NULL;
}

void Add(List *l, int data)
{
    Node *p = (Node*)malloc(sizeof(Node));
    p->data = data;
    if(l->cnt == 0)
    {
        l->head = p;
        l->tail = p;
    }
    else
    {
        p->pre = l->tail;
        p->next = l->head;
        l->tail->next = p;
        l->tail = p;

        l->head->pre = p;
    }
    l->cnt++;
}

void MyRemove(List *l, int n)
{
    Node *p = l->tail;
    while(l->cnt > 1)
    {
        for(int i=0; i<n; i++)
            p = p->next;
        p->pre->next = p->next;
        p->next->pre = p->pre;

        if(l->tail == p)
            l->tail = p->pre;
        else if (l->head == p)
            l->head = p->next;
        l->cnt--;
    }
}

void Print(List *l)
{
    Node *p = l->head;
    for(int i=0; i<l->cnt; i++)
    {
        printf("data : %d\n",p->data);
        p = p->next;
    }
}
    


int main()
{
    List lst;
    int n, count;
    scanf("%d %d", &n, &count);
    Init(&lst,n);


    for(int i=1; i<=n; i++)
        Add(&lst, i);
    Print(&lst);
    MyRemove(&lst, count);
    printf("%d\n", lst.head->data);

    return 0;
}
