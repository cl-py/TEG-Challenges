# Dial Me Out
### Cryptography Challenge

## Description
This challenge requires the competitior to decode a string from base64, then use that string on a number pad to find the hidden flag.

## Prompt

I've been locked in this base-ment for 64 hours. Please help me get out. There some sort of keypad on the door and I can't remember the passcode. I just remember the phrase NjY2NzMzNjY3Nzc3MzM3Nzc3MjYzMw== was supposed to help me remember. Help me get out!

## Hints

1. Careful not to mix up them digits!

## Solution

1. Competitor is given ciphertext **NjY2NzMzNjY3Nzc3MzM3Nzc3MjYzMw==** This is a digit code that is base64 encoded. Online decoders like CyberChef allow you to decode it through their UI. But, a simple python script will accomplish this also. Decoding it will give the user: **6667336677773377772633**

2. Using the code and challenge name, the user will then have to "type" the numbers onto a key pad that has letters and the numbers will allow them to construct the flag. 

```
    666  -> o       7777 -> s       6    -> m
    7    -> p       33   -> e       33   -> e
    33   -> e       7777 -> s
    66   -> n       2    -> a
```

## Flag

endor{opensesame}