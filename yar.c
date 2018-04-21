#include<stdio.h>  
int main() 
{ 
      int i, limit, total = 0, x, counter = 0, time_quantum,l,k; 
      int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10], process_name[i]; 
      float average_wait_time, average_turnaround_time;
      printf("\nEnter Total Number of Processes:\t"); 
      scanf("%d", &limit);



void pre()
{
	int ct[10], waiting_time[10], priority[10];
      int status;

      int l, time = 0, 
	  burst_time = 0;
	  int largest;
      float wait_time = 0, turnaround_time = 0, average_waiting_time, average_turnaround_time;
      for(i = 0; i < limit; i++)
      {
            process_name[i] = i;
            printf("\nEnter Details For Process[%C]:\n",process_name);
            printf("Enter Arrival Time:\t");
            scanf("%d", &arrival_time[i] );
            printf("Enter Burst Time:\t");
            scanf("%d", &burst_time[i]);
            printf("Enter Priority:\t");
            scanf("%d", &priority[i]);
            status = 0;
            burst_time = burst_time +burst_time[i];
      }
      Arrival_Time_Sorting();
      printf("\nProcess Name\tArrival Time\tBurst Time\tPriority\tWaiting Time");
      for(time =arrival_time[0]; time < burst_time;)
      {
            largest = 9;
            for(i = 0; i < limit; i++)
            {
                  if(arrival_time[i] <= time && status[i] != 1 &&priority[i] >priority[largest])
                  {
                        largest = i;
                  }
            }
            time = time +burst_time[largest];
            ct[largest] = time;
            waiting_time[largest] = ct[largest] - arrival_time[largest] - burst_time[largest];
           turnaround_time[largest] = ct[largest] -arrival_time[largest];
           status[largest] = 1;
            wait_time = wait_time +waiting_time[largest];
            turnaround_time = turnaround_time + turnaround_time[largest];
            printf("\n%c\t\t%d\t\t%d\t\t%d\t\t%d", process_name[largest], arrival_time[largest],burst_time[largest],priority[largest],waiting_time[largest]);
      }
      average_waiting_time = wait_time / limit;
      average_turnaround_time = turnaround_time / limit;
      printf("\n\nAverage waiting time:\t%f\n", average_waiting_time);
      printf("Average Turnaround Time:\t%f\n", average_turnaround_time);
      for(k=0;k<limit;k++)
      {
      	if(ct[k]-arrival_time[k]<0)
      	{
      		l=process_name[i];
		  }
	  }
}




 void RR() 
      {x = limit;
      printf("\nEnter Time Quantum:\t"); 
      scanf("%d", &time_quantum); 
      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(total = 0, i =l; x != 0;) 
      { 
            if(temp[i] <= time_quantum && temp[i] > 0) 
            { 
                  total = total + temp[i]; 
                  temp[i] = 0; 
                  counter = 1; 
            } 
            else if(temp[i] > 0) 
            { 
                  temp[i] = temp[i] - time_quantum; 
                  total = total + time_quantum; 
            } 
            if(temp[i] == 0 && counter == 1) 
            { 
                  x--; 
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, burst_time[i], total - arrival_time[i], total - arrival_time[i] - burst_time[i]);
                  wait_time = wait_time + total - arrival_time[i] - burst_time[i]; 
                  turnaround_time = turnaround_time + total - arrival_time[i]; 
                  counter = 0; 
            }
            if(i == limit - 1) 
            {
                  i = 0; 
            }
            else if(arrival_time[i + 1] <= total) 
            {
                  i++;
            }
            else 
            {
                  i = 0;
            }
      } 


void Arrival_Time_Sorting()
{
      struct process;
	  int temp,process_queue[10];
      int i, j;
      for(i = 0; i < limit - 1; i++)
      {
            for(j = i + 1; j < limit; j++)
            {
                  if(arrival_time[i] >arrival_time[i])
                  {
                        temp = process_queue[i];
                        process_queue[i] = process_queue[j];
                        process_queue[j] = temp;
                  }
            }
      }
}
      average_wait_time = wait_time * 1.0 / limit;
      average_turnaround_time = turnaround_time * 1.0 / limit;
      printf("\n\nAverage Waiting Time:\t%f", average_wait_time); 
      printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time);  
      pre();
      RR();
}


}


