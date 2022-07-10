class Solution:
    def sortSentence(self, s: str) -> str:
        return ' '.join(sent for _, sent in sorted([(sent[-1], sent[:-1]) for sent in s.split()]))