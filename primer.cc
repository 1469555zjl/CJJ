#include <iostream>
#include <vector>
using namespace std; // 把std名字空间展开，省的写std::前缀

int main(void)
{
    int n;
    cout << "请输入元素个数：";
    cin >> n;

    vector<int> v(n); // 建一个长度为n的vector
    for (int i = 0; i < n; ++i)
    {
        cout << "第" << i + 1 << "个数";
        cin >> v[i];
    }

    // 用指针的方法遍历：拿到地址，然后 ++ 移动
    int *p = v.data(); // vector连续储存，data()返回int*
    cout << "你输入的是：";
    for (int i = 0; i < n; ++i)
    {
        cout << *(p + i) << ' ';
    }
    cout << endl;
    return 0;
}
// 输出结果：以3为例
// 请输入元素个数：3
// 第1个数"x"
// 第2个数"y"
// 第3个数"z"
// 你输入的是：x y z