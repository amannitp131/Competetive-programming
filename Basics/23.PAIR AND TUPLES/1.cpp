#include <iostream>
#include <utility>  // for pair, make_pair
#include <tuple>    // for tuple, make_tuple, tie, tuple_cat, etc.
using namespace std;

int main() {
    // --- PAIR DEMOS ---

    // 1. Creating pairs
    pair<int, string> p1; // default initialization
    pair<int, string> p2 = {1, "Geeks"}; // initialization with values
    pair<int, string> p3 = make_pair(2, "ForGeeks"); // using make_pair

    cout << "Pair p2: " << p2.first << " " << p2.second << endl;
    cout << "Pair p3: " << p3.first << " " << p3.second << endl;

    // 2. Access and update
    p2.first = 10;
    p2.second = "DSA";
    cout << "Updated p2: " << p2.first << " " << p2.second << endl;

    // 3. Compare pairs
    pair<int, int> a = {3, 5}, b = {3, 7}, c = {2, 5};
    cout << boolalpha;
    cout << "a == b: " << (a == b) << ", a != c: " << (a != c) << endl;
    cout << "a > c: " << (a > c) << ", a < b: " << (a < b) << endl;

    // 4. Unpacking a pair using tie
    int num;
    string str;
    tie(num, str) = p3;
    cout << "Unpacked p3: " << num << " " << str << endl;

    

    // --- TUPLE DEMOS ---

    // 1. Creating and assigning tuple
    tuple<char, int, float> tup;
    tup = make_tuple('a', 10, 15.5f);

    // 2. Access and modify tuple elements
    cout << "Tuple: " << get<0>(tup) << " " << get<1>(tup) << " " << get<2>(tup) << endl;
    get<0>(tup) = 'b';
    get<2>(tup) = 20.5f;
    cout << "Modified tuple: " << get<0>(tup) << " " << get<1>(tup) << " " << get<2>(tup) << endl;

    // 3. tuple_size
    cout << "Tuple size: " << tuple_size<decltype(tup)>::value << endl;

    // 4. Swapping tuples
    tuple<int, char, float> t1(1, 'x', 2.5f), t2(2, 'y', 3.5f);
    t1.swap(t2);
    cout << "After swap, t1: " << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;

    // 5. tie() to unpack tuple
    int i; char ch; float f;
    tie(i, ch, f) = t1;
    cout << "Unpacked t1: " << i << " " << ch << " " << f << endl;
    tie(i, ignore, f) = t1;
    cout << "Unpacked t1 (ignore char): " << i << " " << f << endl;

    // 6. tuple_cat to concatenate tuples
    auto t3 = tuple_cat(t1, t2);
    cout << "Concatenated tuple: "
         << get<0>(t3) << " " << get<1>(t3) << " " << get<2>(t3) << " "
         << get<3>(t3) << " " << get<4>(t3) << " " << get<5>(t3) << endl;

    return 0;
}
