#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; i < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void DeletionPos(Node **head, int pos)
{
    Node *temp;
    temp = *head;
    Node *prev;
    prev = *head;

    for (int i = 0; i < pos; i++)
    {
        if (pos == 1)
        {
            *head = (*head)->next;
            free(temp);
        }
        else
        {

            if (pos - 1 == i && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if (prev == NULL)
                {
                    cout << "Not possible";
                    return;
                }
                temp = temp->next;
            }
        }
    }
}
void DeletionKey(Node **head, int key)
{
    Node *temp;
    temp = *head;
    Node *prev;
    prev = *head;
    Node *a = *head;
    int pos=0;
    while(a->data!=key)
    {
        pos++;
        a=a->next;
    }
    for (int i = 0; i < pos; i++)
    {
        if (pos == 1)
        {
            *head = (*head)->next;
            free(temp);
        }
        else
        {

            if (pos - 1 == i && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if (prev == NULL)
                {
                    cout << "Not possible";
                    return;
                }
                temp = temp->next;
            }
        }
    }
}

void insertionBeg(Node **head, int val)
{
    Node *new1 = new Node();
    new1->data = val;
    new1->next = *head;
    *head = new1;
}
void insertionEnd(Node **head, int val)
{
    Node *new1 = new Node();

    new1->data = val;

    if (*head == NULL)
    {
        *head = new1;
    }

    Node *last = *head;

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new1;
}

void insertionAfterkey(Node **head, int key, int val)
{
    Node *new1 = new Node();

    new1->data = val;

    Node *temp = *head;

    while (temp->data != key)
    {
        temp = temp->next;
    }
    new1->next = temp->next;
    temp->next = new1;
}

void insertionAfterN(Node **head, int n, int val)
{
    Node *new1 = new Node();

    new1->data = val;

    Node *temp = *head;

    while (n--)
    {
        temp = temp->next;
    }
    new1->next = temp->next;
    temp->next = new1;
}

void print(Node *node)
{
    // cout<<node->data;
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}
int main()
{
    Node *head = NULL;
    insertionBeg(&head, 8);
    insertionBeg(&head, 9);
    insertionBeg(&head, 0);
    insertionEnd(&head, 10);
    insertionAfterkey(&head, 8, 19);
    DeletionPos(&head, 1);
    print(head);

    return 0;
}