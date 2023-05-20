from typing import List, TypeVar


T = TypeVar('T')

def insertion_sort(items: List[T]) -> None:
	for i in range(1, len(items)):
		j = i
		while j > 0 and items[j] < items[j - 1]:
			items[j], items[j - 1] = items[j - 1], items[j]
			j -= 1


if __name__ == '__main__':
	items = [-2, -6, 1, 7, 4]
	items = list(range(9, -10, -1))
	# items = list('insertionsort')
	insertion_sort(items)
	print(items)

