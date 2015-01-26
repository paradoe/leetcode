class Solution {
  public:
    int atoi(const char *str) {
      int idxStr = 0;
      bool neg = false;
      int result = 0;

      if(!str || ! *str) {
        return 0;
      }

      for(; str[idxStr] && str[idxStr] == ' '; idxStr++) {
      }

      if(str[idxStr] == '+' || str[idxStr] == '-') {
        neg = (str[idxStr] == '+')? false : true;
        idxStr++;
      }

      for(; str[idxStr]; idxStr++) {
        if(str[idxStr] < '0' || str[idxStr] > '9') {
          break;
        }

        if(INT_MAX/10 < result || INT_MAX/10 == result && INT_MAX%10 < str[idxStr] - '0' )
          {
              return neg? INT_MIN : INT_MAX;
          }

          result = result*10 + str[idxStr] - '0';
      }

      return neg? -result : result;

    }
};
