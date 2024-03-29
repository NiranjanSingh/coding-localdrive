# 6.00x Problem Set 5
#
# Part 1 - HAIL CAESAR!

import string
import random

WORDLIST_FILENAME = "words.txt"

# -----------------------------------
# Helper code
# (you don't need to understand this helper code)
def loadWords():
    """
    Returns a list of valid words. Words are strings of lowercase letters.
    
    Depending on the size of the word list, this function may
    take a while to finish.
    """
    print "Loading word list from file..."
    inFile = open(WORDLIST_FILENAME, 'r')
    wordList = inFile.read().split()
    print "  ", len(wordList), "words loaded."
    return wordList

def isWord(wordList, word):
    """
    Determines if word is a valid word.

    wordList: list of words in the dictionary.
    word: a possible word.
    returns True if word is in wordList.

    Example:
    >>> isWord(wordList, 'bat') returns
    True
    >>> isWord(wordList, 'asdf') returns
    False
    """
    word = word.lower()
    word = word.strip(" !@#$%^&*()-_+={}[]|\\:;'<>?,./\"")
    return word in wordList

def randomWord(wordList):
    """
    Returns a random word.

    wordList: list of words  
    returns: a word from wordList at random
    """
    return random.choice(wordList)

def randomString(wordList, n):
    """
    Returns a string containing n random words from wordList

    wordList: list of words
    returns: a string of random words separated by spaces.
    """
    return " ".join([randomWord(wordList) for _ in range(n)])

def randomScrambled(wordList, n):
    """
    Generates a test string by generating an n-word random string
    and encrypting it with a sequence of random shifts.

    wordList: list of words
    n: number of random words to generate and scamble
    returns: a scrambled string of n random words

    NOTE:
    This function will ONLY work once you have completed your
    implementation of applyShifts!
    """
    s = randomString(wordList, n) + " "
    shifts = [(i, random.randint(0, 25)) for i in range(len(s)) if s[i-1] == ' ']
    return applyShifts(s, shifts)[:-1]

def getStoryString():
    """
    Returns a story in encrypted text.
    """
    return open("story.txt", "r").read()


# (end of helper code)
# -----------------------------------


#
# Problem 1: Encryption
#
def buildCoder(shift):
    """
    Returns a dict that can apply a Caesar cipher to a letter.
    The cipher is defined by the shift value. Ignores non-letter characters
    like punctuation, numbers and spaces.

    shift: 0 <= int < 26
    returns: dict
    """
    ### TODO.
    eDict = {}
    for c in string.ascii_lowercase:
        if ord(c) + shift > ord('z'):
           eDict[c]=chr(ord(c)+shift-ord('z') + ord('a')-1)
	else:
           eDict[c]=chr(ord(c)+shift)
    for c in string.ascii_uppercase:
        if ord(c) + shift > ord('Z'):
           eDict[c]=chr(ord(c)+shift-ord('Z') + ord('A')-1)
	else:
           eDict[c]=chr(ord(c)+shift)
    return eDict

def applyCoder(text, coder):
    """
    Applies the coder to the text. Returns the encoded text.

    text: string
    coder: dict with mappings of characters to shifted characters
    returns: text after mapping coder chars to original text
    """
    ### TODO.
    eText=""
    for c in text:
        if (c >= 'A' and c =< 'Z') or (c >='a' and c =< 'z'):
           eText += coder.get(c)
        else:
           eText += c
    return eText

def applyShift(text, shift):
    """
    Given a text, returns a new text Caesar shifted by the given shift
    offset. Lower case letters should remain lower case, upper case
    letters should remain upper case, and all other punctuation should
    stay as it is.

    text: string to apply the shift to
    shift: amount to shift the text (0 <= int < 26)
    returns: text after being shifted by specified amount.
    """
    ### TODO.
    ### HINT: This is a wrapper function.
    eText=""
    for c in text:
        if (c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'):
           if c>='a' and c <= 'z':
              if ord(c) + shift > ord('z'):
                 eText += chr(ord(c)+shift-ord('z') + ord('a')-1)
	      else:
                 eText += chr(ord(c)+shift)
           else:
              if ord(c) + shift > ord('Z'):
                 eText += chr(ord(c)+shift-ord('Z') + ord('A')-1)
	      else:
                 eText += chr(ord(c)+shift)
        else:
           eText += c
    return eText

#    
#2: Decryption
#
def findBestShift(wordList, text):
    """
    Finds a shift key that can decrypt the encoded text.

    text: string
    returns: 0 <= int < 26
    """
    ### TODO
    match = {}
    for i in range(26):
        eText = applyShift(text,i).split(' ')
        chk = 0
        for word in eText:
            if isWord(wordList,word):
               chk += 1
        match[chk]= i 
    if max(match)==0:
        return 0
    return match.get(max(match))
   

def decryptStory():
    """
    Using the methods you created in this problem set,
    decrypt the story given by the function getStoryString().
    Use the functions getStoryString and loadWords to get the
    raw data you need.

    returns: string - story in plain text
    """
    ### TODO.
    wordList=loadWords()
    return applyShift(getStoryString(),findBestShift(wordList,getStoryString()))
   

#
# Build data structures used for entire session and run encryption
#

if __name__ == '__main__':
    # To test findBestShift:
  """  wordList = loadWords()
    s = applyShift("UIf ufbdifS't obnf Jt Ubcjuib?", 25)
    print s
    bestShift = findBestShift(wordList, "UIf ufbdifS't obnf Jt Ubcjuib?")
    print bestShift"""
    #  assert applyShift(s, bestShift) == 'Hello, world!'
    # To test decryptStory, comment the above four lines and uncomment this line:
  print decryptStory()
