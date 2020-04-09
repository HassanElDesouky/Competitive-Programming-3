#include "bits/stdc++.h"

using namespace std;
#define el "\n"
#define FOR(i,a,b) for(long long i = a; i <= b; ++i)
#define FORD(i,a,b) for(long long i = a; i >= b; --i)
#define RI(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(n)-1)
#define all(v) ((v).begin()),((v).end())
typedef long long ll;
typedef vector<int>	vi;
typedef vector<ll>	vll;
const double EPS = 1e-9;
const int N = 1e3+2, M = 3e5+5, OO = 0x3f3f3f3f;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction

int card_to_int(string card) {
  vector<string> cards = {"D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DT", "DJ", "DQ", "DK", "DA", 
    "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "CT", "CJ", "CQ", "CK", "CA", 
    "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "HT", "HJ", "HQ", "HK", "HA", 
    "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "ST", "SJ", "SQ", "SK", "SA"};
  REP(i, (int) cards.size()) if (cards[i] == card) {
    //cout << i << ' ' << cards[i] << el;
    return i;
  }
  return -1;
}

int trans(char c) {
    if(c >= '0' && c <= '9')
        return c-'0';
    if(c == 'A')    return 1;
    if(c == 'T')    return 10;
    if(c == 'J')    return 11;
    if(c == 'Q')    return 12;
    if(c == 'K')    return 13;
}

int main() {
    char s[50];
    int card[52];
    int i;
    while(true) {
        for(i = 0; i < 52; i++) {
            scanf("%s", s);
            if(s[0] == '#') return 0;
            card[i] = trans(s[1]);
        }
        queue<int> A, B;
        for(i = 51; i >= 0; i--) {
            if(i%2) A.push(card[i]);
            else    B.push(card[i]);
        }
        int turn = 1;//0 A, 1 B
        int judge = -1;
        queue<int> H;//heap
        while(true) {
            if(turn == 0 && A.empty()) {
                judge = 0;
                break;
            }
            if(turn == 1 && B.empty()) {
                judge = 1;
                break;
            }
            int CARD;
            if(turn == 0)
                CARD = A.front(), A.pop();
            else
                CARD = B.front(), B.pop();
            //printf("%d - %c %d %d\n", CARD, turn+'A', A.size(), B.size());
            H.push(CARD);
            turn = 1-turn;
            int ended = 1;
            while(CARD >= 11 || CARD == 1) {
                ended = 0;
                int paid;
                if(CARD == 1)   paid = 4;
                else if(CARD == 11)   paid = 1;
                else if(CARD == 12)   paid = 2;
                else if(CARD == 13)   paid = 3;
                for(i = 0; i < paid; i++) {
                    if(turn == 0 && A.empty()) {
                        judge = 0;
                        break;
                    }
                    if(turn == 1 && B.empty()) {
                        judge = 1;
                        break;
                    }
                    if(turn == 0)
                        CARD = A.front(), A.pop();
                    else
                        CARD = B.front(), B.pop();
                    H.push(CARD);
                    //printf("%d - %c\n", CARD, turn+'A');
                    if(CARD == 1 || CARD >= 11)//change
                        break;
                }
                if(judge >= 0)  break;
                turn = 1-turn;
            }
            if(judge >= 0)  break;
            if(ended == 0) {
                if(turn == 0) {
                    while(!H.empty()) {
                        A.push(H.front());
                        H.pop();
                    }
                } else {
                    while(!H.empty()) {
                        B.push(H.front());
                        H.pop();
                    }
                }
            }
        }
        printf("%d%3d\n", 2-judge, judge ? A.size() : B.size());
    }
    return 0;
}

//int main() {
   //ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  //string card;
  //while (cin >> card) {
    //if (card == "#") break;
    //deque<int> player, dealer, middle;
    //bool p = true;
    //int cover = 0, tmp = 0;
    //player.push_front(card_to_int(card));
    //for (int i = 0; i < 51; i++) {
      //cin >> card;
      //if (i % 2 == 0) {
        //dealer.push_front(card_to_int(card));
      //} else {
        //player.push_front(card_to_int(card));
      //}
    //}

    //while (true) {
      //if (player.empty() && p || dealer.empty() && !p)
        //break;

      //if (p) {
        //tmp = player.front();
        //player.pop_front();
        //middle.push_front(tmp);

        //if (tmp > 10) {
          //p = false;
          //cover = tmp - 10;
          //continue;
        //}

        //if (cover > 0) {
          //if (cover == 1) {
            //cover = 0;
            //while (!middle.empty()) {
              //dealer.push_back(middle.back());
              //middle.pop_back();
            //}
            //p = false;
          //} else {
            //cover--;
          //}
        //} else {
          //p = false;
        //}
      //} else {
        //tmp = dealer.front();
        //dealer.pop_front();
        //middle.push_front(tmp);

        //if (tmp > 10) {
          //p = true;
          //cover = tmp - 10;
          //continue;
        //}

        //if (cover > 0) {
          //if (cover == 1) {
            //cover = 0;
            //while (!middle.empty()) {
              //player.push_back(middle.back());
              //middle.pop_back();
            //}
            //p = true;
          //} else {
            //cover--;
          //}
        //} else {
          //p = true;
        //}
      //}
    //}

    //if (player.size() == 0) {
      //printf("%d%3d\n", 1, (int) dealer.size());
    //} else {
      //printf("%d%3d\n", 2, (int) player.size());
    //}
  //}
  //return 0;
//}

