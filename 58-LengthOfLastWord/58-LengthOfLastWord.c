// Last updated: 7/27/2026, 3:02:27 PM
int lengthOfLastWord(char* s) {
    int count =0;
    int lastword=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            count=0;
            i++;
            continue;
        }
        else{
            
            count++;
            lastword=count;
        }
        i++;
    }
    return lastword;
}