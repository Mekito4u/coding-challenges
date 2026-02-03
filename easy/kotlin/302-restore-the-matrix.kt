fun main() {
    val n = readln().toInt()
    var cnt = 0
    val unique = mutableSetOf<Int>()
    val a = List(n) {
        readln()
            .split(" ")
            .map {
                it.toInt()
                    .also { num -> unique.add(num) }
            }
    }.map {
        it.map { num ->
            if (num != 0) {
                num
            } else {
                while (unique.contains(cnt)) cnt++
                unique.add(cnt)
                cnt++
            }
        }.also { println(it.joinToString(" "))}
    }
}