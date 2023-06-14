#!/usr/bin/python3
def search_replace(my_list, search, replace):
    
    return [replace if search is num else num for num in my_list]