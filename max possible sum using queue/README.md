Name: Akshat Shriraj Surana

Sec: A batch A2

Roll: 34

Problem Name: Maximum Possible Sum

Problem Statement: Given three queues of the positive numbers, the task is to find the possible equal maximum sum of the queues with the removal of first elements allowed

Implementation using arrays

LOGIC:

•	Logic for adding elements in queue:

We will be maintaining two pointers namely ‘front_q’ and ‘rear_q’ which will be pointing to the first and last elements of the queue respectively. On inserting any number in the queue, the rear pointer will be increased by one.

•	Logic for deleting elements from queue:

On deleting any number from the queue, the front pointer will be increased by one.

•	Main logic of the code:

First of all, we will take number of elements for each queue then we will be dynamically allocating size to each queue and then add elements in each queue. While adding elements we will be calculating sum for each queue and saving them in ‘sum1’ ‘sum2’ ‘sum3’. After this we will calculate max of these sums and whichever sum is maximum, we will delete one element from that queue and the value of that element will be deducted from the as well. This will be done in an infinite while loop unless and until we encounter equal sum or 0.


Time complexity of the code: O(n)

Space complexity of the code: O(1)
                              For storing elements O(n) 
                                                       
                      


