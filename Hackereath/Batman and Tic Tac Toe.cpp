#include<iostream>
using namespace std;
 
int main(){
    int t,i,j,flag=0;
    char a[4][4];
    cin>>t;
    while(t--){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++)
               cin>>a[i][j];
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(a[i][j]=='.'){
                      a[i][j]='x';
                  if((a[i][0]=='x' && a[i][1]=='x' && a[i][2]=='x')||(a[i][1]=='x' && a[i][2]=='x' && a[i][3]=='x'))
                      {
    					  flag=1;
	    				  break;
					  }
                  if((a[0][j]=='x' && a[1][j]=='x' && a[2][j]=='x')||(a[1][j]=='x' && a[2][j]=='x' && a[3][j]=='x'))
                      {
		    			  flag=1;
			    		  break;
					  }
                  if((a[1][0]=='x' && a[2][1]=='x' && a[3][2]=='x')||(a[0][1]=='x' && a[1][2]=='x' && a[2][3]=='x'))
                      {
				    	  flag=1;
					      break;
					  }
                  if((a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x')||(a[1][1]=='x' && a[2][2]=='x' && a[3][3]=='x'))
                      {
    					  flag=1;
	    				  break;
					  }
                  if((a[2][0]=='x' && a[1][1]=='x' && a[0][2]=='x')||(a[3][1]=='x' && a[2][2]=='x' && a[1][3]=='x'))
                      {
		    			  flag=1;
			    		  break;
					  }
                  if((a[3][0]=='x' && a[2][1]=='x' && a[1][2]=='x')||(a[2][1]=='x' && a[1][2]=='x' && a[0][3]=='x'))
                      {
				    	  flag=1;
					      break;
					  }
                  a[i][j]='.';
                }
            }
            if(flag==1)
               break;
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        flag=0;
    }
}
