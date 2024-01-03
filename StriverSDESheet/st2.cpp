// vector size dynamically change

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // faster than pushback

    vector<pair<int, int>> vec;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);

    vector<int> v2(v1);
}