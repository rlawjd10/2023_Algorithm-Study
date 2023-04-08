# 2️⃣분할정복 연습문제

7. 분할정복을 사용하여 원소가 n개인 배열에서 가장 큰 원소를 찾는 알고리즘을 작성하시오. 이 알고리즘을 분석하고, 분석결과를 차수 표기법으로 답하시오.

```
int findMax(int low, int high) {
  int mid = (low + high) / 2;
  if(low < mid) {
    if(low > high) {
      max = mid;
      high = mid;
      return findMax(low, high);
    }
    else {
      max = high;
      low = mid;
      return findMax(low, high);
    }
  }
  if(high < mid) {
    if(low < high) {
      max = mid;
      low = mid;
      return findMax(low, high);
    }
    else {
      max = low;
      high = mid;
      return findMax(low, high);
    }
  }
```
분할정복 중에서 이진검색 알고리즘으로 설계하였다. 이진검색 알고리즘에서는 구하려는 값이 미리 주어지고 정렬이 되어있다는 가정이 있지만, 해당 문제에서는 그 조건들을 무시하였다.
초기의 low, high 값은 각각 배열의 첫번째와 마지막 원소를 가리키고 있으며, mid는 low와 high를 2로 나눈 값이다. low가 high보다 큰 상태에서 mid가 low보다 크면 high 값은 mid가 되고, 가장 큰 원소를 의미하는 max는 mid 값을 담게 된다. high가 low보다 큰 상태에서 mid가 high보다 크면 low 값은 mid가 되고, 가장 큰 원소를 의미하는 max는 mid 값을 담게 된다. 
해당 알고리즘에서 큰 수를 찾으려면 배열의 모든 원소들을 한번씩 봐야하기 때문에 최선, 최악, 평균 모두 O(n)일 것이라 생각하였다.
최악: O(n), 최선: O(n), 평균: O(n)
