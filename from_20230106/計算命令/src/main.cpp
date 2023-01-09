#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<memory>
#include<limits>
#include<list>

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
    class IProcess{
        public:
            IProcess(){}
            virtual ~IProcess(){}

            virtual double Calc( double n ) = 0;

            virtual std::string ToString( void ) const = 0;
    };

    class AdditionProcess : public IProcess{
        public:
            AdditionProcess( int a ) : a_(a){}
            ~AdditionProcess(){}

            virtual double Calc( double n ) override{
                return n + this->a_;
            }

            virtual std::string ToString( void ) const override{
                return "Add " + std::to_string( this->a_ );
            }
        private:
            int a_;
    };

    class SubtractionProcess : public IProcess{
        public:
            SubtractionProcess( int a ) : a_(a){}
            ~SubtractionProcess(){}

            virtual double Calc( double n ) override{
                return n - this->a_;
            }

            virtual std::string ToString( void ) const override{
                return "Sub " + std::to_string( this->a_ );
            }
        private:
            int a_;
    };

    class MultiplicationProcess : public IProcess{
        public:
            MultiplicationProcess( int a ) : a_(a){}
            ~MultiplicationProcess(){}

            virtual double Calc( double n ) override{
                return n * this->a_;
            }

            virtual std::string ToString( void ) const override{
                return "Multiply " + std::to_string( this->a_ );
            }
        private:
            int a_;
    };

    class DivisionProcess : public IProcess{
        public:
            DivisionProcess( int a ) : a_(a){}
            ~DivisionProcess(){}

            virtual double Calc( double n ) override{
                return n / this->a_;
            }

            virtual std::string ToString( void ) const override{
                return "Divide " + std::to_string( this->a_ );
            }
        private:
            int a_;
    };

    Original::IProcess* CreateProcessObject( const std::string& str ){
        Util::StrVec sv = Util::split( str );

        if( sv[0].compare( "add" ) == 0 ) return new AdditionProcess( std::atoi( sv[1].c_str() ) );
        if( sv[0].compare( "sub" ) == 0 ) return new SubtractionProcess( std::atoi( sv[1].c_str() ) );
        if( sv[0].compare( "multiply" ) == 0 ) return new MultiplicationProcess( std::atoi( sv[1].c_str() ) );
        if( sv[0].compare( "divide" ) == 0 ) return new DivisionProcess( std::atoi( sv[1].c_str() ) );
    return nullptr;
    }

    class ProcessManager{
        public:
            ProcessManager(){

            }

            ~ProcessManager(){
                for( int i = 0; i < processes_.size(); i++ ){
                    delete processes_[i];
                }
            }

            void Add( Original::IProcess* proc ){
                processes_.push_back( proc );
            }

            double Calc( double n ){
                double target = n;
                for( int i = 0; i < processes_.size(); i++ ){
                    target = processes_[i]->Calc( target );
                }
            return target;
            }
        private:
            std::vector<IProcess*> processes_;
    };
}


int main( int argc, char** argv ){
    double n;
    int m;
    {
        std::string s;
        std::getline( cin, s );
        Util::StrVec sv = Util::split( s );
        n = std::stod( sv[0].c_str() );
        m = std::atoi( sv[1].c_str() );
    }

    Original::ProcessManager processManager;
    for( int i = 0; i < m; i++ ){
        std::string str;
        std::getline( cin, str );
        processManager.Add( Original::CreateProcessObject( str ) );
    }

    cout << processManager.Calc( n ) << endl;

return 0;
}
