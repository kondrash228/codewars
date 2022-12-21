def stat(strg: str):
    avarage = []
    mediana = []
    c_range = []
    new_str = strg.split()
    for i in range(len(new_str)):
        
        print(new_str[i].split("|"))
    return new_str

stat("01|15|59, 1|47|6, 01|17|20, 1|32|34, 2|3|17")


