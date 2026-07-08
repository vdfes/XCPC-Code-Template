
#include <bits/stdc++.h>
using namespace std;
FILE *fin;     // 标准输入
FILE *fout;    // 用户输出
FILE *fstd;    // 标准输出
FILE *fscore;  // 得分文件
FILE *freport; // 报告文件
#define N 105
int n;
int a[N], b1[N], b2[N];
void quit(int x) {
  fprintf(fscore, "%d", x), fclose(fin), fclose(fout);
  fclose(fstd), fclose(fscore), fclose(freport), exit(0);
}
int Judge() {
  fscanf(fin, "%d", &n);
  for (int i = 1; i <= n; i++)
    fscanf(fin, "%d", a + i);
  for (int i = 1; i <= n; i++)
    fscanf(fout, "%d", b1 + i);
  for (int i = 1; i <= n; i++)
    fscanf(fstd, "%d", b2 + i);
  int ans = 0;
  for (int i = 1; i <= n; i++)
    ans += abs(b2[i] - a[i]);
  int sum = 0;
  for (int i = 1; i < n; i++)
    if (__gcd(b1[i], b1[i + 1]) != 1)
      return 0;
  for (int i = 1; i <= n; i++)
    sum += abs(b1[i] - a[i]);
  return sum == ans;
}
int main(int argc, char *argv[]) {
  fin = fopen(argv[1], "r");     // 标准输入
  fout = fopen(argv[2], "r");    // 用户输出
  fstd = fopen(argv[3], "r");    // 标准输出
  int score = atoi(argv[4]);     // 单个测试点分值
  fscore = fopen(argv[5], "w");  // 得分文件
  freport = fopen(argv[6], "w"); // 报告文件
  if (Judge() == 1)
    fprintf(freport, "OK"), quit(score);
  else
    fprintf(freport, "WA"), quit(0);
}
