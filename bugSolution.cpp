std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

vec.erase(std::remove(vec.begin(), vec.end(), 5), vec.end());

//Or

for (auto it = vec.begin(); it != vec.end(); ) {
  if ( /* condition to remove element */ true) {
    it = vec.erase(it);
  } else {
    ++it;
  }
}

// Expected: vec is empty or contains only elements that do not match the removal condition
// Actual: vec is empty or contains only elements that do not match the removal condition