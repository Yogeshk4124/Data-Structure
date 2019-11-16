  /*
  BUBBLE SORT
  MADE BY:YOGESH KUMAR
  */
  #include<iostream>
  using namespace std;

  int main()
  {
    int a[100],i,n,j;
    cout<<"Enter Size of Array:";
    cin>>n;
    cout<<"Enter Elements:\n";
    for(i=0;i<n;i++)
      cin>>a[i];

    for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
      }
    }
    cout<<"Sorted Data:\n";
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
  return 0;
  }
