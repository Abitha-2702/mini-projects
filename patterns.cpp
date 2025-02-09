//  DIFFERENT PATTERNS USING C++ LANGUAGE

#include<iostream>
using namespace std;
int main()
{
    int m , n;
    cout<<"Enter number of rows and columns : \n";
    cin>>m>>n;
    printf("RECTANGULAR PATTERN\n");
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    printf("HOLLOW RECTANGULAR PATTERN\n");
    for(int i =0;i<=n;i++)
    cout<<"* ";
    cout<<endl;
    for(int j=0;j<=m;j++)
    {
        for(int i =0;i<=n;i++)
        if (i==0||i==n)
            cout<<"* ";
        else
            cout<<"  ";
        cout<<endl;
    }
    for(int i =0;i<=n;i++)
        cout<<"* ";
    cout<<endl;
    cout<<endl;
    printf("INVERTED HALF PYRAMID\n");
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)   
            cout<<"* ";        
        cout<<endl;
    }
    cout<<endl;
    printf("SLANT HALF PYRAMID\n");
    for(int i=1;i<=n;i++)
    {
        for(int b=i;b>=1;b--)
            cout<<" ";
        for(int j=1;j<=i;j++)   
            cout<<"* ";        
        cout<<endl;
    }
    cout<<endl;
    printf("HALF PYRAMID AFTER 180° ROTATION\n");
    for(int i=1;i<=n;i++)
    {
        for(int b=i;b<n;b++)
            cout<<"  ";
        for(int j=i;j>=1;j--)   
            cout<<"* ";        
        cout<<endl;
    }
    cout<<endl;
    printf(" PYRAMID \n");
    for(int i=1;i<=n;i++)
    {
        for(int b=i;b<n;b++)
            cout<<" ";
        for(int j=i;j>=1;j--)   
            cout<<"* ";        
        cout<<endl;
    }
    cout<<endl;
    printf(" HALF PYRAMID\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)   
            cout<<"* ";        
        cout<<endl;
    }
    cout<<endl;
    printf(" HALF PYRAMID USING NUMBERS\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)   
            cout<<i<<" ";        
        cout<<endl;
    }
    cout<<endl;
    printf(" INVERTED HALF PYRAMID USING NUMBERS\n");
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)   
            cout<<n-i+1<<" ";        
        cout<<endl;
    }
    cout<<endl;    
    printf(" HALF PYRAMID USING NUMBERS\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)   
            cout<<j<<" ";        
        cout<<endl;
    }
    cout<<endl;
    printf(" INVERTED HALF PYRAMID USING NUMBERS\n");
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)   
            cout<<j<<" ";        
        cout<<endl;
    }
    cout<<endl;
    printf(" ANOTHER METHOD FOR HALF PYRAMID USING NUMBERS\n");
    int b=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)  
            cout<<b<<" ";         
        cout<<endl;
        b++;
    }
    cout<<endl;
    printf(" FLOYD'S TRIANGLE\n");
    b=0;
    for(int i=1;i<=n;i++)
    {        
        for(int j=1;j<=i;j++)              
            cout<<i+j+b-i<<" ";       
        cout<<endl;
        b=b+i;        
    }
    cout<<endl;
    printf(" FLOYD'S TRIANGLE\n");
    b=1;
    for(int i=1;i<=n;i++)
    {        
        for(int j=1;j<=i;j++)
        {              
            cout<<b<<" "; 
            b++;
        }        
        cout<<endl;        
    }
    cout<<endl;
    printf(" 0-1 PATTERN\n");
    for(int i=1;i<=n;i++)
    {        
        for(int j=1;j<=i;j++)
        {              
            if((i+j)%2==0)
                cout<<"1 ";
            else
                cout<<"0 ";
        }        
        cout<<endl;        
    }
    cout<<endl;
    printf(" 2 MOUNTAINS |\/|\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)  
            cout<<"* ";
        for(int l=i;l<n;l++)    
            cout<<"    ";
        for(int k=1;k<=i;k++)   
            cout<<"* ";                
        cout<<endl;
    }
    cout<<endl;
    printf(" BUTTERFLY PATTERN\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)  
            cout<<"* ";
        for(int l=i;l<n;l++)    
            cout<<"    ";
        for(int k=1;k<=i;k++)   
            cout<<"* ";                
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)  
            cout<<"* ";
        for(int l=i;l<n;l++)    
            cout<<"    ";
        for(int k=1;k<=i;k++)   
            cout<<"* ";                
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
