int main(){
  int n = 10; 
  int sum = 0;      
  float pie = 3.14;   

  for (int i=1; i<n; i+=3){  
    cout << pie << endl;
    for (int j=1; j<n; j+=2){    
      sum += 1;
      cout << sum << endl;
    }
  }
