#include <iostream>
#include <algorithm> 
using namespace std;

int main() 
{int num;
float sum;
float sumtwo;
float average_waittime;
float average_turnartime;

    cout << "enter the number of processes";
   cin>>num;
   int array_bustime[num];
   for(int i=0;i<num;i++){

            cin>>array_bustime[i];

   }

   sort(array_bustime, array_bustime+num); 

   for(int i=0;i<num;i++){

            cout<<array_bustime[i];

   }




   int array_waittime[num];
   array_waittime[0]=0;

   for(int i=1;i<num;i++){

            array_waittime[i]=array_waittime[i-1]+array_bustime[i-1];

   }
int array_turnartime[num];
for(int i=0;i<num;i++){

            array_turnartime[i]=array_waittime[i]+array_bustime[i];
            
   }

for(int i = 0; i < num; ++i)
    {
       
        
        sum += array_waittime[i];
    }

    average_waittime= sum / (float)num;
    cout << "Average wait time = " << average_waittime;

    for( int i = 0; i < num; ++i)
    {
       
        
        sumtwo += array_turnartime[i];
    }

    average_turnartime= sumtwo/(float) num;
    cout << "Average turnaotime time = " << average_turnartime;





    return 0;
}
