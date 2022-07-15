👉 [테스터 실행](https://github.com/minckim42/push_swap_tester)
- ./push_swap_tester/push_swap_tester.bash 실행
- ./push_swap/checker_Mac 파일이 존재해야 한다.

👉환경 변수 $ARG에 테스트 할 숫자 담기
```
export ARG="5 4 3 2 1"
한 뒤
./push_swap $ARG
또는
./push_swap $ARG | ./checker_Mac $ARG
```