#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int k;
    int col;

    string vhod2;
    string del(" ");
    string itog;
    
    cin >> n;
    
    cin >> col;
    
    int a[n];
    int p[3];
    
    for (i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }

    int koef;
    
 

    koef = abs(a[1]+a[2]+a[3] - col);
    
    for (i = 1; i<= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            for(k = 1; k<=n; k++)
            {
                if(i != j and j != k and k != i)
                {
                    int kor = abs(a[i] + a[j] + a[k] - col);
                    if(kor < koef)
                    {
                        koef = kor;
                        
                        p[0] = a[i];
                        p[1] = a[j];
                        p[2] = a[k];
                        
                        
                         int tmp = 0;
                         
                          for(int o = 0; o<3; o++)
                          {
                            for(int m = (3-1); m>=(o+1); m--)
                            {
                              if(p[m] < p[m-1])
                              {
                                tmp = p[m];
                                p[m]=p[m-1];
                                p[m-1]=tmp;
                              }
                            }
                          }
                        
                        itog = std::to_string(p[0]) + " " + std::to_string(p[1]) + " " + std::to_string(p[2]);
                    }
                }
            }
        }
    }
    
 
    cout << itog;

}
