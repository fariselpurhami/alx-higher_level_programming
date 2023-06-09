#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):

    for w in range(len(matrix)):
        for m in range(len(matrix[w])):

            print('{}'.format(matrix[w][m]), end='')

            if m != len(matrix[w]) - 1:
                print(' ', end='')

        print('')
