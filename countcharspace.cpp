#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char *array_point;
    char c1;
    int count=0,spcchr=0,count1;
    char string_array[100];    
    string str1;
 
	
//	cout << " Enter a string: ";
    getline(cin, str1);
    cout<<endl;
    strcpy(string_array, str1.c_str());
    for(array_point=string_array;*array_point!='\0';array_point++)
    {
        c1=*array_point;
        count++;
		if (isspace(c1))
        
            spcchr++;
        
    }
       // cout <<" The number of characters in the string is: "<<count<<endl;      
    
       cout<<" The number of spaces are: "<<spcchr<<endl;
       
              
     return 0;
}
