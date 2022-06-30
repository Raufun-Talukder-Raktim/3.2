
#include<iostream>

using namespace std;
int main()
{
    int n,ct[20],wt[20],art[20],tat[20],i,j;
    float awt=0, atat=0;

    cout<<"Enter the process number";
    cin>>n;
    cout<<"Enter the cpu time " ;

    for (i=0;i<n;i++){
        cin>>ct[i];
    }
        cout<<"Enter the arrival time" ;
    for (i=0;i<n;i++){
        cin>>art[i];
    }
    //assiding order
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(art[i]<art[j]){
                    swap(art[i],art[j]);
                    swap(ct[i],ct[j]);
            }
        }
    }
    //dessiding order
     /* for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(art[i]>art[j]){
                    swap(art[i],art[j]);
                    swap(ct[i],ct[j]);
            }
        }
    }*/


    wt[0]=0;
    for (i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++){
            wt[i]=wt[i]+ct[j];

        }
        wt[i]=wt[i]-art[i];
    }
    for (i=0;i<n;i++){
        tat[i]=wt[i]+ct[i];
        awt = awt+wt[i];
        atat = atat+tat[i];
    }
    awt = awt/n;
    atat = atat/n;
    for(i=0;i<n;i++){
        cout<<art[i] << "   "<<ct[i]<<"   "<<wt[i];
        cout<<"\n";
    }
     cout<<"\n"<<"\n";
     cout<<"\n"<<"\n";
     cout<<"\n"<<"\n";
     cout<<awt << "         " <<atat;
}
