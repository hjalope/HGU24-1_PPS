from itertools import product

def solution(word):
    # 알파벳 모음 리스트
    vowels = ['A', 'E', 'I', 'O', 'U']

    all_words = [] # 모든 단어 배열에 저장
    for length in range(1, 6):
        for combination in product(vowels, repeat=length):
            all_words.append(''.join(combination))

    # 사전순으로 정렬
    all_words.sort()

    # 주어진 단어의 위치 찾기
    return all_words.index(word) + 1