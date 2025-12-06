fun main() {
    val n = readln().toInt()
    val line = readln()
    val times = readln().split(" ")
        .map { it.toInt() }

    var maxTime = times[0]
    var maxIndex = 0

    for (i in 1 until n) {
        val diff = times[i] - times[i - 1]
        if (diff >= maxTime) {
            maxTime = diff
            maxIndex = i
        }
    }

    println(line[maxIndex])
}