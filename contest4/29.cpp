#include <bits/stdc++.h>
#define MAXN 100001
using namespace std;

struct point { // diem x , y
    double x, y;
};

bool cmp_x(const point &a, const point &b) { // so sanh toa do x
    return a.x < b.x;
}

bool cmp_y(const point &a, const point &b) { // so sanh toa do y
    return a.y < b.y;
}

point a[MAXN];
double mindist; // ket qua bai toan

void upd_ans(const point &a, const point &b) { // tinh khoang cach a , b roi cap nhap ket qua
    double dist = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    if (dist < mindist) mindist = dist;
}

void find(int l, int r) { // left , right
    if (r <= l) return;
    if (r == l + 1) { // chi co 2 phan tu
        upd_ans(a[l], a[r]); 
        if (!cmp_y(a[l], a[r])) swap(a[l], a[r]);
        return;
    }

    int m = (l + r) / 2; // diem o giua
    double midx = a[m].x; // hoanh do diem o giua
    find(l, m);
    find(m+1, r);

    static point t[MAXN];
    // tron a[l,m] và a[m+1,r] lai, luu vào mang t
    merge(a+l, a+m+1, a+m+1, a+r+1, t, cmp_y);
    // copy tu t vao lai a
    copy(t, t+r-l+1, a+l);

    // mang t  dây luu các phan tu thoa man |x_i - midx| < mindist,
    // voi so luong phan tu là tm
    // do dã sort nên các phan tu se có y tang dan
    int tm = 0;
    for (int i=l; i<=r; i++) if (abs(a[i].x-midx) < mindist) {
        for (int j=tm-1; j>=0 && t[j].y > a[i].y-mindist; j--)
            upd_ans(a[i], t[j]);
        t[tm++] = a[i];
    }
}

int main() {
    int T;
    cin >> T;
    while(T--){
    	int n; cin >> n;
        for (int i=0; i<n; i++) cin >> a[i].x >> a[i].y;
        mindist = 1E20;
        sort(a, a+n, cmp_x);
        find(0, n-1);
        printf("%.6lf\n", mindist);
	}
    return 0;
}
