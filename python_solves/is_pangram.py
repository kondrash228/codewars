import string

def is_pangram(s: str) -> bool:
    string_without_punct = (s.lower()).translate(str.maketrans('', '',string.punctuation))
    new_str = string_without_punct.split(' ')
    letter_counter = 0

    print(new_str)

    for i in range(len(new_str)):
        for j in range(len(new_str[i])):
            if new_str[i][j] == new_str[i][j - 1]:
                letter_counter += 1
            
    return True if letter_counter > 0 else False
    

print(is_pangram("The quick, brown fox jumps over the lazy dog!"))



