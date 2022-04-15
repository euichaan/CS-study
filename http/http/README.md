# HTTP(HyperText Transfer Protocol)  
**HTTP 메시지에 모든 것을 전송**  
- HTML, TEXT  
- IMAGE, 음성, 영상, 파일  
- JSON, XML(API)  
- 거의 모든 형태의 데이터 전송 가능  
- 서버간에 데이터를 주고 받을 때도 대부분 HTTP 사용  

**기반 프로토콜**  
TCP: HTTP/1.1, HTTP/2  
UDP: HTTP/3  
현재 HTTP/1.1 주로 사용, HTTP/2,HTTP/3 도 점점 증가  

## `HTTP 특징`
### 클라이언트 서버 구조
- 클라이언트와 서버를 분리. (비즈니스 로직,data -> 서버 / UI,사용성 -> 클라이언트) 각각 독립적 진화  
- Request Response 구조  
- 클라이언트는 서버에 요청을 보내고, 응답을 대기  
- 서버가 요청에 대한 결과를 만들어서 응답  

### 무상태 프로토콜(Stateless)  
- 서버가 클라이언트의 상태를 보존 X  
- 장점: 서버 확장성 높음(스케일 아웃: 장비를 추가해서 확장하는 방식)  
- 단점: 클라이언트가 추가 데이터 전송  

### Stateful, Stateless의 차이점(예시)
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-9.jpg)  
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-10.jpg)  
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-11.jpg)  
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-12.jpg)  
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-13.jpg)  

### Stateful, Stateless의 차이점 정리
- Stateful(상태 유지): 중간에 다른 점원으로 바뀌면 안된다.(중간에 다른 점원으로 바뀔 때 상태 정보를 다른 점원에게 미리 알려줘야 한다)  
- Stateless(무상태): 중간에 다른 점원으로 바뀌어도 된다. 갑자기 클라이언트 요청이 증가해도, 서버를 대거 투입할 수 있다.    
- 무상테는 응답 서버를 쉽게 바꿀 수 있다 -> **무한한 서버 증설 가능**  

![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-15.jpg)
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-16.jpg)
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-17.jpg)
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-18.jpg)
![차이](https://github.com/euichanhwang/CS_study/blob/main/img/3.http.pdf-19.jpg)



