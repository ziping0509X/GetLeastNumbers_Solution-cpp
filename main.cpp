//剑指offer
//输入n个整数，找出其中最小的K个数。
// 例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        if(k>input.size()){
            vector<int> Least;
            return Least;
        }
        if(k==input.size()){
            return input;
        }
        if(k<input.size()){
            int len=input.size();
            vector<int> Least;
            int least[len];
            for(int i=0;i<len;i++){
                least[i]=input[i];
            }
            for(int i=0;i<k;i++){
                for(int j=i;j<len;j++){
                    if(least[i]>least[j]){
                        int temp=least[i];
                        least[i]=least[j];
                        least[j]=temp;
                    }
                }
                Least.push_back(least[i]);
            }

            return Least;
        }
    }
};

int main(void){
    vector<int> list;
    list.push_back(4);
    list.push_back(5);
    list.push_back(1);
    list.push_back(6);
    list.push_back(2);
    list.push_back(7);
    list.push_back(3);
    list.push_back(8);
    Solution solution;
    list=solution.GetLeastNumbers_Solution(list,4);
    cout<<list[0]<<list[1]<<list[2]<<list[3]<<endl;


}

//调试成功！！