void checkString(string s) {
    int v = 0;
    int c = 0;
    int n=s.length();
    for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                v++;
            }else if(s[i]!='a'&&s[i]!='i'&&s[i]!='u'&&s[i]!='e'&&s[i]!='o'&&s[i]!=' '){
                c++;
            }
        }

     if(v>c)

        cout<<"Yes";

    else if(c>v)

        cout<<"No";

    else

        cout<<"Same";

    cout << endl;
}