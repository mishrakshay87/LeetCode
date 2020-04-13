from enum import Enum 
class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        
        pos_dict ={}
        new_list = []
        c= 0
        for elem in (arr2):
            pos_dict[elem] = c
            c+= 1
        arr_slice = [element for element in arr1 if element in arr2]
        arr_slice_not = [element for element in arr1 if element not in arr2]
        #print(arr_slice_not)
        arr_slice_not_sort = sorted(arr_slice_not)
        for el in range(len(arr_slice)):
            for el2 in range(el,len(arr_slice)):
                if pos_dict[arr_slice[el]] > pos_dict[arr_slice[el2]]:
                    temp = arr_slice[el]
                    arr_slice[el] = arr_slice[el2]
                    arr_slice[el2] = temp
        
        arr_slice.extend(arr_slice_not_sort)
        return arr_slice
              