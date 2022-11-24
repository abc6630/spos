#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of processes: ";
    cin>>n;

int at[n], bt[n], wt[n], ct[n], tat[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter arival time of process p"<<i+1<<": ";
        cin>>at[i];

        cout<<"enter burst time of process p"<<i+1<<": ";
        cin>>bt[i];
    }

ct[0]=bt[0];
for(int i=1; i<n; i++)
{
    ct[i]=ct[i-1]+ bt[i];
}

//turn around time
for(int i=0; i<n; i++)
{
    tat[i]= ct[i] - at[i]; 
}
//waiting time
for(int i=0; i<n; i++)
{
    wt[i]=tat[i] - bt[i];
}

cout<<"processes "<<"arival time "<<"   burst time"<<"      Complition time"<<"    turn around time"<<"   waiting time"<<endl;
for(int i =0; i<n; i++)
{
    cout<<"p"<<i+1<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
}
    return 0;
}