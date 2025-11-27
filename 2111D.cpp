#include<bits/stdc++.h>
using namespace std;

int getFloor(int n){
    return n/100;
}

void fxn(){
    int n, m;
    cin >> n >> m;

    vector<int> classrooms(m, 0);

    for(int& i : classrooms){
        cin >> i;
    }

    sort(classrooms.begin(), classrooms.end());

    int classroomIndex = 0;

    for(int i = 0; i < n; i++){
        cout << classrooms[classroomIndex] << " ";
        cout << classrooms[m - classroomIndex - 1] << " ";
        cout << classrooms[classroomIndex] << " ";
        cout << classrooms[m - classroomIndex - 1] << " ";
        cout << classrooms[classroomIndex] << " ";
        cout << classrooms[m - classroomIndex - 1] << " ";
        cout << endl;

        i++;

        if(i < n){
            cout << classrooms[m - classroomIndex - 1] << " ";
            cout << classrooms[classroomIndex] << " ";
            cout << classrooms[m - classroomIndex - 1] << " ";
            cout << classrooms[classroomIndex] << " ";
            cout << classrooms[m - classroomIndex - 1] << " ";
            cout << classrooms[classroomIndex] << " ";
            cout << endl;
        }

        classroomIndex++;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}