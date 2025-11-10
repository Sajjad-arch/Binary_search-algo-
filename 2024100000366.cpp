#include <iostream>
#include <vector>
using namespace std;

int bin_search(vector <int> &v, int k, int low, int high);

int main(void)

{
    vector <int> vec ={1,2,5,8,9,10,12,165,256};
    int key=10;
    int pos;

    pos=bin_search(vec, key, 0, vec.size()-1);///vec.size()-1 -> last index, 0 ->first index

    cout<<pos;
}

int bin_search(vector <int> &v, int k, int low, int high)

///"&" is used for reference like-> if we change the arr values it will change the vecc value also.
/* called recursion, where we create a new vector named arr and the value will be the same as vec
we will used many parameters like k,low,high*/

{
  while(low<=high)

  {
    int mid = ((high-low)/2)+low;

    if(v[mid]==k)

        return mid;

    if(v[mid] > k)

        high=mid-1;

    else

        low=mid+1;


  }
  return -1;

}
