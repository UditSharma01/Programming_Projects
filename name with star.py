#Writing Letters using *

letters = {
    'A': [' *** ', '*   *', '*****', '*   *', '*   *'],
    'B': ['**** ', '*   *', '**** ', '*   *', '**** '],
    'C': [' ****', '*    ', '*    ', '*    ', ' ****'],
    'D': ['**** ', '*   *', '*   *', '*   *', '**** '],
    'E': ['*****', '*    ', '*****', '*    ', '*****'],
    'F': ['*****', '*    ', '***  ', '*    ', '*    '],
    'G': [' ****', '*    ', '*  **', '*   *', ' ****'],
    'H': ['*   *', '*   *', '*****', '*   *', '*   *'],
    'I': ['*****', '  *  ', '  *  ', '  *  ', '*****'],
    'J': ['*****', '    *', '    *', '*   *', ' *** '],
    'K': ['*   *', '*  * ', '**   ', '*  * ', '*   *'],
    'L': ['*    ', '*    ', '*    ', '*    ', '*****'],
    'M': ['*   *', '** **', '* * *', '*   *', '*   *'],
    'N': ['*   *', '**  *', '* * *', '*  **', '*   *'],
    'O': [' *** ', '*   *', '*   *', '*   *', ' *** '],
    'P': ['**** ', '*   *', '**** ', '*    ', '*    '],
    'Q': [' *** ', '*   *', '*   *', '*  **', ' ** *'],
    'R': ['**** ', '*   *', '**** ', '*  * ', '*   *'],
    'S': [' ****', '*    ', '**** ', '    *', '**** '],
    'T': ['*****', '  *  ', '  *  ', '  *  ', '  *  '],
    'U': ['*   *', '*   *', '*   *', '*   *', ' *** '],
    'V': ['*   *', '*   *', '*   *', ' * * ', '  *  '],
    'W': ['*   *', '*   *', '* * *', '** **', '*   *'],
    'X': ['*   *', ' * * ', '  *  ', ' * * ', '*   *'],
    'Y': ['*   *', ' * * ', '  *  ', '  *  ', '  *  '],
    'Z': ['*****', '   * ', '  *  ', ' *   ', '*****'],
}

string = str(input('enter name/character/word:\n'))
for i in range(5):

    for word in range(len(string)):
        current_word = string[word].upper()
        if word == len(string)-1 :
            print(letters[current_word][i])
        else :
            print(letters[current_word][i],end='   ')
