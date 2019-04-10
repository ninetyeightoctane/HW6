#include <iostream>
#include <vector>

using namespace std;

int  Isprime(int N){

    int flag = 1 , j;

    if(N<=1)
        return 0;

    for(j = 2; j <= N-1; j++){
        if(N % j == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(){

    int n;

    vector<int>v;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;++i)
        v.push_back(i);

    for(std::size_t i = 0 ;i<v.size();++i){
        if(Isprime(v[i]))
            printf("%d is prime\n" , v[i]);
    }

}