#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main(void){
    priority_queue <int> pq;
    vector <int> vc;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int empty;
        cin >> empty;
        if (empty == 0)
        {
            if (pq.empty())
            {
                vc.push_back(0);
            }
            else  {
                vc.push_back(pq.top());
                pq.pop();
            }
            
        }
        else{
            pq.push(empty);
        }
        
    }
    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << "\n"; 
    }
    cout << "문제 해결" ;
    
    
}
