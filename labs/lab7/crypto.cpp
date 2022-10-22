#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cstring>

using namespace std;

typedef vector<uint8_t> seq_t;

seq_t apply_key(const seq_t& seq, const seq_t& key) {
    seq_t res;
    for (size_t i = 0; i < seq.size(); ++i)
        res.push_back(seq.at(i) ^ key.at(i));
    return res;
}

seq_t strToSeq(const char* str) {
    seq_t res;
    for (int i = 0; i < strlen(str); ++i)
        res.push_back(str[i]);
    return res;
}

char* seqToStr(const seq_t& seq) {
    char* res = new char[seq.size() + 1];
    for (size_t i = 0; i < seq.size(); ++i)
        res[i] = (char) seq.at(i);
    res[seq.size()] = 0;
    return res;
}

string stringifySeq(const seq_t& seq) {
    stringstream ss;
    ss << hex << setfill('0');
    for (const auto& item: seq)
        ss << setw(2) << ((int) item) << " ";
    return ss.str();
}

seq_t readSeq(size_t len) {
    seq_t res;
    unsigned x;
    string s;
    for (size_t i = 0; i < len; ++i) {
        cin >> hex >> x;
        res.push_back(x);
    }
    return res;
}

int main(int argc, const char* argv[]) {
    seq_t seq;
    switch (argc) {
        case 1: {
            cout << "Sequence length:";
            int len;
            cin >> len;
            cout << "Put your sequence here:" << endl;
            seq = readSeq(len);
            cout << seqToStr(seq) << endl;
            break;
        }
        case 2: {
            seq = strToSeq(argv[1]);
            cout << stringifySeq(seq) << endl;
            break;
        }
        default:
            cerr << "Can take only 1 or 0 arguments" << endl;
            return 1;
    }

    cout << "Put your key here (" << seq.size() << " bytes):" << endl;
    const seq_t& key = readSeq(seq.size());
    cout << stringifySeq(apply_key(seq, key)) << endl;
    cout << seqToStr(apply_key(seq, key)) << endl;

    return 0;
}
