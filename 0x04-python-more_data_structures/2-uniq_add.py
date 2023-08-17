def uniq_add(my_list=[]):
    unique_sum = 0
    unique_values = set()
    
    for num in my_list:
        if num not in unique_values:
            unique_sum += num
            unique_values.add(num)
    
    return unique_sum

