Templates

1. Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.
2. Write a C++ Program to find Largest among two numbers using function template.
3. Write a C++ program to find the largest of three elements using a template.
4. Write a C++ Program to Swap data using function template.
5. Write a C++ Program to Add two numbers using function template.
6. Write a C++ Program to find Sum of Array using function template.
7. Write a C++ Program of Templated class derived from Non-templated class.
8. Write a C++ Program to implement push and pop methods from stack using
template.
9. Write a C++ Program to Perform Simple Addition Function Using Templates.
10. Write a C++ program to implement Hash Table using Template Class.

Solution:-

1. #include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Addition of integers: " << add(3, 5) << std::endl;
    std::cout << "Addition of doubles: " << add(2.5, 3.7) << std::endl;
    std::cout << "Addition of strings: " << add(std::string("Hello, "), std::string("World!")) << std::endl;
    return 0;
}

2. #include <iostream>

template <typename T>
T findLargest(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Largest of 5 and 10: " << findLargest(5, 10) << std::endl;
    std::cout << "Largest of 7.5 and 2.5: " << findLargest(7.5, 2.5) << std::endl;
    return 0;
}

3. #include <iostream>

template <typename T>
T findLargest(T a, T b, T c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    std::cout << "Largest of 3, 7, and 5: " << findLargest(3, 7, 5) << std::endl;
    std::cout << "Largest of 2.5, 4.8, and 1.6: " << findLargest(2.5, 4.8, 1.6) << std::endl;
    return 0;
}

4. #include <iostream>

template <typename T>
void swapData(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swapData(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    double a = 1.5, b = 3.5;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swapData(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}

5. #include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 5 and 10: " << add(5, 10) << std::endl;
    std::cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << std::endl;
    return 0;
}

6. #include <iostream>

template <typename T>
T arraySum(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arrInt[] = {1, 2, 3, 4, 5};
    double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Sum of integer array: " << arraySum(arrInt, 5) << std::endl;
    std::cout << "Sum of double array: " << arraySum(arrDouble, 5) << std::endl;
    return 0;
}

7. #include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(const T& element) {
        elements.push_back(element);
    }

    void pop() {
        if (elements.empty()) {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            std::cerr << "Stack is empty." << std::endl;
            return T();
        }
        return elements.back();
    }

    bool isEmpty() const {
        return elements.empty();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    std::cout << "Top of intStack: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top of intStack after pop: " << intStack.top() << std::endl;

    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    std::cout << "Top of stringStack: " << stringStack.top() << std::endl;
    stringStack.pop();
    std::cout << "Top of stringStack after pop: " << stringStack.top() << std::endl;

    return 0;
}

8. #include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(const T& element) {
        elements.push_back(element);
    }

    void pop() {
        if (elements.empty()) {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            std::cerr << "Stack is empty." << std::endl;
            return T();
        }
        return elements.back();
    }

    bool isEmpty() const {
        return elements.empty();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    std::cout << "Top of intStack: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top of intStack after pop: " << intStack.top() << std::endl;

    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    std::cout << "Top of stringStack: " << stringStack.top() << std::endl;
    stringStack.pop();
    std::cout << "Top of stringStack after pop: " << stringStack.top() << std::endl;

    return 0;
}

9. #include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 3 and 5: " << add(3, 5) << std::endl;
    std::cout << "Sum of 2.3 and 3.7: " << add(2.3, 3.7) << std::endl;
    std::cout << "Sum of 'Hello' and ' World': " << add(std::string("Hello"), std::string(" World")) << std::endl;
    return 0;
}

10. #include <iostream>
#include <vector>
#include <list>
#include <functional>

template <typename K, typename V>
class HashTable {
private:
    int capacity;
    std::vector<std::list<std::pair<K, V>>> table;

    int hashFunction(const K& key) const {
        return std::hash<K>{}(key) % capacity;
    }

public:
    HashTable(int size) : capacity(size), table(size) {}

    void insert(const K& key, const V& value) {
        int index = hashFunction(key);
        for (auto& kv : table[index]) {
            if (kv.first == key) {
                kv.second = value;
                return;
            }
        }
        table[index].emplace_back(key, value);
    }

    bool search(const K& key, V& value) const {
        int index = hashFunction(key);
        for (const auto& kv : table[index]) {
            if (kv.first == key) {
                value = kv.second;
                return true;
            }
        }
        return false;
    }

    void remove(const K& key) {
        int index = hashFunction(key);
        auto& cell = table[index];
        for (auto it = cell.begin(); it != cell.end(); ++it) {
            if (it->first == key) {
                cell.erase(it);
                return;
            }
        }
    }
};

int main() {
    HashTable<int, std::string> hashTable(10);
    hashTable.insert(1, "Alice");
    hashTable.insert(2, "Bob");
    hashTable.insert(3, "Charlie");

    std::string value;
    if (hashTable.search(2, value)) {
        std::cout << "Found value for key 2: " << value << std::endl;
    } else {
        std::cout << "Key 2 not found" << std::endl;
    }

    hashTable.remove(2);
    if (hashTable.search(2, value)) {
        std::cout << "Found value for key 2: " << value << std::endl;
    } else {
        std::cout << "Key 2 not found" << std::endl;
    }

    return 0;
}
