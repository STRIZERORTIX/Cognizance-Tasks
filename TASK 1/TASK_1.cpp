#include<iostream>
int main()
{
int s,l;
/*LET "s" BE THE STEPS THAT THE ELEPHANT WILL TAKE TO WALK AND REACH HIS FRMD'S HOUSE AND LET "l" BE THE LOCATION OF THE FRND'S HOUSE FROM 0 IN THE CO-ORDINATE AXIS*/
s=0;
std::cout<<"ENTER THE VALUE OF l (LOCATION OF THE FRND'S HOUSE): ";
std::cin>>l;
if(l<=5)
s=1;
else if(l%5==0)
s=l/5;
else
s=(l/5)+1;
std::cout<<"THE MINIMUM NUMBER OF STEPS TAKEN BY THE ELEPHANT IS:  "<<s;
return 0;
}