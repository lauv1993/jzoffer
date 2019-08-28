# -*- coding:utf-8 -*-
class Solution:
    # s, pattern都是字符串
    def match(self, s, pattern):
        # write code here
        if not s and not pattern:
            return True
        elif s and not pattern:
            return False
        elif not s and pattern:
            if len(pattern) > 1 and pattern[1] == '*':
                return self.match(s, pattern[2:])
            else:
                return False
        else:
            if len(pattern) > 1 and pattern[1] == '*':
                if s[0] == pattern[0] or pattern[0] == '.':
                    return self.match(s[1:], pattern) or self.match(s, pattern[2:])
                else:
                    return self.match(s, pattern[2:])
            else:
                if s[0] == pattern[0] or pattern[0] == '.':
                    return self.match(s[1:], pattern[1:])
                else:
                    return False