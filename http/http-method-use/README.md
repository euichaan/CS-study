# HTTP 메서드 활용 
1. **클라이언트에서 서버로 데이터 전송** 
2. **HTTP API 설계 예시**
## 클라이언트에서 서버로 데이터 전송
데이터 전달 방식은 크게 2가지
1. 쿼리 파라미터를 통한 데이터 전송(GET) - 주로 정렬 필터(검색어)  
2. 메시지 바디를 통한 데이터 전송(POST,PUT,PATCH) - 회원 가입, 상품 주문, 리소스 등록, 리소스 변경 등  

**클라이언트에서 서버로 데이터 전송하는 4가지 상황**  
1. 정적 데이터 조회(쿼리 파라미터 미사용)  
- 이미지, 정적 텍스트 문서  
- 정적 데이터는 일반적으로 쿼리 파라미터 없이 리소스 경로로 단순하게 조회가 가능하다(조회시 GET 사용)
```http
GET /static/star.jpg HTTP/1.1
Host: localhost:8080
```
2. 동적 데이터 조회    
- 주로 검색, 게시판 목록에서 정렬 필터(검색어)  
- 쿼리 파라미터 사용
```http
GET /search?q=hello&hl=ko HTTP/1.1
Host: www.google.com
```
- 서버에서 쿼리 파라미터를 기반으로 정렬 필터해서 결과를 동적으로 생성한다  
- 조회 조건을 줄여주는 필터, 조회 결과를 정렬하는 정렬 조건에 주로 사용  
- GET은 쿼리 파라미터를 사용해서 데이터를 전달  

3. HTML Form을 통한 데이터 전송
- 주로 회원 가입, 상품 주문, 데이터 변경 등에 사용
- POST 전송으로 저장
```http
POST/save HTTP/1.1
Host: localhost:8080
Content-Type: application/x-www-form-urlencoded

username=kim&age=20
```
- GET 전송으로 조회 (**GET은 리소스 변경이 발생하는 곳에서 사용하면 안된다**)
```http
GET /members?username=kim&age=20 HTTP/1.1
Host: localhost:8080
```

4. HTTP API를 통한 데이터 전송 







## HTTP API 설계 예시 