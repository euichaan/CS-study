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


