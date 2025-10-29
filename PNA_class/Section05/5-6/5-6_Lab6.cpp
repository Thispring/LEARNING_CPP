// 영화정보 저장
// 벡털글 이용하여 영화에 대한 정보를 저장했다가
// 출력하는 프로그램을 작성해보자

#include <iostream>
#include <vector>
using namespace std;

class Movie {
public: 
    string title;
    float rating;
    Movie (string t, float r) {
        title = t;
        rating = r;
    }
    void print() {cout << title << ": " << rating << endl;}
};

int main()
{
    vector <Movie> movies;

    movies.push_back(Movie("titinic", 9.9));
    movies.push_back(Movie("gone with the wind", 9.6));
    movies.push_back(Movie("terminator", 9.7));

    for (auto &e : movies)
        e.print();

    return 0;
}
