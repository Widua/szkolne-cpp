#include <iostream>
#include <string>
#include<bits/stdc++.h>

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

bool find(std::string s, std::string wzorzec, int T[], int& n)
{
    int dlT = s.size(), dlW = wzorzec.size(), j;
    if (dlW > dlT) return false;
    n = 0;
    for (int i = 0; i < dlT-dlW+1; i++)
    {
        for(j=i; j<i+dlW; j++)
            if (s[j] != wzorzec[j - i]) break;
        if (j == i + dlW)
        {
            T[n] = i;
            n++;
        }
    }
    if (n == 0) return false;
    return true;
}

void szyfrowaniePlotkowe()
{
    int t,n,m,i,j,k,sum=0;
    std::string s;
    std::cout<<"Podaj wiadomosc: "<<'\n';
    std::cin>>s;
    std::cout<<"Podaj klucz"<<'\n';
    std::cin>>n;
    std::vector<std::vector<char>> a(n,std::vector<char>(s.size(),' '));
    j=0;
    int flag=0;
    for(i=0;i<s.size();i++){
        a[j][i] = s[i];
        if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
    for(i=0;i<n;i++){
        for(j=0;j<s.size();j++){
            if(a[i][j]!=' ')
                std::cout<<a[i][j];
        }
    }
    std::cout<<'\n';
}
void deszyfracjaPlotkowa()
{
    int t,n,m,i,j,k,sum=0;
    std::string s;
    std::cout<<"Podaj wiadomosc do rozszyfrowania"<<'\n';
    std::cin>>s;
    std::cout<<"Podaj klucz"<<'\n';
    std::cin>>n;
    std::vector<std::vector<char>> a(n,std::vector<char>(s.size(),' '));
    j=0;
    int flag=0;
    for(i=0;i<s.size();i++){
        a[j][i] = '0';
        if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
    int temp =0;
    for(i=0;i<n;i++){
        for(j=0;j<s.size();j++){
            if(a[i][j]=='0')
                a[i][j]= s[temp++];
        }
    }
    flag=0;
    j=0;
    for(i=0;i<s.size();i++){
        std::cout<<a[j][i];
        if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
    std::cout<<'\n';
}

std::string odszyfrowanieKolumnowe (std::string wyraz, int n, int klucz[])
{
    int wiersze{3}, k{0};
    if      (wyraz.size()%n==0) wiersze=wyraz.size()/n;
    else if (wyraz.size()%n!=0) wiersze=wyraz.size()/n+1;
    char tab[wiersze][n];
    for (int j=0; j<n; j++)
    {
        for (int i=0; i<wiersze&&k<wyraz.size(); i++, k++)
        {
            tab[i][j] = wyraz[k];
        }
    }
    for (int i=0; i<wiersze; i++)
    {
        for (int j=0; j<n; j++)
        {
            std::cout<<tab[i][j]<<'\t';
        }
        std::cout<<"\n";
    }
    std::string wynik{""};
    for (int i=0; i<wiersze; i++)
    {
        if (tab[i][klucz[0]]!='-') wynik+=tab[i][2];
        if (tab[i][klucz[1]]!='-') wynik+=tab[i][1];
        if (tab[i][klucz[2]]!='-') wynik+=tab[i][0];
    }
    return wynik;
}
std::string szyfrowanieKolumnowe (std::string wyraz, int n, int klucz[]) {
    int wiersze, k{0};
    if (wyraz.size() % n == 0) wiersze = wyraz.size() / n;
    else if (wyraz.size() % n != 0) wiersze = wyraz.size() / n + 1;
    char tab[wiersze][n];
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < n; j++) {
            tab[i][j] = '-';
        }
    }
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < n && k < wyraz.size(); j++, k++) {
            tab[i][j] = wyraz[k];
        }
    }
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << tab[i][j] << '\t';
        }
        std::cout << "\n";
    }
    std::string wynik{""};
    for (int i = 0; i < n; i++) {
        int k = klucz[i];
        for (int j = 0; j < wiersze; j++) {
            wynik += tab[j][k];
        }
    }
    return wynik;
}

int main() {

    std::cout<<" Ktory algorytm chcesz wykonac?: \n" ;
    std::cout<<" [1] Sprawdzanie czy slowo nie jest palindromem \n" ;
    std::cout<<" [2] Sprawdzenie czy slowa nie sa anagramami \n" ;
    std::cout<<" [3] Wyszukanie wzorcow w tekscie \n" ;
    std::cout<<" [4] Szyfrowanie i deszyfrowanie plotkowe \n";
    std::cout<<" [5] Szyfrowanie i deszyfrowanie kolumnowe \n" ;
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
            break;
        }
        case 3:{

            std::string s, wzorzec;
            int n, T[256] = { 0 };
            std::cout << "podaj przeszukiwany tekst: ";
            std::cin >> s;
            std::cout << "podaj wzorzc: ";
            std::cin >> wzorzec;
            if (find(s, wzorzec, T, n))
            {
                std::cout << "liczba wystapien wzorca: " << n << std::endl;
                std::cout << "podaj wystepowanie wzorca: " << std::endl;
                for (int i = 0; i < n; i++) std::cout << T[i] << "\t";
                std::cout << std::endl;
            }
            else std::cout<<"\nwzorzec nie wystepuje w tekscie"<<std::endl;

            break;
        }
        case 4:{

            szyfrowaniePlotkowe() ;

            deszyfracjaPlotkowa() ;

            break;
        }
        case 5:{

            std::string wyraz;
            int n = 3;
            int klucz[n] = {2,1,0};
            std::cout<<"Podaj wyraz ktory chcesz zakodowac: "; std::cin>>wyraz;
            for (auto & c: wyraz) c = toupper(c);

            std::cout<<szyfrowanieKolumnowe(wyraz, n, klucz);

            std::cout<<"\nPodaj wyraz ktory chcesz odszyfrowac: "; std::cin>>wyraz;
            for (auto & c: wyraz) c = toupper(c);

            std::cout<<odszyfrowanieKolumnowe(wyraz, n, klucz);

            break;
        }
    }





    return 0;
}
