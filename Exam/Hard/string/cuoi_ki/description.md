Một ngày nọ, **A** do đã không kiểm soát được chi tiêu của bản thân nên đã bị cháy ví khi mới chỉ qua nửa tháng. Tuy nhiên vì bản tính ham mua đồ của mình nên A rất muốn bạn cậu là **T** bán lại cho A đôi giày mà A rất mê. Tuy nhiên T lại đưa ra thử thách cho A là giải một bài toán và A có thể mua đôi giày đó với giá chính là kết quả của bài toán đó. Bài toán như sau: <br>

Cho hai xâu **a**, **b** có cùng độ dài chỉ gồm các số 0 hoặc 1. A có thể **thực hiện không giới hạn** 1 trong hai phép biến đổi sau **trên xâu a** để đưa xâu a về **giống hệt xâu b**

- Chọn ra hai vị trí i, j bất kì trong xâu và đổi chỗ hai kí tự tại hai vị trí đó. Cái giá phải trả là |i - j|
- Chọn 1 vị trí và đổi giá trị của nó về giá trị ngược lại (0 thành 1, 1 thành 0). Cái giá phải trả là 1.

Hãy tính **cái giá nhỏ nhất** mà A phải trả để mua lại đôi giày của T nhé.

## Input

- Dòng đầu tiên ghi số bộ test T (1 &leq; T &leq; 100)
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là hai xâu ký tự a, b được viết trên hai dòng. (1 &leq; strlen(a), strlen(b) &leq; $10^5$)

## Output

- Đưa ra kết quả bài toán theo từng dòng là cái giá thấp nhất mà A phải trả để mua đôi giày của T.
<table>
  <tr>
    <th>Input</th>
    <th>Output</th>
  </tr>
  <tr>
    <td>3<br>ww<br>ssgsses</td>
    <td>0<br>3</td>
  </tr>
</table>
