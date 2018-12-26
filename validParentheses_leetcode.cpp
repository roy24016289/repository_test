//https://leetcode.com/problemset/all/

bool isValid(char* s) {
    char left[] = {'(','{','['};
    char right[] = {')','}',']'};
    int array_length;
    
    char correct_char_buffer[10000];
    int correct_char_buffer_top = 0;
    
    for(int i=0;;i++)
    {
        if(s[i]=='\0')
        {
            array_length = i;
            break;
        }
    }
    
    if(array_length%2==0)
    {
        for(int j=0;j<array_length;j++)
        {
           if(correct_char_buffer_top==0)
           {
               if(s[j]==right[0]||s[j]==right[1]||s[j]==right[2])
               {
                   return false;
               }
               else
               {
                   correct_char_buffer_top++;
                   for(int k = 0; k<3;k++)
                   {
                       if(s[j]==left[k])
                       {
                           correct_char_buffer[correct_char_buffer_top] = right[k];
                           break;
                       }                       
                   }                   
                  
               }
           } 
           else
           {
               if(s[j]==correct_char_buffer[correct_char_buffer_top])
               {
                   correct_char_buffer_top--;
               }
               else
               {
                   if(s[j]==right[0]||s[j]==right[1]||s[j]==right[2])
                   {
                       return false;
                   }
                   else
                   {
                      correct_char_buffer_top++;
                      for(int k = 0; k<3;k++)
                       {
                           if(s[j]==left[k])
                           {
                               correct_char_buffer[correct_char_buffer_top] = right[k];
                               break;
                           }                       
                       } 
                   }
               }
           } 
        }
        if(correct_char_buffer_top>0)
        {
            return false;
        }
            
    }
    else
    {
        return false;
    }
    
    return true;
    
}