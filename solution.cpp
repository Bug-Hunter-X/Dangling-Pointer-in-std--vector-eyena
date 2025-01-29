std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

int value = vec[0]; // Safe access
vec.push_back(10);

vec[0] = 100; // Modify an element safely after resize

// or  If you need to work with a raw pointer, ensure that the vector's size doesn't change.  
//  Alternatively, create a copy
std::vector<int> vecCopy = vec; // Make a copy
int* ptr = &vecCopy[0]; // Pointer to a copy of the vector 
*ptr = 100; //safe operation