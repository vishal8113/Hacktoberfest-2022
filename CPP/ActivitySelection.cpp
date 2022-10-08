//Activity Selection problem
/*
One of the most famous Greedy problem..
We have to select maximum activities which we can perform provided that we can perform only one task at one time.
So we will use sorting and sort according to finish time of activities as we need to finish an activity as early as possible, till the next activity starts.
*/
#include<bits/stdc++.h> //library which contains all other C++ libraries for user ease
using namespace std;


//Comparator which sorts on the basis of ending time of an activity
bool mycmp(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second; // first stores starting time(which dont matters to us, so we sort using second which is ending time)
}

int main(){
    //user inputs
    cout<<"Enter the number of activities:\t";
    int n;
    cin>>n;

    vector<pair<int,int> > v1;
    for(int i=0;i<n;i++){
        cout<<"Enter the starting and ending time:\t";
        int st,end;
        cin>>st>>end;
        v1.push_back(make_pair(st,end));
    }

    //sorting according to ending time
    sort(v1.begin(),v1.end(),mycmp);
    for(int i=0;i<n;i++) 
    {
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
    int count=1;

    //Including first activity as it will end earliest
    cout<<"Activity with starting and ending time "<<v1[0].first<<" and "<<v1[0].second<<" is included"<<endl;

    //Now initializing last to current activity ending time
    int last=v1[0].second;
    for(int i=1;i<n;i++){

        //*****Now including an activity if it starts after ending the last included activity****
        if(v1[i].first>=last){
            count++;
            cout<<"Activity with starting and ending time "<<v1[i].first<<" and "<<v1[i].second<<" is included"<<endl;
            last=v1[i].second;
        }
    }
    cout<<"Total activities: "<<count<<endl;
}

//This code is contributed by Rajat Dhull


//Test Case
/*
Enter the number of activities: 5
Enter the starting and ending time:     1 4 
Enter the starting and ending time:     5 10
Enter the starting and ending time:     3 6
Enter the starting and ending time:     12 15
Enter the starting and ending time:     16 18
1 4
3 6
5 10
12 15
16 18
Activity with starting and ending time 1 and 4 is included
Activity with starting and ending time 5 and 10 is included
Activity with starting and ending time 12 and 15 is included
Activity with starting and ending time 16 and 18 is included
Total activities: 4
*/
