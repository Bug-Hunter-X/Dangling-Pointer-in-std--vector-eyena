std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

int* ptr = &vec[0]; 

vec.push_back(10); // This invalidates the pointer ptr

*ptr = 100; // Undefined behavior