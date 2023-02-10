int maxDepth(char * s){

char stack[100]={'\0'}; int depth=0; int top = -1;int max_depth=0;    
while(*s != '\0'){
    if(*s == '('){
        top++; //increment and push 
        stack[top] = *s;
        
        depth ++; 
        if(depth > max_depth)max_depth =depth;
    }
    else if(*s == ')'){
        top --;depth --;// pop if matching ')' has been found  
    }
    else { }
    s++;
}
return max_depth;
}