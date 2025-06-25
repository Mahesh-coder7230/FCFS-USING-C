#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter number of process:";
    cin>> n;

    int burstTime [n], waitingTime[n], turnAroundTime[n];
    int TotalWT=0, TotalTAT=0;
    cout<<"Enter burst time for process:\n";
    for (i=0; i<n; i++){
        cout<<"p" <<i+1<<":";
        cin>>burstTime[i];
    }

    waitingTime[0]=0;

    for(i=1;i<n;i++){
        waitingTime[i]=waitingTime[i-1]+burstTime[i-1];
    
    
    }
    for(i=1;i<n;i++){
        turnAroundTime[i]=waitingTime[i]+burstTime[i-1];
        totalWT+=waitingTime[i];
        totalTAT+=turnAroundTime[i];}

    cout<<"\nProcess\tBurst Time\tWaiting Time\tAround Time\n";
    for (i=0; i<n; i++){
        cout<<"p" <<i+1<<"t"<<burstTime[i]<<"\t\t"<<turnAroundTime[i]<<end;
    
    }
    cout<<"\nAveragen Waiting Time="<<(float)totalWT /n;
    cout<<"\nAveragen Waiting Time="<<(float)totalTAT /n;
    return 0;
}