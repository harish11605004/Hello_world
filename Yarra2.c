#include<stdio.h>
main()
{
int n;
printf("Enter the no. of processes: ");
scanf("%d",&n);
int at[n],bt[n],wt[n],tat[n],p[n],i,j,temp;
for(i=0;i<n;i++)
{
printf("enter arrival time:",i+1);
scanf("%d",&at[i]);
printf("Enter process %d burst time: ",i+1);
scanf("%d",&bt[i]);
printf("Enter process %d priority: ",i+1);
scanf("%d",&p[i]);

}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(p[i]>p[j])
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
}
}
wt[i]=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
wt[i]=wt[i]+bt[j];
}
tat[i]=wt[i]+bt[i];
}
float avwt=0,avtat=0;
printf("ProcessP\tBT\tWT\tTAT\tAT\n");
for(i=0;i<n;i++)
{
printf("\t%d\t%d\t%d\t%d\t%d\t\n",p[i],bt[i],wt[i],tat[i],at[i]);
avwt=avwt+wt[i];
avtat=avtat+tat[i];
}
avwt=avwt/n;
avtat=avtat/n;
printf("Average Waiting Time: %f\n",avwt);
printf("\nAverage Turnaround Time: %f",avtat);
}
