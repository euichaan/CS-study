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
**200 OK(요청 성공)**  
```http
HTTP/1.1 200 OK 
Content-Type: application/json 
Content-Length: 34

{
"username": "young",
 "age": 20

}
```

**201 Created(요청 성공해서 새로운 리소스가 생성됨)**  
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

**202 Accepted**   
요청이 접수되었으나 처리가 완료되지 않았음  
배치 처리 같은 곳에서 사용. 예)요청 접수 후 1시간 뒤에 배치 프로세스가 요청을 처리함  

**204 No Content**    
서버가 요청을 성공적으로 수행했지만, 응답 페이로드 본문에 보낼 데이터가 없음  
예)웹 문서 편집기에서 save버튼  
save 버튼의 결과로 아무 내용이 없어도 된다. save 버튼 눌러도 같은 화면을 유지해야 한다.  
결과 내용이 없어도 204 메시지(2xx)만으로 성공을 인식할 수 있다.  

### `3xx`
리다이렉션. 요청을 완료하기 위해 유저 에이전트의 추가 조치 필요  
웹 브라우저는 3xx응답의 결과에 Location 헤더가 있으면, Location 위치로 자동 이동(리다이렉트)  
영구 리다이렉션 : 특정 리소스의 URI가 영구적으로 이동  
- 예)/members ->/users  
- 예)/event -> /new-event  


### `4xx`

### `5xx`

 




