/*You want to buy a ticket for a well-known concert which is happening in your city. But the 
number of tickets available is limited. Hence the sponsors of the concert decided to sell
 tickets to customers based on some priority.
A queue is maintained for buying the tickets and every person is attached with
 a priority (an integer, 1 being the lowest priority).
 Sample Input 1 :
3
3 9 4
2
Sample Output 1 :
2
*/

int buyTicket(int *arr, int n, int k) {
    // Write your code here
    queue<int> q;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        q.push(i);
        pq.push(arr[i]);
    }
    int time=0;
    while( q.front()!=k || pq.top()!=arr[q.front()] ){
        if(pq.top() > arr[q.front()]){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        else if(pq.top() == arr[q.front()]){
            pq.pop();
            q.pop();
            time++;
        }
    }
    return time+1;
}