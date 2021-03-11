#include <iostream>
#include <string>

int main(){
    std::string s_Cin   =   "";

    std::getline(std::cin, s_Cin, '\n');
    if(s_Cin[(s_Cin.length()- 1)]== '\r'){// COM: trim \r in window os
        s_Cin = s_Cin.substr(0, (s_Cin.length()- 1));
    }

    int ia_ShowCout[26] =   {};

    for(int i_Ct=0;
        i_Ct< s_Cin.length();
        i_Ct++){

        if(s_Cin[i_Ct] == ' '){
            continue;
        }

        int i_Ind       =  static_cast<int>(s_Cin[i_Ct]) - static_cast<int>('a');
        ia_ShowCout[i_Ind]++;
    }

    for(int i_Ct=0;
        i_Ct< sizeof(ia_ShowCout)/sizeof(int);
        i_Ct++){

        if(ia_ShowCout[i_Ct] == 0){
            continue;
        }

        std::cout<< static_cast<char>(i_Ct +  static_cast<int>('a'))<< ":"<<
                    ia_ShowCout[i_Ct]<< "\n";
    }

    return 0;
}
