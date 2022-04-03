# HTTP 헤더  
header-field = field-name ":" OWS field-value OWS (OWS:띄어쓰기 허용)  
```http
GET /search?q=hello&hl=ko HTTP/1.1 
Host: www.google.com //헤더 부분 
```  
```http
HTTP/1.1 200 OK
Content-Type: text/html;charset=UTF-8 //헤더 부분  
Content-Length: 3423 //헤더 부분 
```
## HTTP 헤더 용도
HTTP 전송에 필요한 모든 부가정보  
예) 메시지 바디의 내용, 메시지 바디의 크기, 압축, 인증, 요청 클라이언트, 서버 정보, 캐시 관리 정보...  
필요시 임의의 헤더 추가 가능  

## HTTP 표준(2014년 RFC7230~7235)
표현 = 표현 메타데이터+ 표현 데이터  
엔티티 -> 표현(요청이나 응답에서 전달할 실제 데이터)  
![HTTP BODY](https://github.com/euichanhwang/CS_study/blob/main/img/7.http-header1-message%20body.jpg)  

**Content-Type: 표현 데이터의 형식**  
- 미디어 타입, 문자 인코딩  
- 예) application/json, text/html; charset=utf-8    
**Content-Encoding: 표현 데이터의 압축 방식**  
- 표현 데이터를 압축하기 위해 사용  
- 데이터를 전달하는 곳에서 압축 후 인코딩 헤더 추가  
- 데이터를 읽는 쪽에서 인코딩 헤더의 정보로 압축 헤제  
- 예)gzip,deflate,identity    
**Content-Language: 표현 데이터의 자연 언어**  
- 표현 데이터의 자연 언어를 표현  
- 예)ko,en,en-US  
Content-Length: 표현 데이터의 길이  
- 바이트 단위  
- Transfer-Encoding(전송 코딩)을 사용하면 Content-Length를 사용하면 안됨  
표현 헤더는 전송, 응답 둘다 사용  

## `협상(콘텐츠 네고시에이션)`  
**클라이언트가 선호하는 표현 요청**  
Accept: 클라이언트가 선호하는 미디어 타입 전달  
Accept-Charset: 클라이언트가 선호하는 문자 인코딩  
Accept-Encoding: 클라이언트가 선호하는 압축 인코딩  
Accept-Language: 클라이언트가 선호하는 자연 언어  
협상 헤더는 요청시에만 사용  

### `협상과 우선순위`  
**Quality Values(q) 값 사용**   
0~1, 클수록 높은 우선순위. 생략하면 1  
Accept-Language: ko-KR,ko;q=0.9,en-US;q=0.8,en;q=0.7//1.ko-KR;q=1(q생략) 2.ko;q=0.9 3.en-US;q=0.8 4.en:q=0.7  

**구체적인 것이 우선한다.**  
**구체적인 것을 기준으로 미디어 타입을 맞춘다.**  

## 전송 방식  
- Transfer-Encoding  
- Range, Content-Range  

## 전송 방식 설명  
- 단순 전송  
- 압축 전송  
- 분할 전송  
- 범위 전송  






