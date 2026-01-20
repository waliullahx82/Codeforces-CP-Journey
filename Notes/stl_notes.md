# 📘 C++ STL (Standard Template Library) — Notes

> **Topic:** STL Basics & Usage  \
> **Language:** C++17  \
> **Purpose:** Competitive Programming & Interviews

---

## 📌 What is STL?

The **Standard Template Library (STL)** is a collection of **pre-written, optimized C++ classes and functions** that help us solve problems efficiently.

STL mainly has **4 components**:

1. **Containers** – Store data
2. **Iterators** – Access data
3. **Algorithms** – Perform operations
4. **Functors** – Function-like objects

---

## 📂 STL Containers

### Vector

- Dynamic array
- Fast random access

```cpp
vector<int> v;
v.push_back(1);
v.size();
v.capacity();
v.pop_back();

v[index] // access element
v.front(); // print front
v.back(); // print last

vector<int> v = {1, 2, 3}; // initial value assign
vector<int> v(3,10); // all initial same value 

vector<int> v1;
vector<int> v2(v1); // v2 = v1

v.erase(v.begin()) // begin returns fist element
v.erase(v.begin() + 2) // begin work as iterator
v.end() -> point to after last address
v.empty()
auto it = upper_bound(v.begin(),v.end(), target) // O(log n)

insert(pos, value); // pos = v.begin() + 1;

vector<int>::iterator it;
for(it = v.begin(); it!=v.end(); it++){
    cout << *(it) << endl;
}

vector<int>::reverse_iterator it; // or auto it
for(it = v.rbegin(); it!=v.rend(); it++){ // rbegin -> before first
    cout << *(it) << endl;
}

```

Time Complexity:
- Access: `O(1)`
- Insertion (end): `O(1)`

---

### LIST



```cpp
list<int> l;
l.push_back(1);

l.push_front(0)

l.pop_back(0)
l.pop_front(1)
```
`

---
### Pair


```cpp
pair<string, int> p= {'a',1};
cout << p.first
cout << p.second

pair<int, pair<char, int>> p= {1,{'a',1}};
cout << p.first
cout << p.second.first
cout << p.second.second

vector<pair<int, int>> vec = {{1,2},{2,3},{3,4}}

for(pair<int,int>p:vec){
    cout << p.first << p.second
}

vec.push_back({2,3})
vec.emplace_back(2,3)
```
---
###  Set

- Stores **unique** elements
- Sorted automatically

```cpp
set<int> s;
s.insert(5);
s.insert(1);
```

Time Complexity:
- Insert: `O(log n)`
- Find: `O(log n)`

---

###  Map

- Stores **key-value pairs**
- Keys are unique and sorted

```cpp
map<int, string> mp;
m[key] = value;
mp[1] = "one";
mp[2] = "two";

#include <string>
 size_t pos = str.find(sub);

    if (pos != string::npos) {
        cout << "'" << sub << "' found at index: " << pos << endl;
    } else {
        cout << "'" << sub << "' not found." << endl;
    }

insert, count, erase, find, size, empty
```

---

## 🔁 Iterators

Used to traverse containers.

```cpp
for(auto it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
}
```

Shortcut:

```cpp
for(auto x : v) cout << x << " ";
```

---

## ⚙️ STL Algorithms

### Common Algorithms

```cpp
sort(v.begin(), v.end());
sort(arr,arr+n);
sort(arr,arr+n,greater<int>());
reverse(v.begin(), v.end());
s='abc'
next_permutation(s.begin(),s.end());
max_element(v.begin(), v.end());
min_element(v.begin(), v.end());

__builtin_popcount(n)
__builtin_popcountl(n)
__builtin_popcountll(n)
```

---

## 🧠 Important CP Tips

- Prefer `vector` over arrays
- Use `unordered_map` when order is not required
- Always check constraints before choosing container

---

## ❌ Common Mistakes

- Forgetting `#include <algorithm>`
- Using `map` instead of `unordered_map` unnecessarily
- Not clearing containers between test cases

---

## 📝 Summary

| Component | Purpose |
|---------|--------|
| Vector | Dynamic array |
| Set | Unique sorted elements |
| Map | Key-value storage |
| Algorithms | Fast operations |

---

## 📚 Next Topics

- Pair & Tuple
- Priority Queue
- Custom Comparator
- Bitset

---

> ✨ *STL reduces coding time and increases efficiency — master it for CP success!*