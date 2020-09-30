#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  std::vector<int> v;
  int c = weights.size()-1;
  float temp,temp1,temp2;
  for(int i=0;i<c;i++){
  	v.push_back(values[i]/weights[i]);
  }
  for(int j=0;j<c;j++){
  	float point = v[j];
  	for (int k = j+1; k <c; ++k)
  	{
  		if(point > v[k]){
   			temp = v[j];
   			v[j] = v[k];
    		v[k] = temp;
	   		temp1 = weights[j];
	   		weights[j] = weights[k];
	   		weights[k] = temp1;
	   		temp2 = values[j];
	    	values[j] = values[k];
	    	values[k] = temp2;
	    	}
	    	
  	}
  	}

  	while(capacity>0 && c>=0){
		if(weights[c]<capacity){
	    	capacity = capacity - weights[c];
	    	value+=values[c];
	   		c = c-1;
	   	}
 		else if(weights[c] == capacity){
			value+=values[c];
			capacity = capacity - weights[c];
	   		c = c-1;
	   	}
		else if(weights[c]>capacity){
	    	value+=(capacity*values[c])/(float)weights[c];
	    	capacity = capacity - weights[c];
	    	c = c-1;
  		}
  	}
  return value;

}
int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(4);
  std::cout << optimal_value << std::endl;
  return 0;
}
