/* Name Of the Candidate: G.Mounesh
   Roll No: 204G1A0560
   Title of the Experiment:FCFS Scheduling program using C
   Date of Creation: 06-09-2022
   Date of Execution: 06-09-2022
*/
#include<stdio.h>
main(){
int bt[20],wt[20],tat[20],1,n;
  float wtavg,tatavg;
  printf("\nEnter the number of processes--");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  printf("\nEnter Bursting Time for process %d");
  scanf("%d",&bt[i]);}
  wt[0]=wtavg=0;
  tat[0]=tatavg=bt[0];
  for(i=0;i<n;i++){
    wt[i]=wt[i-1]+bt[i-1];
    tat[i]=tat[i-1]+bt[i];
    wtavg=wtavg+wt[i];
    tatavg=tatavg+tat[i];
                  }
  printf("\tPROCESS\tBURST TIME\tWAITING TIME\tTURN AROUND TIME\n");
  for(i=0;i<n;i++)
    printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
  printf("\n Average waiting Time--%f ",wtavg/n);
  printf("\n Average Turn Around Time--%f",tatavg/n);
  
}
