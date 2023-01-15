**Bun** có một niềm thích thú với số chẵn và những thứ liên quan đến chẵn. Một ngày nọ cậu tự định nghĩa ra một xâu tên là **xâu chẵn**.

Một xâu được gọi là xâu chẵn nếu nó thỏa mãn 2 điều kiện sau đây:

- Độ dài của chuỗi là **một số chẵn**.
- với mỗi **chỉ số chẵn i**, (0 &leq; i &leq; n - 2), ta luôn có a[i] == a[i+1]

Kể từ hôm đó mỗi khi Bun gặp một xâu kí tự, cậu luôn nghĩ cách làm sao cho xâu đó trở thành một xâu chẵn bằng cách xóa bớt các kí tự trong xâu đi. Tuy nhiên vì là một người thích sự tối ưu nên cậu luôn muốn số phần tử bị xóa là ít nhất có thể. Bạn hãy giúp Bun thực hiện điều đó nhé.

# Input

- Dòng đầu tiên ghi số bộ test T (1 &leq; T &leq; 100)
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên một dòng. (1 &leq; strlen(s) &leq; $10^5$)

# Output

- Đưa ra kết quả bài toán theo từng dòng là số kí tự ít nhất cần xóa để xâu trở thành xâu chẵn.
<table>
  <tr>
    <th>Input</th>
    <th>Output</th>
  </tr>
  <tr>
    <td>2<br>ww<br>ssgsses</td>
    <td>0<br>3</td>
  </tr>
</table>
