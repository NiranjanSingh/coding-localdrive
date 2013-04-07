# 6.00x Problem Set 5
#
# Part 2 - RECURSION

#
# Problem 3: Recursive String Reversal
#
def reverseString(aStr):
    """
    Given a string, recursively returns a reversed copy of the string.
    For example, if the string is 'abc', the function returns 'cba'.
    The only string operations you are allowed to use are indexing,
    slicing, and concatenation.
    
    aStr: a string
    returns: a reversed string
    """
    ### TODO.
    if aStr == '':
       return ''
    return aStr[-1]+reverseString(str[:-1])

#
# Problem 4: X-ian
#
def x_ian(x, word):
    """
    Given a string x, returns True if all the letters in x are
    contained in word in the same order as they appear in x.

    >>> x_ian('eric', 'meritocracy')
    True
    >>> x_ian('eric', 'cerium')
    False
    >>> x_ian('john', 'mahjong')
    False
    
    x: a string
    word: a string
    returns: True if word is x_ian, False otherwise
    """
    ###TODO.
    print x + ' ' + word 
    print 
    if x == '':
       return True
    if x!='' and word == '':
       return False
    if (x[0] == word[0]):
       return x_ian(x[1:],word[1:])
    else:
       return x_ian(x[:], word[1:])   


#
# Problem 5: Typewriter
#

def insertNewlinesRec(s,c,lineLength,text):
    if (c>= lineLength or text[c+1] == ' '):
       print s
       print
       insertNewlines(text[c+1:],lineLength)
    else:
       s += text[c]
       c += 1

def insertNewlines(text, lineLength):
    """
    Given text and a desired line length, wrap the text as a typewriter would.
    Insert a newline character ("\n") after each word that reaches or exceeds
    the desired line length.

    text: a string containing the text to wrap.
    line_length: the number of characters to include on a line before wrapping
        the next word.
    returns: a string, with newline characters inserted appropriately. 
    """
    
    if text[0] == '':
       return
    else:
       c=0
       s=''
       insertNewlinesRec(s,c,lineLength,text)
    



print x_ian(raw_input("Enter x : "),raw_input("Enter word : "))
