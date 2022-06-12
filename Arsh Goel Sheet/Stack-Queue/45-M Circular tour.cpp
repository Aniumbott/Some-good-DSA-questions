/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
/*
Its not using stack or queue but using two pointer algo which is faster and lighter, to understand it properly try processing by self.
*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int bal = 0, st = 0, def = 0;
       for(int i=0; i<n; i++){
           bal += p[i].petrol - p[i].distance;
           if(bal < 0){
               def += bal;
               st = i+1;
               bal = 0;
           }
       }
       return bal+def >= 0 ? st : -1;
    }
};