#include <iostream>

using namespace std;

int main(){
	int a = 6;
cout << a << endl;
int arr[6] = {0,1,2,3,4,5 };
for (int n = 0;n < 6;n++)
{
	cout << arr[n] << " ";
}
cout << endl;
int start=0;
int end={sizeof(arr)/sizeof(arr[0])-1};
while(start<end)
{
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]= temp;
    start++;
    end--;
}
for(int n=0;n<6;n++)
{cout<<arr[n]<<" ";}
cout<<endl;
system("pause");
return 0;
}
