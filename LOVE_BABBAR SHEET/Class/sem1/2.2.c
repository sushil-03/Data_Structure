
  #include<stdio.h>
  #include<math.h>
    int func(int n,int sign){
        int ans;
        if(n==1)
        return 1;
        if(n%2==0){
             ans=n*n*n*sign;
            return ans+func(n-1,sign*-1);
        }else{
            ans=n*n*sign;
            return ans+func(n-1,sign*-1);
        }
        return ans;
    }

  int main(){
      int n;
      printf("Enter a limit :");
      scanf("%d",&n);
      int res;
      if(n%2==0)
       res=func(n,-1);
      else
       res=func(n,1);

    printf("%d",res);

  }