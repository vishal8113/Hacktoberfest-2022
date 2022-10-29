








































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-09-27 17:13:09	Correct	java	281 / 281	View
2022-09-27 17:12:26	Compilation Error	java	0 / 281	View
Java (1.8)




Custom Input

class Solution
{
    //Function to return the minimum cost of connecting the ropes.
    long minCost(long arr[], int n) 
    {
        // your code here
         long total=0;

        long final1=0;

        PriorityQueue<Long> pq = new PriorityQueue<Long>();

        for(int i=0;i<n;i++){

            pq.add(arr[i]);

        }

        while(pq.size()!=1){

            total=pq.poll()+pq.poll();

            final1+=total;

            pq.add(total);

        }

        

        return final1;

    }

 
}
