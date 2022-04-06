# HTTP 헤더 2 : 캐시와 조건부 요청  

## 캐시가 없을 때 - 첫 번째 요청  
![캐시가 없을 때 1](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-3.jpg)  
![캐시가 없을 때 2](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-4.jpg)  
## 캐시가 없을 때 - 두 번째 요청
![캐시가 없을 때 3](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-5.jpg)  
![캐시가 없을 때 4](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-6.jpg)  

- 데이터가 변경되지 않아도 계속 네트워크를 통해 데이터를 다운로드 받아야 한다  
- 인터넷 네트워크는 매우 느리고 비싸다  
- 브라우저 로딩 속도가 느리다 -> 느린 사용자 경험  

## 캐시 적용 - 첫 번째 요청
![캐시가 있을 때 1](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-8.jpg)  
![캐시가 있을 때 2](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-9.jpg)  
## 캐시 적용 - 두 번째 요청  
![캐시가 있을 때 3](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-10.jpg)  
![캐시가 있을 때 4](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-11.jpg)    

- 캐시 덕분에 캐시 가능 시간동안 네트워크를 사용하지 않아도 된다  
- 비싼 네트워크 사용량을 줄일 수 있다  
- 브라우저 로딩 속도가 매우 빠르다 -> 빠른 사용자 경험  

## 캐시 적용 - 세 번째 요청 : 캐시 시간 초과  
- 캐시 유효 시간이 초과하면, 서버를 통해 데이터를 다시 조회하고, 캐시를 갱신한다  
- 이때 다시 네트워크 다운로드가 발생한다  

## `캐시 시간 초과`
- 캐시 유효 시간이 초과해서 서버에 다시 요청하면 다음 두 가지 상황이 나타난다  
1. 서버에서 기존 데이터를 변경함  
2. 서버에서 기존 데이터를 변경하지 않음  
