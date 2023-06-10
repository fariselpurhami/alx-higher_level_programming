#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):

    if matrix is None:
        print('')

    else:

        for w in range(len(matrix)):
            for m in range(len(matrix[w])):

                print('{:d}'.format(matrix[w][m]), end='')
                if m != len(matrix[w]) - 1:
                    print(' ', end='')

            print('')
