//--------------------ĐỒ ÁN MẠNG MÁY TÍNH--------------------//

//--------------------TRA CỨU TỶ GIÁ VÀNG--------------------//

*Nội dung: Chương trình giúp người dùng có thể tra cứu về tỷ giá vàng ở Việt Nam.

*Mô tả:
- Chương trình cho kết nối giữa client và server, client sẽ gửi request đến server và server sẽ xử lý các yêu cầu và gửi response về cho client.
- Nhiều client có thể kết nối đến server cùng lúc.
- Server sẽ quản lý các kết nối của client và có thể mở/đóng server.

*Hướng dẫn sử dụng:
- Đầu tiên sẽ vào thư mục Release, mở file thực thi server để kích hoạt các cổng kết nối (Server.exe).
- Sau đó đồng thời sẽ chạy chương trình để bắt đầu kết nối client đến server (Client.exe).
- Sẽ có 2 chức năng cho người dùng: đăng ký và đăng nhập.
+ Đăng ký nếu chưa có tài khoản.
+ Đăng nhập nếu đã có tài khoản (có thể chuyển đổi qua lại giữa đăng kí và đăng nhập).
- Sau khi đăng ký/đăng nhập, người dùng sẽ vào thẳng trang chủ của chương trình.
- Người dùng chọn loại vàng và ngày muốn tra cứu, sau đó sẽ bấm nút "search" để tìm kiếm, thông tin tỷ giá vàng sẽ được hiện trong bảng chi tiết kế bên.
- Người dùng có thể thay đổi lựa chọn các loại vàng khác nhau (nếu muốn).
- Nút "log out" cho người dùng có thể đăng xuất, quay về màn hình đăng ký/đăng nhập.
- Khi đóng/tắt chương trình đồng nghĩa với việc client disconnect với server.
- Có thể chạy nhiều chương trình cho người dùng cùng lúc. 
- Về phía server, chương trình sẽ hiển thị thông tin các kết nối của client, bao gồm kết nối, đăng ký, đăng nhập, online và disconnect.
- Server có thể ngắt kết nối toàn bộ client bằng nút "disconect all clients".

/*Lưu ý: Người dùng không nên spam các nút bấm liên tục hoặc 2 client tìm kiếm đồng thời 1 lúc, sẽ gây ra lỗi cho server và client.*/
