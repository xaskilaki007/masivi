//4 Имеется информация по итогам экзаменов в институте всего в списке N человек. По
//каждому из студентов имеются следующие сведения: фамилия, оценка по
//математике, оценка по информатике и оценка по физике.
//Ввести информацию об экзаменах и напечатать количество и фамилии
//студентов, имеющих хотя бы одну двойку.

#include<iostream>
#include<ctime>
#include<array>
using namespace std;
int cnt=0;
struct student{
    string fam;
    int mat;
    int inf;
    int phizika;
};
int main(){
    array<student,3>st;
    st[0].fam= "ivanov";
    st[1].fam= "shapkin";
    st[2].fam= "kotov";
    for (int i=0; i<3; i++){
        cin>>st[i].mat
        >>st[i].inf
        >>st[i].phizika;
    }
    for(int i=0; i<3; i++){
        if(st[i].mat==2 or st[i].inf==2 or st[i].phizika==2){
            cnt++;
            cout<<st[i].mat << " " << st[i].inf << " " <<st[i].phizika << " " << st[i].fam << "\n";
        }
        
    }
    cout<<" colichestvo " << cnt;
}
