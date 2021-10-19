class SuffixTrie{
public:
    node*root;

    SuffixTrie(){
        root= new node('\0');
    }

    void insert_helper(string s){
        node*temp = root;
        for(auto ch:s){
            if(temp->m.count(ch)==0){
                node*n= new node(ch);
                temp->m[ch]=n;
            }
            temp=temp->m[ch];

        }
        temp->isTerminal=true;

    }

    bool search_for_suffix(string s){
        node*temp = root;
        for(auto ch:s){
            if(temp->m.count(ch)==0){
                return false;
            }
            else{
                temp=temp->m[ch];
            }

        }
        return temp->isTerminal;


    }

    void insert_for_suffix(string s){
        for(int i=0;i<s.length();i++){
            insert_helper(s.substr(i));
        }
    }


};

