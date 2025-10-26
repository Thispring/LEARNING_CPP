// 행맨 구현
// 사용자가 맞춰야할 단어를 지정하고, 사용자는 알파벳을 입력합니다.
// 만약 입력받은 알파벳이 단어에 있다면, 단어의 위치에 해당 알파벳 개수만큼 표시합니다.

// TODO: string 배열과 난수를 사용해서 단어 랜덤 구현해보기
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// 행맨 보드를 출력하는 함수
// string 배열을 매개변수로 받고, 함수 내 난수를 이용해
// 배열에 초기화된 무작위 단어로 보드 생성
// 글자 수 만큼 '_' 출력
inline void Init_Borad(int len, char *pch)
{
    char ch = '_';

    for (int i = 0; i < len; i++)
    {
        pch[i] = ch;
    }
}

inline void Print_Board(int len, char *pch)
{
    for (int i = 0; i < len; i++)
    {
        cout << pch[i];
    }
    cout << endl;
}

int main(void)
{
    srand(time(0));

    char user;
    int arrySize = 0;
    int index = 0;
    int count = 10;

    // 사용자가 맞춰야할 단어
    string words[] = {
        {"CAT"}, {"BOOK"}, {"APPLE"}, {"HAPPY"}, {"YELLOW"}, {"MUSIC"}, {"SCIENCE"}, {"DIFFICULT"}, {"ELEPHANT"}, {"MYSTERY"}};
    // 행맨 보드
    char Board[] = {};

    arrySize = sizeof(words) / sizeof(words[0]);
    index = (rand() % arrySize) + 1;

    cout << words[index] << endl;

    // 행맨 초기화 과정
    int wordLength = words[index].length();
    // 게임에서 맞춰야할 단어
    char hangManWord[wordLength];

    // .c_str()은 c에서의 char *와 cpp에서의 string의 호환을 위한 역할을 하고 있음
    strncpy(hangManWord, words[index].c_str(), wordLength);
    Init_Borad(wordLength, Board);

    while (1)
    {
        int matchCount = 0;

        // count가 0일 때 행동
        if (count <= 0)
        {
            cout << "HangMan Dead..." << endl;
            Print_Board(wordLength, hangManWord);
            break;
        }

        cout << "Try typing the alphabet and guess what it is" << endl;
        cout << "Alphabet must enter CAPITAL LETTERS" << endl;
        cout << "Your count: " << count << endl;
        cin >> user;

        if (user >= 65 && user <= 90)
        {

        }
        else
        {
            cout << "Please enter CAPITAL LETTERS" << endl;
            continue;
        }
            
        for (int i = 0; i < wordLength; i++)
        {
            // user가 입력한 단어가 hangMandWord 배열에 있는지 찾고
            if (user == hangManWord[i])
            {
                // 같은 단어가 있는 인덱스의 hangManBoard 데이터를
                // user로 변경
                Board[i] = user;
                matchCount++;
            }
        }

        Print_Board(wordLength, Board);
        // 단어를 맞추었을 때 행동
        if (string(Board) == words[index])
        {
            cout << "HangMan Alive!" << endl;
            break;
        }

        count--;
    }

    return 0;
}
