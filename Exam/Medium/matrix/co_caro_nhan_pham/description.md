## Description

**Bun** rất thích chơi cờ nhân phẩm, tuy nhiên dạo này server của trò chơi này khá chậm khiến cho cậu rất khó chịu, vì vậy cậu đã rủ người bạn của mình chơi một tựa game mang tên **cờ caro nhân phẩm**.

**Luật chơi:** Hai người sẽ nhắm mắt vào đánh bừa X và O (1 và 0) vào trong bảng caro, sau khi đánh hết tất cả các ô chúng ta sẽ thu được một bàn cờ chứa đủ các kí tự X O ở các vị trí. Nếu một người đánh được **k** ký tự liên tiếp **theo chiều ngang hoặc dọc** thì người đó sẽ giành chiến thắng.

- Nếu như cả 2 đều có đủ **k** ký tự liên tiếp hoặc đều không đủ thì in ra "Draw"
- Nếu như Bun thắng hãy in ra "Game de"
- Nếu như Bun thua hãy in ra "Chap thoi"
  <br>
  Bạn hãy xem sau khi chơi thì Bun sẽ giành được chiến thắng hay không nhé. Biết rằng do hào quang nhân vật chính nên Bun **luôn được đánh X**

## Input

- Dòng đầu tiên ghi số bộ test T (1 &leq; T &leq; 100)
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng. Dòng đầu tiên là 2 số **n**, **k**, Dòng thứ 2 là một ma trận nhị phân chỉ gồm 0 và 1, 1 tương trưng cho X, 0 tượng trưng cho O (5 &leq; n &leq; 100, 2 &leq; k &leq; 100)

## Output

- Đưa ra kết quả bài toán theo từng dòng là kết quả của ván cờ đó.

<table>
  <tr>
    <th>Input</th>
    <th>Output</th>
  </tr>
  <tr>
    <td>1<br>5 4<br>
0 1 0 0 0<br>
1 0 0 1 1<br>
1 0 0 0 0<br>
0 1 0 0 0<br>
1 1 1 0 0
    </td>
    <td>Chap thoi</td>
  </tr>
</table>
