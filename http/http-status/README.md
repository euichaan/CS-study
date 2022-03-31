# HTTP 상태코드
**클라이언트가 보낸 요청의 처리 상태를 응답에서 알려주는 기능**  
- 1xx(Informational) : 요청이 수신되어 처리중   
- 2xx(Successful) : 요청 정상 처리  
- 3xx(Redirection) : 요청을 완료하려면 추가 행동이 필요 
- 4xx(Client Error) : 클라이언트 오류, 잘못된 문법등으로 서버가 요청을 수행할 수 없음     
- 5xx(Server Error) : 서버 오류, 서버가 정상 요청을 처리하지 못함    

**모르는 상태 코드가 나타나면? -> 상위 코드로 해석해서 처리**   
## 상태 코드 상세 분석
### `1xx`
요청이 수신되어 처리중. 거의 사용하지 않음  
### `2xx`
클라이언트의 요청을 성공적으로 처리  
- 200 OK(요청 성공)  
```http
HTTP/1.1 200 OK 
Content-Type: application/json 
Content-Length: 34

{
"username": "young",
 "age": 20

}
```

- 201 Created(요청 성공해서 새로운 리소스가 생성됨)  
```http
HTTP/1.1 201 Created
Content-Type: application/json 
Content-Length: 34
Location: /members/100

{
"username": "young",
 "age": 20

}
```
생성된 리소스는 응답의 Location 헤더 필드로 식별  

- 202 Accepted  
요청이 접수되었으나 처리가 완료되지 않았음  
배치 처리 같은 곳에서 사용. 예)요청 접수 후 1시간 뒤에 배치 프로세스가 요청을 처리함  

- 204 No Content  
서버가 요청을 성공적으로 수행했지만, 응답 페이로드 본문에 보낼 데이터가 없음  

### `3xx`

### `4xx`

### `5xx`

 




