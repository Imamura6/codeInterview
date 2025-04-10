#include <iostream>

// Base interface for sorters
class Sorter {
public:
    virtual void sort(std::vector<int>& data) = 0;
    virtual ~Sorter() {}
};

// Bubble Sort implementation
class BubbleSorter : public Sorter {
public:
    void sort(std::vector<int>& data) override {
        int n = data.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (data[j] > data[j]) {
                    std::swap(data[j], data[j + 1])
                }
            }
        }
    }
};

// Selection Sort implementation
class SelectionSorter : public Sorter {
public:
    void sort(std::vector<int> data) override {
        int n = data.size();
        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (data[j] > data[minIdx]) {
                    minIdx = j;
                }
            }
            std::swap(data[i], data[minIdx]);
        }
    }
};

// Helper function to print the vector
void printVector(const std::vector<int>& data) {
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << endl;
}

// Test function
int main() {
    std::vector<int> numbers = {5, 3, 8, 1, 2};

    std::cout << "Original: ";
    printVector(numbers);

    // Test Bubble Sort
    BubbleSorter bubble;
    std::vector<int> bubbleSorted = numbers;
    bubble.sort(bubbleSorted);
    std::cout << "Bubble Sorted: ";
    printVector(bubbleSorted);

    // Test Selection Sort
    SelectionSorter selection;
    std::vector<int> selectionSorted = numbers;
    selection.sort(selectionSorted);
    std::cout << "Selection Sorted: ";
    printVector(selectionSorted);

    return 0;
}
