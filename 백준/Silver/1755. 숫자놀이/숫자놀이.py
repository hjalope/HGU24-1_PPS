num_to_word_dict = {
    '0': 'zero',
    '1': 'one',
    '2': 'two',
    '3': 'three',
    '4': 'four',
    '5': 'five',
    '6': 'six',
    '7': 'seven',
    '8': 'eight',
    '9': 'nine'
}

# 영어 단어를 숫자로 변환하는 딕셔너리
word_to_num_dict = {v: k for k, v in num_to_word_dict.items()}

# 숫자 -> 단어 변환
def change_to_word(n):
    n_str = str(n)  # 숫자를 문자열로 변환
    word_list = [num_to_word_dict[digit] for digit in n_str]  # 각 자리수 변환
    return word_list

# 단어 -> 숫자 변환
def change_to_number(word_list):
    num_str = ''.join([word_to_num_dict[word] for word in word_list])  # 단어 -> 숫자 변환
    return int(num_str)

source, destination = map(int, input().split())

num_to_word = []

# source ~ destination 변환
for i in range(source, destination + 1):
    change = change_to_word(i)
    num_to_word.append(change)

sorted_num = sorted(num_to_word)

result_numbers = [change_to_number(word_list) for word_list in sorted_num]

for i in range(0, len(result_numbers), 10):
    print(' '.join(map(str, result_numbers[i:i + 10])))