# URI와 웹 브라우저 요청 흐름  
## URI(Uniform Resource Identifier)
- Uniform: 리소스 식별하는 통일된 방식  
- Resource: 자원,URI로 식별할 수 있는 모든 것(제한 없음)  
- Identifier: 다른 항목과 구분하는데 필요한 정보  
## URI의 분류
URI는 로케이터(locator), 이름(name) 또는 둘 다 추가로 분류될 수 있다  
URL: Resource Locator. 리소스의 위치를 지정    
URN: Resource Name. 리소스에 이름을 부여  
URN 이름만으로 실제 리소스를 찾을 수 있는 방법이 보편화 되지 않음  
**앞으로 URI를 URL 과 같은 의미로 생각**  
![URI](https://github.com/euichanhwang/CS_study/blob/main/img/2.uri-webbrowser.pdf-5.jpg)  
## URL,URN 예시
URL: foo://example.com:8042/over/there?name=ferret#nose  
URN: urn:example:animal:ferret:nose  

## `URL 분석`
scheme://[userinfo@]host[:port][/path][?query][#fragment]   
https://<hi1>www<hi5>.<hi4>google<hi2>.com:443/search<hi3>?q=hello&hl=ko   
- 프로토콜(https)  
- 호스트명(<hi1>www<hi5>.<hi4>google<hi2>.com)  
- 포트 번호(443)  
- 패스(/search)  
- 쿼리 파라미터(q=hello&hl=ko)  

### scheme 
- `scheme:`//[userinfo@]host[:port][/path][?query][#fragment]  
- `https:`//<hi1>www<hi5>.<hi4>google<hi2>.com:443/search<hi3>?q=hello&hl=ko 
- 주로 프로토콜 사용  
- **프로토콜: 어떤 방식으로 자원에 접근할 것인가 하는 약속 규칙.** https,http,ftp 등등  
- http는 80 포트, https는 443 포트를 주로 사용, 포트는 생략 가능  
- https는 http에 보안 추가(HTTP Secure)  

### userinfo
- URL에 사용자정보를 포함해서 인증  
- 거의 사용하지 않음  

### host
scheme://[userinfo@]`host`[:port][/path][?query][#fragment]   
https://`www.google.com`:443/search?q=hello&hl=ko  
- 호스트명  
- 도메인명 또는 IP 주소를 직접 사용가능  

### PORT  
scheme://[userinfo@]host`[:port]`[/path][?query][#fragment]  
<hi1>https://<hi2>www.google.com: `443`/search?q=hello&hl=ko  
- 포트(PORT)  
- 접속 포트  
- 일반적으로 생략, 생략 시 http는 80, https는 443  







