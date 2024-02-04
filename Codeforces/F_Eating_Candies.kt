fun main() {
    val T = readLine()!!.toInt()
    repeat(T) {
        val N = readLine()!!.toInt()
        val A = readLine()!!.split(' ').map(String::toInt)
        var i = 0; var j = N - 1; var a = 0; var b = 0; var count = 0; var ans = 0;
        while (i <= j) {
            if(i == 0 && j == N - 1){
                a += A[0]; i++;
                b += A[N - 1]; j--;
                count += 2;
            }
            if(a > b){
                b += A[j]; j--; count++;
            }
            else if(a < b){
                a += A[i]; i++; count++;
            }
            else{
                ans = count;
                count += 2;
                if(i == j) break;
                a += A[i]; i++;
                
                b += A[j]; j--;
            }
            if(a == b) ans = count;
            //println("$a $b $count $ans")
        }
        println(ans)
    }
}
