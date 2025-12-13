class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        string result[250];
        int count=0;

        for(int i=0;i<code.size();i++)
            {
                if(code[i]=="") 
                    continue;
                bool valid=true;

                for(int j=0;j<code[i].length();j++)
                    {
                        char c=code[i][j];

                        if(!((c>='a'&&c<='z')|| (c>='A' && c<='Z') || (c>='0' && c<='9')|| c=='_'))
                        {
                            valid=false;
                            break;
                        }
                    }

                if(!valid)
                    continue;

                int order=-1;
                if(businessLine[i] == "electronics")
                    order=0;
                else if(businessLine[i]=="grocery")
                    order=1;
                else if(businessLine[i]=="pharmacy")
                    order=2;
                else if(businessLine[i]=="restaurant")
                    order=3;
                else
                    continue;

                if(!isActive[i])
                    continue;

                result[count]=to_string(order)+"|"+code[i];
                count++;
            }
        for(int i=0;i<count-1;i++)
            {
                for(int j=i+1;j<count;j++)
                    {
                        if(result[i]>result[j])
                        {
                            string temp=result[i];
                            result[i]=result[j];
                            result[j]=temp;
                        }
                    }
            }
        vector<string> finalResult;
        for(int i=0;i<count;i++)
            {
                string full=result[i];
                string codePart="";
                int k=2;
                while(k<full.length())
                    {
                        codePart+=full[k];
                        k++;
                    }
                finalResult.push_back(codePart);
            }
        return finalResult;
    }
};
