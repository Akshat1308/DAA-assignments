#include <bits/stdc++.h>
using namespace std;

void push_queue(int *, int *, int *, int);
void pop_queue(int *, int *, int *);
void display_queue(int *, int *, int *);
/////////////////////////////////////////* MAIN FUNCTION BEEGINS *////////////////////////////////////////////////

int main()
{
    int item = 0;
    int *queue1, *queue2, *queue3;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int size_q1 = 0, front_q1 = -1, rear_q1 = -1;
    int size_q2 = 0, front_q2 = -1, rear_q2 = -1;
    int size_q3 = 0, front_q3 = -1, rear_q3 = -1;

    //---------------------------------------------------------//

    printf("Enter Size of queue 1 : ");
    cin >> size_q1;
    queue1 = (int *)calloc(size_q1, sizeof(int));
    front_q1 = -1;
    rear_q1 = -1;

    //---------------------------------------------------------//

    printf("Enter Size of queue 2 : ");
    cin >> size_q2;
    queue2 = (int *)calloc(size_q2, sizeof(int));
    front_q2 = -1;
    rear_q2 = -1;

    //---------------------------------------------------------//

    printf("Enter Size of queue 3 : ");
    cin >> size_q3;
    queue3 = (int *)calloc(size_q3, sizeof(int));
    front_q3 = -1;
    rear_q3 = -1;

    //---------------------------------------------------------//

    cout << "enter elements for queue 1" << endl;

    for (int i = 0; i < size_q1; i++)
    {
        cin >> item;
        sum1 += item;
        push_queue(queue1, &rear_q1, &size_q1, item);
    }

    //---------------------------------------------------------//

    cout << "enter elements for queue 2" << endl;

    for (int i = 0; i < size_q2; i++)
    {
        cin >> item;
        sum2 += item;
        push_queue(queue2, &rear_q2, &size_q2, item);
    }

    //---------------------------------------------------------//

    cout << "enter elements for queue 3" << endl;

    for (int i = 0; i < size_q3; i++)
    {
        cin >> item;
        sum3 += item;
        push_queue(queue3, &rear_q3, &size_q3, item);
    }

    //---------------------------------------------------------//

    while (true)
    {
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= queue1[front_q1 + 1];
            pop_queue(queue1, &front_q1, &rear_q1);
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= queue2[front_q2 + 1];
            pop_queue(queue2, &front_q2, &rear_q2);
        }
        else if (sum3 >= sum1 && sum3 >= sum2)
        {
            sum3 -= queue3[front_q3 + 1];
            pop_queue(queue3, &front_q3, &rear_q3);
        }
        if (sum1 == sum2 && sum2 == sum3)
        {
            cout << "\nMAXIMUM SUM POSSIBLE IS : " << sum1 << endl;
            break;
        }
        if (sum1 == 0 || sum2 == 0 || sum3 == 0)
        {
            cout << "\nMAX SUM IS 0" << endl;
            break;
        }
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

void push_queue(int queue[], int *rear_q, int *size_q, int x)
{
    if (*rear_q == *size_q - 1)
    {
        cout << "queue overflow" << endl;
    }
    else
    {
        *rear_q = *rear_q + 1;

        queue[(*rear_q)] = x;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

void pop_queue(int arr[], int *front, int *rear)
{
    if (*front == *rear)
        cout << "queue underflow" << endl;
    else
        *front = *front + 1;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
void display_queue(int arr[], int *front, int *rear)
{
    for (int i = *front + 1; i <= *rear; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
