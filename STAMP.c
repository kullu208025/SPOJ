    #include<string.h>
    #include<ctype.h>
    #include<stdio.h>
    char s[400];
    int top=-1;
    push (char ch)
    {
        s[top++]=ch;
    }
    char pop()
    {
        return (s[top--]);
    }
    int pre(char ch)
    {
        if(ch=='*'||ch=='/')
            return 3;
        if(ch=='+'||ch=='-')
            return 2;
        if(ch=='(')
            return 1;
        if(ch=='#')
            return 0;
    }
    int main()
    {char ptfx[400],infx[400],ch,elem;
    int i=0,k=0,n;
    scanf("%d" ,&n);
    while(n--)
    {gets(infx);
    push('#');
    while((ch=infx[i++])!='\0')
    {
        if(ch=='(')
           push(ch);
       else if (isalnum(ch))
            ptfx[k++]=ch;
     
       else if(ch==')')
        {
         while(s[top]!=')')
          ptfx[k++]=pop();
          elem=pop();
         }
            else
            {while(pre(s[top])>= pre(ch))
            ptfx[k++]=pop();
            push(ch);}
    }while(s[top]!='#')
    {ptfx[k++]=pop();}
    ptfx[k++]='\0';
    puts(ptfx);}
    }
