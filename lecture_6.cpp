#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // Decimal to Binary (approach - 1)
    int n1;
    cout<<"Enter the n1 value: ";
    cin>>n1;

    int ans1 = 0;
    int i = 0;
    while (n1 != 0)
    {
        int digit1 = n1 % 2;
        int remainder = pow(10, i);
        ans1 = ans1 + (digit1 * remainder);
        n1 = n1 / 2;
        i++;
    }
    cout<<"The Answer is: "<<ans1<<endl;

    // Binary to Decimal (approach - 1)
    int n2;
    cout<<"Enter the n2 value: ";
    cin>>n2;

    int ans2 = 0;
    int j = 0;
    while (n2 != 0)
    {
        int digit2 = n2 % 10;
        if(digit2 == 1)
        {
            ans2 = ans2 + pow(2, j);
        }
        j++;
        n2 = n2 / 10;
    }
    cout<<"The Answer is: "<<ans2<<endl;
}