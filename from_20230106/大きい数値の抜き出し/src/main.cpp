#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<memory>
#include<limits>
#include<stack>

using namespace std;

namespace Util{
    /** @brief The array of the strings. */
    using StrVec = std::vector<std::string>;

    /**
     * @brief Separate the strings.
     * @param text The string you want to separate.
     * @param delim The delim string. ( def: " " )
     * @return The object of the std::Vector for std::string, which was separated.
    */
    StrVec split( const std::string& text, const std::string& delim = std::string(" ") ){
        StrVec res;
        int end = 0, begin = 0, n = 0;
        while( true ){
            end   = text.find( delim, begin );
            if( end == std::string::npos ){
                res.push_back( text.substr( begin, (text.size() - begin) ) );
                break;
            }
            n = (end - begin);
            res.push_back( text.substr( begin, n ) );
            begin = end + 1;
        }
    return res;
    }

    /**
     * @brief Convert the data to the string.
     * @param val The data you want to convert.
     * @return The string which was converted from the data.
     */
    template<typename T> std::string ToString( T val ){
        std::stringstream ss;
        ss << val << flush;
    return ss.str();
    }
}


int main( int argc, char** argv ){
    int n, p;
    {
        std::string str1;
        std::getline( cin, str1 );
        Util::StrVec sv2 = Util::split( str1 );
        n = std::atoi( sv2[0].c_str() );
        p = std::atoi( sv2[1].c_str() );
    }

    std::string str2;
    std::getline( cin, str2 );
    Util::StrVec sv2 = Util::split( str2 );

    std::vector<int> nums( n );
    for( int i = 0; i < n; i++ ){
        nums[i] = std::atoi( sv2[i].c_str() );
    }

    std::vector<int> ans_nums;
    for( int i = 0; i < n; i++ ){
        if( nums[i] > p ) ans_nums.push_back( nums[i] );
    }

    if( ans_nums.size() == 0 ){
        cout << "None" << endl;
        return 0;
    }

    sort( ans_nums.begin(), ans_nums.end() );

    for( int i = 0; i < static_cast<int>(ans_nums.size()); i++ ){
        cout << ans_nums[i] << flush;
        if( i == ans_nums.size() - 1 ) cout << endl;
        else                           cout << " " << flush;
    }
return 0;
}
