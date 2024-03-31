#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	vector<char>output;
	stack<int>s;
	int n;
	int cnt = 1;
    bool p = false;
	cin >> n;
	for (int i = 0; i < n; i++){
		int num;
		cin >> num;

		while (cnt <= num){
			s.push(cnt);
			cnt++;
			output.push_back('+');
		}
		if (s.top() == num){
			s.pop();
			output.push_back('-');
		} else{
            p = true;
            break;
		}
	}
    if (p) {
        cout << "NO";
    } else {
        for (int i = 0; i < output.size(); i++) {
		    cout << output[i] << '\n';
        }
    }    
    return 0;
}