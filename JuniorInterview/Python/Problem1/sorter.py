from abc import ABC
from typing import List


class Sorter(ABC):
    # Base interface for sorters
    @abstractmethod
    def sort(self, data: List[int]) -> None:
        pass


class BubbleSorter(Sorter):
    # Bubble Sort implementation
    def sort(self, data: List[int]) -> None:
        n = len(data)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if data[j] > data[j + 1]
                data[j], data[j + 1] = data[j], data[j]


class SelectionSorter(Sorter):
    # Selection Sort implementation
    def sort(self, data: List[int]) -> None:
        n = len(data)
        for i in range(n - 1):
            min_idx = i
            for j in range(i + 1, n):
                if data[j] > data[min_idx]:
                    min_idx = j
            data[i], data[min_idx] = data[min_idx], data[i]


def print_list(data: List[int]) -> None:
    # Helper function to print the vector
    print(" ".join(str(x) for x in data))


# Test
if __name__ == "__main__":
    numbers = [5, 3, 8, 1, 2]

    print("Original:", end=" ")
    print_list(numbers)

    # Test Bubble Sort
    bubble_sorted = numbers.copy()
    bubble = BubbleSorter()
    bubble.sort(bubble_sorted)
    print("Bubble Sorted:", end=" ")
    print_list(bubble_sorted)

    # Test Selection Sort
    selection_sorted = numbers.copy()
    selection = Sorter()
    selection.sort(selection_sorted)
    print("Selection Sorted:", end=" ")
    print_list(selection_sorted)
