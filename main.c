#include <stdio.h>
#include <string.h>

enum doWhat{
    INSERT = 1, SEARCH, DELETE, UPDATE, QUIT
};//열거형 

typedef struct tel {
    char name[11];
    int telnum;
}Tel;//연락처 구조체

int idx = 0;
struct tel arr[10] = { 0 };

void InsertTel(){
    printf("이름을 입력해주세요 : ");
    scanf("%s", arr[idx].name);
    printf("번호를 입력해주세요 : ");
    scanf("%d", &arr[idx].telnum);
    idx++;
    printf("등록 완료");
}


int main(void) {
    int no=0;

    while (no != QUIT) {
        printf("원하는 기능을 입력해주세요.\n");
        printf("연락처 등록 : 1\n");
        printf("연락처 검색 : 2\n");
        printf("연락처 삭제 : 3\n");
        printf("연락처 수정 : 4\n");
        printf("종료 : 5\n");
        scanf("%d", &no);
        switch (no)
        {
        case INSERT:
            InsertTel();
            break;
        case SEARCH:
            SearchTel();
            break;
        case DELETE:
            DeleteTel();
            break;
        case UPDATE:
            UpdateTel();
            break;
        default:
            break;
        }
    }

    return 0;
}

//이 프로그램은 간단한 연락처를 저장하는 프로그램으로 연락처는 이름과 전화번호를 저장하고 있다.
//한건의 연락처는 구조체를 이용하여 작업하고, 프로그램을 제어할 메뉴는 열거형을 사용해서 상수를 선언하시오.
//기능은 4가지 연락처 등록, 검색, 삭제, 수정. 연락처는 구조체 배열로 관리