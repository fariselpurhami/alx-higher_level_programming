#!/usr/bin/python3
def delete_at(my_list=[], idx=0):
    del my_list[idx]

    if 0 <= idx < len(my_list):
        return (my_list)
