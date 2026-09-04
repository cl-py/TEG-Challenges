'''
 @brief: Dial Me Out Solution Part 1

 @details
 Using this python script, we can decode 
 the string from the challenge prompt. It
 is a string encoded in base64. So, decoding
 it using the base64 library will get you
 the plaintext for part 2.

 @Creator
 Eddie
'''

import base64

def main():
    # cipher text from prompt
    code = "NjY2NzMzNjY3Nzc3MzM3Nzc3MjYzMw=="
    # decode using base64
    plaintext = base64.b64decode(code).decode("utf-8")
    print(plaintext)

if __name__ == "__main__":
    main()