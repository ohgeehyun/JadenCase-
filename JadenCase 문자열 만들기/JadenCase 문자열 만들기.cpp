// JadenCase 문자열 만들기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
/*
   JadenCase 문자열만들기 어려운 부분 딱히없어서 바로 풀리긴했는데 sstream으로 단어만 받아서 대 소문자 변환을 하니 문자열 앞과 뒷부분에 공백을 엄청많이 넣은 경우는 처리가 복잡해해저서 한번 전체 수정했다 ;ㅅ;
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

string solution(string s) {
    string answer = "";
    bool newWord = true;

    for (char& c : s)
    {
        switch (c)
        {
        case ' '://공백인 경우
            answer += c;
            newWord = true;
            break;
        default:
            if (newWord)
            {
                 answer+= toupper(c);
                 newWord = false;
            }
            else
            {
                answer += tolower(c);
            }
            break;
        }
    }
   
    return answer;
}

int main()
{

    system("pause");
}

