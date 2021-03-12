#include "person.h"

int main()
{
    int select_num = 0;
    bool exit = false;

    do
    {
        cout << "===========通讯录===========" << endl;
        cout << "1.添加联系人    2.显示联系人" << endl;
        cout << "3.删除联系人    4.查找联系人" << endl;
        cout << "5.修改联系人    5.清空联系人" << endl;
        cout << "7.退出通讯录               " << endl;
        cout << "===========================" << endl << endl;
        cout << "请选择功能：" << endl;

        cin >> select_num;
        while (cin.fail() || (select_num < 1 || select_num > 7))
        {
            cin.clear();
            cin.ignore();
            cout << endl << "输入错误(请输入数字1-7选择相应功能):" << endl;
            cin >> select_num;
        }
        
        switch (select_num)
        {
        case 1:
            add_person();
            break;
        case 2:
            show_person();
            break;
        case 3:
            delete_person();
            break;
        case 4:
            find_person();
            break;
        case 5:
            change_person();
            break;
        case 6:
            empty_person();
            break;
        case 7:
            exit = true;
            break;
        default:
            break;
        }
    }while(!exit);

    return 0;
}
