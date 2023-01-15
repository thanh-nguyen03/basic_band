### Description

**Bun** là một người rất ghét việc tốn thời gian cho việc đi lại, nhất là khi cậu sống ở Hà Nội với đường xá luôn tắc. Tuy nhiên gần đây trên tuyến đường cậu hay di chuyển mới khánh thành tuyến đường tàu sắt trên cao Cát Linh Hà Đông. Điều này khiên cậu rất vui vì giờ đây cậu có thể tránh khỏi tắc đường bằng việc đi tàu. Tuy nhiên vì muốn tiết kiệm thời gian nhất có thể, cậu muốn tính toán xem nếu cậu di chuyển từ nhà của cậu đến công ty bằng tàu hay tự đi sẽ nhanh hơn. <br>
Coi rằng toàn bộ tuyến tàu sắt là **1 đường thẳng** bắt đầu từ ga Cát Linh được đánh dấu là 0 và điểm cuối ga Yên Nghĩa là điểm có tọa độ là **s**, nhà của Bun ở điểm có tọa độ **x1** và công ty của cậu ở điểm **x2** trên quãng đường này. Trên toàn bộ tuyến tàu sắt **chỉ có một đoàn tàu** di chuyển liên tục giữa hai điểm đầu và cuối của tuyến đường với tốc độ là 1 mét mỗi **t1** giây và ngay lập tức quay đầu mỗi khi đến ga đầu hoặc cuối, còn Bun có thể tự đi với tốc độ 1 mét mỗi **t2** giây. Bun có thể di chuyển tự do giữa hai điểm **x1** và **x2** tùy ý và có thể lên và xuống tàu bất cứ lúc nào mà cậu muốn, nghĩa là cậu có thể tự đi một phần quãng đường trước khi lên tàu. Coi thời gian quay đầu của tàu và thời gian Bun lên xuống tàu là không đáng kể. Biết rằng tại thời điểm **Bun bắt đầu ra khỏi nhà** thì tàu điện đang ở điểm có tọa độ là **c** và có hướng di chuyển là **d** (d = 1 nghĩa là tàu đang di chuyển từ ga Cát Linh đến ga Yên Nghĩa, d = 0 thì tàu di chuyển theo hướng ngược lại) <br>

Bạn hãy giúp Bun tính toán **thời gian ngắn nhất** để đi từ nhà đến công ty nhé! <br>

**Chú ý**: Không được phép sử dụng vòng lặp, đệ quy

**Chú ý:** Vận tốc của Bun ở mỗi hôm một khác nên có thể nhanh hoặc chậm hơn tàu (Tức t1 có thể lơn hơn t2)
<br><br>

### Input

Dòng đầu tiên chứa 3 số nguyên s, x1, x2 (2 &leq; s &leq; 10000, 0 &leq; x1, x2 &leq; s).
<br>
Dòng tiếp theo chứa 2 số nguyên t1, t2 (1 &leq; t1, t2 &leq; 1000).
<br>
Dòng cuối cùng chứa 2 số nguyên c, d (1 &leq; c &leq; 10000, d bằng 0 hoặc 1).
<br><br>

### Output

1 dòng duy nhất in ra thời gian ngắn nhất Bun cần để di chuyển từ nhà đến công ty.

<br>

### Example

<br>
<table>
<tr>
    <td>#</td>
    <td>Input</td>
    <td>Output</td>
</tr>
<tbody>
<tr>
    <td>1</td>
    <td>
        5 4 0<br>
        5 14 2<br>
        1 0<br>
    </td>
    <td>
        55<br>
    </td>
</tr>

</tbody>
</table>
