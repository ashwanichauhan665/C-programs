#include<stdio.h>
void sorting_bt(int bt[], int n, int bt1[])
{
    for( int i = 0; i < n; i++)
    {
        bt1[i] = bt[i];
    }
    for( int i = 0; i < n; i++)
    {
        int pos = i;
        for(int j = i+1; j < n; j++)
        {
            if(bt1[j] < bt1[pos])
                pos = j;
        }
        int temp = bt1[i];
        bt1[i] = bt1[pos];
        bt1[pos] = temp;
    }
}
void findcompletiontime( int ct[], int n, int bt1[] )
{
    int t = 0;
    for (int i = 0; i < n ; i++ )
    {
        ct[i] = bt1[i] + t ; 
        t = ct[i];
    }
}
void findWaitingtime( int tat[], int n, int bt[], int wt[] )
{
    for (int i = 0; i < n ; i++ )
    {
        wt[i] = tat[i] - bt[i];
    }
}
void findTurnAroundTime( int ct[], int n, int tat[], int at[])
{
	for (int i = 0; i < n ; i++)
		tat[i] = ct[i] - i;
}
// driver code
void main()
{
    int  ct[20] ,at[20] , bt[20] , wt[20] , tat[20] , bt1[20] ;
    int i , n , total_wt = 0 , total_tat = 0;
    float avg_tat = 0, avg_wt = 0 ;
    printf("Enter number of process: ");
    scanf("%d",&n);

    //Input Burst time
    printf("Enter Burst Time:-\n");
    for(i=0;i<n;i++)
    {
        printf("P%d: ",(i+1));
        scanf("%d", &bt[i] );
    }

    // sorting of all burst time 
    sorting_bt(bt, n, bt1);
    //Function to completion time for all processes
    findcompletiontime(ct, n, bt);

    //Function to find turn around time for all processes
	findTurnAroundTime(ct, n, tat, at);

	// Function to find the waiting time for all processes
    findWaitingtime(tat, n, bt, wt);
     
    printf("Processes Burst Turn around Waiting completion\n");
    printf("           time     time      time     time\n");
    for( i = 0 ; i < n ; i++)
    {
        total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];    
        printf(" %d ",(i+1));
		printf(" 	   %d ", bt[i] );
    	printf("       %d ", tat[i] );
		printf("       %d ", wt[i] );
        printf("       %d\n", ct[i] );
    }
    avg_tat =(float) total_tat / (float) n;
    avg_wt =(float) total_wt / (float) n;
    printf("total WAITING TIME : %d \n", total_wt);
    printf("total TURN AROUND TIME : %d\n", total_tat);    
    printf("Average WAITING TIME : %f \n", avg_wt);
    printf("Average TURN AROUND TIME : %f", avg_tat);    
}