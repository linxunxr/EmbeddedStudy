#include <iostream>
using namespace std;

class person {
// 公有的 类内类外都可访问
public:
    int mHeight;
// 保护的 类外不可访问 类内可以访问 子类可以访问
protected:
    int mMoney;
// 私有的 类外补课访问 类内可以访问 子类不可访问
private:
    int mAge;

    void show() {
        cout << "身高：" << mHeight << endl;
        cout << "存款：" << mMoney << endl;
        cout << "年龄：" << mAge << endl;
    }
};

void test01() {
    // 通过类实例化一个对象
    person p;
    p.mHeight = 180;
    cout << "身高为：" << p.mHeight << endl;
}

// 成员变量尽量设置为私有
class AccessLevels {
private:
    // 对外只读访问
    int readOnly;
    // 外部不可访问
    int noAccess;
    // 读写访问
    int readWrite;
    // 只写访问
    int writeOnly;
public:
    // 对只读属性进行只读访问
    int getReadOnly() {
        return readOnly;
    }
    // 对读写属性进行读写访问
    void setReadWrite(int val) {
        readWrite = val;
    }
    int getReadWrite() {
        return readWrite;
    }
    // 对只写属性进行只写访问
    void setWriteOnly(int val) {
        writeOnly = val;
    }
};

// 立方体案例
class Cub {
public:
    void setL(int l) {
        L = l;
    }
    void setW(int w) {
        W = w;
    }
    void setH(int h) {
        H = h;
    }
    int getL() {
        return L;
    }
    int getW() {
        return W;
    }
    int getH() {
        return H;
    }
    // 求立方体的体积
    int getCubV() {
        return L * W * H;
    }
    // 求立方体的面积
    int getCubS() {
        return 2 * (L * W + W * H + H * L);
    }
    // 判断两个立方体是否相等
    bool compareCub(Cub c) {
        return c.getL() == L && c.getH() == H && c.getW() == W;
    }
private:
    int L;
    int W;
    int H;
};

void test03() {
    Cub c1;
    c1.setL(10);
    c1.setH(20);
    c1.setW(30);
    cout << "立方体的面积：" << c1.getCubS() << endl;
    cout << "立方体的体积：" << c1.getCubV() << endl;

    Cub c2;
    c2.setL(20);
    c2.setH(20);
    c2.setW(30);
    if (c1.compareCub(c2)) {
        cout << "两个立方体相等" << endl;
    } else {
        cout << "两个立方体不相等" << endl;
    }
}

int main() {
    test01();
    test03();
    return 0;
}
