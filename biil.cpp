#include <stdio.h>

int main ()
{
  int k = 0, n, temp, count;
  
  scanf ("%d", &n);
  
  int arr[n][2], mp[n][2];
  
  for (int i = 0; i < n; i++){
      scanf ("%d", &listEle[i]);
      listEle[i] = 0;
    }
  
  for (int i = 0; i < n; i++){
    
    if (listEle[i][1])
    continue;
      
    count = 1;
    for (int j = i + 1; j < n; j++){
        
	  if (listEle[i][0] == listEle[j][0]){
	      listEle[j][1] = 1;
	      count++;
	    }
	}
    
    mp[k][0] = listEle[i][0];
    mp[k][1] = count;
    k++;
    
      
  }
  n = k;
 
  for (int i = 0; i < n - 1; i++){
      
      temp = mp[i][1];
      for (int j = i + 1; j < n; j++){
        
        if(temp < mp[j][1]){
	      temp = mp[j][1];
	      mp[j][1] = mp[i][1];
	      mp[i][1] = temp;

	      temp = mp[j][0];
	      mp[j][0] = mp[i][0];
	      mp[i][0] = temp;
	    }
	}
      
  }
  
  
  printf ("\n Sorted Array based on its frequency:\n");
  for (int i = 0; i < n; i++){
      
      while (mp[i][1] != 0){
          
	  printf (" %d  ", mp[i][0]);
	  mp[i][1]--;
          
      }
      
  }
  return 0;
}
