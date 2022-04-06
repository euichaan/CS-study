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

### 서버에서 기존 데이터를 변경하지 않은 경우  
- 데이터를 전송하는 대신에 저장해 두었던 캐시를 재사용 할 수 있다  
- 단, 클라이언트의 데이터와 서버의 데이터가 같다는 사실을 확인할 수 있는 방법 필요  

1. 첫 번째 응답 시 검증 헤더 추가 예)Last-Modified: 2020년 11월 10일 10:00:00(데이터가 마지막에 수정된 시간)  
2. 웹 브라우저의 브라우저 캐시에 응답 결과를 캐시에 저장한다(데이터 최종 수정일 저장)  
3. 두 번째 요청 시 캐시 시간이 초과했을 때, GET으로 요청 시 캐시가 가지고 있는 데이터 최종 수정일을 함께 보낸다  
```http
GET /star.jpg
if-modified-since: 2020년 11월 10일 10:00:00
```
4. 서버에서는 데이터 최종 수정일을 비교해 보고, 데이터가 아직 수정되지 않았음을 알 수 있다  
**5. 서버에서 HTTP Body는 전송하지 않고 헤더만 HTTP 헤더만 전송한다**  
```http
HTTP/1.1 304 Not Modified
...
Last-Modified: 2020년 11월 10일 10:00:00
```
6. 웹 브라우저에는 응답 결과를 재사용해 헤더 데이터를 갱신한다  
7. 웹 브라우저는 데이터를 브라우저 캐시에서 조회한다

![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-20.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-21.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-22.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-23.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-24.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-25.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-26.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-27.jpg)
![캐시와 조건부 검증](https://github.com/euichanhwang/CS_study/blob/main/img/8.http-header2.pdf-28.jpg)

### `검증 헤더와 조건부 요청 정리 : 검증 헤더(Last-Modified), 조건부 요청(if-modified-since)`
- 캐시 유효 시간이 초과해도, 서버의 데이터가 갱신되지 않으면 304 Not Modified + 헤더 메타 정보만 응답(바디X)  
- 클라이언트는 서버가 보낸 응답 헤더 정보로 캐시의 메타 정보를 갱신  
- 클라이언트는 캐시에 저장되어 있는 데이터 재활용  
- 결과적으로 네트워크 다운로드가 발생하지만 용량이 적은 헤더 정보만 다운로드  
- 매우 실용적인 해결책 
