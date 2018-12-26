//https://leetcode.com/problemset/all/

int* twoSum(int* nums, int numsSize, int target) 
{
    int flag = 0;
	static int ans[2];
    for(int i=0;i<numsSize;i++)
    {
       for(int j=i+1;j<numsSize;j++)
       {
          if(target-nums[i]==nums[j])
          {
              ans[0] = i;
			  ans[1] = j;
			  flag = 1;
              break;
          }
       }
	   if(flag == 1 )
	   {
		   break;
	   } 	
    }
	return ans;
}