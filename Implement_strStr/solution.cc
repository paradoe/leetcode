class Solution {
  public:
    int strStr(char *haystack, char *needle) {

      if (!haystack || !needle) {
        return -1;
      }

      if (! *needle) {
        return 0;
      }

      int idxHaystack = 0;
      int idxNeedle = 0;
      int idxHaystackBegin = 0;

      while(haystack[idxHaystack]) {
        while(haystack[idxHaystack] && needle[idxNeedle] && (haystack[idxHaystack] == needle[idxNeedle]) ) {
          idxHaystack++;
          idxNeedle++;
        }
        if(! needle[idxNeedle]) {
          return idxHaystack -idxNeedle;
        }
        if(! haystack[idxHaystack]) {
          return -1;
        } else {
          idxHaystackBegin++;
          idxHaystack = idxHaystackBegin;
          idxNeedle = 0;
        }
      }

      return -1;
    }

};
