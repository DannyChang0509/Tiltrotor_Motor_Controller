# Tiltrotor_Motor_Controller

## 使用說明

### 線路

* 程式區塊`setup`中`attach`的腳位應根據線路更改
* 程式區塊`loop`中`analogRead`的腳位應根據線路更改

### 初始化馬達

1. 修改程式碼中之`MIN`、`MAX`之定義，透過三用電表讀取電位值(0V -> 0，5V -> 1023)
2. 停止向 ESC 供電
3. 將遙控器油門調至最大
4. 向 ESC 供電，這時會聽到馬達發出蜂鳴聲，即設置了新的高點
5. 然後在 2 秒後，將遙控器油門調至最低
6. 將再次聽到蜂鳴聲，即設置了新的低點

* [參考影片](https://www.youtube.com/watch?v=uOQk8SJso6Q)
