def recursive(input_str):
    if len(input_str) <= 1:
        return input_str
    
    return recursive(input_str[1:]) + input_str[0]

string = "sanjit"
reverse = recursive(string)
print(reverse)