#include <iostream>
using namespace std;

// 练习目标：找出并修好下面 3 个 bug
// 建议顺序：普通断点 -> 单步调试 -> 日志点 -> 条件断点

// 功能：计算平均分
double getAverage(const int arr[], int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {   // 疑点 A
        sum += arr[i];
    }
    return sum / n;                    // 疑点 B
}

// 功能：找出最高分
int getMax(const int arr[], int n) {
    int best = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < best) {           // 疑点 C
            best = arr[i];
        }
    }
    return best;
}

// 功能：统计不及格人数（60 分以下）
int countFail(const int arr[], int n) {
    int fail = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 60) {
            fail++;
        }
    }
    return fail;
}

int main() {
    // 数组里放了 6 个数，但本次只应该统计前 5 个（n = 5）
    int scores[6] = {88, 92, 45, 76, 30, 100};
    int n = 5;

    cout << "成绩：";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    cout << "平均分：" << getAverage(scores, n) << endl;
    cout << "最高分：" << getMax(scores, n) << endl;
    cout << "不及格人数：" << countFail(scores, n) << endl;

    return 0;
}
