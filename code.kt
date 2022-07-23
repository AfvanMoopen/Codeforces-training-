// run on kotlin 1.3.10

import java.io.*
import java.util.*

class FastScanner(stream: InputStream) {
  private val reader: BufferedReader = BufferedReader(InputStreamReader(stream), 32768)
  private var tokenizer: StringTokenizer? = null
  init {
    tokenizer = null
  }
  operator fun next(): String {
    while (tokenizer == null || !tokenizer!!.hasMoreTokens()) {
      tokenizer = StringTokenizer(reader.readLine())
    }
    return tokenizer!!.nextToken()
  }
  fun nextLine(): String? {
    val fullLine: String
    while (tokenizer == null || !tokenizer!!.hasMoreTokens()) {
      fullLine = reader.readLine()
      return fullLine
    }
    return null
  }
  fun nextInt(): Int {
    return Integer.parseInt(next())
  }
  fun nextLong(): Long {
    return java.lang.Long.parseLong(next())
  }

}

fun main() {
	val cin = FastScanner(BufferedInputStream(System.`in`))
	val cout = PrintWriter(BufferedOutputStream(System.out))

	val n = cin.nextInt()
	val s = cin.next() // or nextLine()!!
	val x = IntArray(n)
	val y = IntArray(n)
	for (i in 0..n - 1) {
		x[i] = cin.nextInt()
		y[i] = cin.nextInt()
	}
	
	// solve here

	println(n)
	println(s)
	println(x[0])
	println(y[n-1])

	cout.close()
}

fun solve(n:Int):Int {
	return 0
}