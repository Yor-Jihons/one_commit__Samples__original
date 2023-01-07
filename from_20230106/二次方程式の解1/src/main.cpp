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

namespace Original{
    int CalcNumberOfResultValues( int a, int b, int c ){
        // 判別式 D = b^2 - 4ac
        int D = ( b * b ) - ( 4 * a * c );

        // 一つの重解をもつ
        if( D == 0 ) return 1;

        // それ以外は二つの解を持つ
    return 2;
    }
}

int main( int argc, char** argv ){
    int a, b, c;
    cin >> a >> b >> c;

    int n = Original::CalcNumberOfResultValues( a, b, c );
    cout << n << endl;
return 0;
}
