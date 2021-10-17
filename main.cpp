#include <iostream>
#include <string>


std::string toLowerCase(std::string word){

    for (int i = 0; i < word.size(); ++i) {
        word[i] = tolower(word[i]) ;
    }
    return word;

}

bool isPalindrome( std::string word ){
    word = toLowerCase(word) ;

    int size = word.size() ;

    if (size % 2 == 0 ){
        return false;
    }
    size = size -1 ;
    int j = size ;
    for (int i = 0; i < size ; i++ ){
        if (word[i] != word[j]){
            return false ;
        }
        j -- ;
    }
    return true;
}

bool isAnagram( std::string word1 , std::string word2){
    word1 = toLowerCase(word1) ;
    word2 = toLowerCase(word2) ;
    if( word1.size() != word2.size() ){
        return false ;
    }

    std::sort(word1.begin(), word1.end());
    std::sort(word2.begin(), word2.end());

   for ( int i=0 ; i<word1.size() ; i++ ){
       if ( word1[i] != word2[i] ){
           return false;
       }
   }
   return true;
}

void find ( std::string text , std::string expressionToFind , int &n , int coord[] ){

    



}


int main() {

    std::cout<<" Ktory algorytm chcesz wykonac?: \n" ;
    std::cout<<" [1] Sprawdzanie czy slowo nie jest palindromem \n" ;
    std::cout<<" [2] Sprawdzenie czy slowa nie sa anagramami \n" ;
    std::cout<<" [3] Wyszukanie wzorcow w tekscie \n" ;
    int wybor ;
    std::cin >> wybor ;

    switch (wybor) {
        case 1:{
            std::cout<<"Podaj slowo, a my sprawdzimy czy jest palindromem:"<<"\n";
            std::string slowo ;
            std::cin>>slowo ;
            if (isPalindrome(slowo)){
                printf("%s jest palindromem",slowo.c_str());
            } else{
                printf("%s nie jest palindromem ",slowo.c_str());
            }
            std::cout<<"\n" ;
            break;
        }
        case 2:{
            std::cout<<"Podaj pierwsze slowo: " ;
            std::string  word1 , word2 ;
            std::cin >> word1 ;
            std::cout << "Podaj drugie slowo: " ;
            std::cin >> word2 ;

            bool anagram = isAnagram( word1, word2 ) ;

            if (anagram){
                printf("%s i %s to anagramy ", word1.c_str() , word2.c_str()) ;
            } else{
                printf("%s i %s to nie sa anagramy", word1.c_str() , word2.c_str()) ;
            }
        }
        case 3:{

        }
    }





    return 0;
}
