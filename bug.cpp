std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) {
  vec.erase(vec.begin() + i);
}

// Expected: vec is empty
// Actual: vec is not empty and contains unexpected values